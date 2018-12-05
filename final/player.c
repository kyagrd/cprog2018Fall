// vim: sw=4: ts=4: expandtab:
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

int char2shape(char);
char shape2char(int);
int char2value(char);
char value2char(int);

int getCards(int cards[][13]);

void nextcardMeLast(int cards[][13],
                    int yourshape, int yourvalue,
                    int *p_myshape, int *p_myvalue)
{
    // 자기가 들고 있는 가장 높은 카드부터 (좋지않은 예)
    for (int j=12; j>=0; --j)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
                *p_myshape=i; // 0, 1, 2, 3
                *p_myvalue=j; // 0 - 12
                return;
            }
}

void nextcardMeFirst(int cards[][13],
                     int *p_myshape, int *p_myvalue)
{
    // 자기가 들고 있는 가장 높은 카드부터 (좋지않은 예)
    for (int j=12; j>=0; --j)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }
}

int main(int argc, char* argv[])
{
    // "D0" 다이아 10
    // "D3" 다이아 3
    // "DK" 다이아 K
    // "SJ" 스페이드 J
    // "HQ" 하트 Q
    // "CA" 클로버 A

    /*
    내가 들고 있는 상태의 카드 1
    상대방이 들고 있는 상태의 카드 -1
    누구도 갖고 있지 않은 카드 0 (이미 사용함)
    */
    int cards[4][13] = {};
    getCards(cards); // 딜러로부터 카드 받기

    char str[8];
    char strMe[8];

    if (argc>1) { // 내 카드를 먼저 제시하고 상대방이 그걸 보고 대응하는 경우
        for (int n=0; n<26; ++n) {
            int myshape = -1;
            int myvalue = -1;

            nextcardMeFirst(cards, &myshape, &myvalue);
            assert(1==cards[myshape][myvalue]);

            strMe[0] = shape2char(myshape);
            strMe[1] = value2char(myvalue);
            strMe[2] = '\0';
            cards[myshape][myvalue] = 0; // 사용한 카드는 0으로
            printf("%s\n", strMe); fflush(stdout);

            scanf("%s", str);
            int yourshape = char2shape(str[0]);
            int yourvalue = char2value(str[1]);
            cards[yourshape][yourvalue] = 0; // 사용한 카드는 0으로
        }
    } else { // 상대방이 먼저 카드를 제시하고 그걸 보고 대응하는 경우
        for (int n=0; n<26; ++n) {
            scanf("%s", str);
            int yourshape = char2shape(str[0]);
            int yourvalue = char2value(str[1]);
            cards[yourshape][yourvalue] = 0; // 사용한 카드는 0으로

            int myshape = -1;
            int myvalue = -1;

            nextcardMeLast(cards, yourshape, yourvalue, &myshape, &myvalue);
            assert(1==cards[myshape][myvalue]);

            strMe[0] = shape2char(myshape);
            strMe[1] = value2char(myvalue);
            strMe[2] = '\0';
            cards[myshape][myvalue] = 0; // 사용한 카드는 0으로
            printf("%s\n", str); fflush(stdout);

            // log result
            if ( myvalue == yourvalue ) {
                fprintf(stderr, "%s %s\tdraw\n",    str, strMe);
            } else if (    (strMe[1]=='2' && str[2]=='A') ||
                        ( !(strMe[1]=='A' && str[2]=='2') && myvalue > yourvalue ) ) {
                fprintf(stderr, "%s %s\t%s won\n",  str, strMe, argv[0]);
            } else {                                          
                fprintf(stderr, "%s %s\t%s lost\n", str, strMe, argv[0]);
            }
        }
    }

    return 0;
}

int char2shape(char c) {
    switch (c) {
        case 'C': return 0;
        case 'D': return 1;
        case 'H': return 2;
        case 'S': return 3;
        default: return -1;
    }
}

char shape2char(int i) {
    switch (i) {
        case 0: return 'C';
        case 1: return 'D';
        case 2: return 'H';
        case 3: return 'S';
        default: return '\0';
    }
}

int char2value(char c) {
    switch (c) {
        case '2': return  0;
        case '3': return  1;
        case '4': return  2;
        case '5': return  3;
        case '6': return  4;
        case '7': return  5;
        case '8': return  6;
        case '9': return  7;
        case '0': return  8;
        case 'J': return  9;
        case 'Q': return 10;
        case 'K': return 11;
        case 'A': return 12;
        default: return -1;
    }
}

char value2char(int i) {
    switch (i) {
        case  0: return '2';
        case  1: return '3';
        case  2: return '4';
        case  3: return '5';
        case  4: return '6';
        case  5: return '7';
        case  6: return '8';
        case  7: return '9';
        case  8: return '0';
        case  9: return 'J';
        case 10: return 'Q';
        case 11: return 'K';
        case 12: return 'A';
        default: return -1;
    }
}

int getCards(int cards[][13]) {
    char str[8];
    // 딜러로부터 26개의 입력을 받는다.
    for (int n=0; n<26; ++n) {
        scanf("%s", str);
        int shape = char2shape(str[0]);
        int value = char2value(str[1]);
        cards[shape][value] = 1; // 내가 나눠받은 카드
    }
    // 내가 받지 않은 카드는 다 상대방이 가지고 있으므로
    for (int i=0; i<4; ++i)
        for (int j=0; j<13; ++j) {
            if (0==cards[i][j])
                cards[i][j] = -1;
        }

    return 0;
}

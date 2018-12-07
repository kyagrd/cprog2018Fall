// 인증코드: 1383

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
    int count = 0;
    
    while(1) {

        for (int j = 0; j <= 12; j++) {
            for (int i = 0; i <= 3; i++)
                if(1 == cards[i][j]) {
                    // 자기가 들고있는 카드중 상대방 카드보다 큰 카드 베팅
                    if(count == 0) {
                        if(j > yourvalue) {
                            *p_myshape = i; // 0, 1, 2, 3
                            *p_myvalue = j; // 0 - 12
                            return;
                        }
                    }
                    // 자기가 들고있는 카드중 상대방 카드랑  같은 숫자 카드 베팅
                    if(count == 1) {
                        if(j == yourvalue) {
                            *p_myshape = i; // 0, 1, 2, 3
                            *p_myvalue = j; // 0 - 12
                        return;
                        }
                    }
                    // 자기가 들고있는 카드중 제일 낮은 카드 베팅
                    if (count == 2) {
                        *p_myshape=i; // 0, 1, 2, 3
                        *p_myvalue=j; // 0 - 12
                        return;
                        }
                    }
        }
        count++;
    }
}
void nextcardMeFirst(int cards[][13],
                     int *p_myshape, int *p_myvalue)
{
   // 자기가 들고 있는 가장 낮은 카드부터
    for (int j = 0; j <= 12; j++)
        for (int i = 0; i <= 3; i++)
            if(1 == cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }

}

#include "playerMain.txt"

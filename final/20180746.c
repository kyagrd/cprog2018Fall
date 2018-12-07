// 이름:김재욱
// 학번:20180746
// 인증코드:1272

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
    // 자기가 들고 있는 가장 작은 카드부터 
    for (int j=0; j<=12; ++j)
        for (int i=0; i<=3; ++i)
            if(1==cards[i][j]) {
                *p_myshape=i; // 0, 1, 2, 3
                *p_myvalue=j; // 0 - 12
                return;
            }
}

void nextcardMeFirst(int cards[][13],
                     int *p_myshape, int *p_myvalue)
{
    // 자기가 들고 있는 가장 작은 카드부터
    for (int j=0; j<=12; ++j)
        for (int i=0; i<=3; ++i)
            if(1==cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }
}

#include "playerMain.txt"

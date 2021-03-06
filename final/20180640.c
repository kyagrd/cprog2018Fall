// 인증코드:1378

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
    //내가 상대방보다 큰 카드를 낼 경우
    for (int j=0; j<=12; ++j)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
            	if(j > yourvalue){
                *p_myshape=i; // 0, 1, 2, 3
                *p_myvalue=j; // 0 - 12
                return;
            }
	}
    //상대방과 같은 카드 내기
    for (int j=0; j<=12; ++j)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
            	if(j == yourvalue){
                *p_myshape=i; // 0, 1, 2, 3
                *p_myvalue=j; // 0 - 12
                return;
            }
    }
    // 작은 카드부터 내기
    for (int j=0; j<=12; ++j)
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
    // 작은카드부터 내기
    for (int j=0; j<=12; ++j)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }
}

#include "playerMain.txt"

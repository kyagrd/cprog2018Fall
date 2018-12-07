// 인증코드: 1381

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
{//방어
    for(int i = 0; i <=3 ; ++i){
        for(int j = 0; j <= 12; ++j){
            if(1 == cards[i][j]){
                if(/*yourshape == i &&*/ yourvalue == 12 && j == 0){//상대방이 A를 냈을때 같은문양 2존재
                    *p_myshape = i;
                    *p_myvalue = j;
 
                    return;
                }else if(/*yourshape == i &&*/ yourvalue < j){
                    *p_myshape = i;
                    *p_myvalue = j;
 
                    return;
                }/*else if(yourshape < i){
                    *p_myshape = i;
                    *p_myvalue = j;
 
                    return;
                }*/
            }
        }
    }
 
    for(int a = 0; a <= 3 ; ++a){
        for(int b = 0; b <=12; ++b){
            if(1 == cards[a][b]){
                *p_myshape = a;
                *p_myvalue = b;
 
                return;
            }
        }
    }
}

void nextcardMeFirst(int cards[][13],
                     int *p_myshape, int *p_myvalue)
{//공격
    // 자기가 들고 있는 가장 높은 카드부터 (좋지않은 예)
    for (int j=12; j>=0; --j)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }
}

#include "playerMain.txt"

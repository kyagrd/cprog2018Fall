// 이름: 구준한
// 학번: 20180733
// 인증코드: 1285

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
    // 상대방이 킹, 퀸인 경우 => 에이스를 던진다.
    if(9 < yourvalue && !(yourvalue == 12)){ // 
        for (int i=3; i>=0; --i) // 다이아 하트 클로버 스페이드
            if(1==cards[i][12]) {
                *p_myshape=i;
                *p_myvalue=12;
                return;
            }
    }
    
    // 상대방이 에이스를 던진 경우 => 2-3를 낸다.
    for (int j=0; j<=1; ++j)
    if(11 <= yourvalue){ // 
        for (int i=3; i>=0; --i) // 다이아 하트 클로버 스페이드
            if(1==cards[i][j]) {
                *p_myshape=i; // 0, 1, 2, 3
                *p_myvalue=j; // 0 - 12
                return;
            }
    }
    
    // 상대방 보다 하나 이상의(1+ 부터 시작) 더 큰 것을 낸다. (단 에이스는 아니다.)
    for(int j = yourvalue+1; j < 12; j++)
        for(int i=3; i>=0; --i)
            if(1==cards[i][j]){
                *p_myshape=i; // 0, 1, 2, 3
                *p_myvalue=j; // 0 - 12
                return;    
            }

    // 자기가 들고 있는 가장 높은 카드부터 (좋지않은 예)
    // 디폴트 소스
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
	// 먼저 가장 작은 것 부터 던진다.
    for (int j=0; j<4; j++)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }
           
    for (int j=10; 5<j; --j)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }
    
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

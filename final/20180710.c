// 인증코드:1308

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
    int j, i;
    
    if(yourvalue == 12)
		{for(int j=0; j<=12; j++)
			for(int i=0; i<=3; i++)
				if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
		}
    else if(yourvalue == 11)
    	{for(j=12; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 10)
    	{for(j=11; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 9)
    	{for(j=10; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 8)
    	{for(j=9; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 7)
    	{for(j=8; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 6)
    	{for(j=7; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 5)
    	{for(j=6; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 4)
    	{for(j=5; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 3)
    	{for(j=4; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 2)
    	{for(j=3; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 1)
    	{for(j=2; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    else if(yourvalue == 0)
    	{for(j=1; j<=12; j++)
    		for(i=0; i<=3; i++)
    			if(1==cards[i][j])
				{
					*p_myshape=i;
					*p_myvalue=j;
					return;
				}
    	}
    
    else
    	{for(i=3; i>=0; i--)
    		for(j=12; j>=0; j--)
    			if(1==cards[i][j])
    			{
    				*p_myshape=i;
    				*p_myvalue=j;
    				return;
    			}
    	}
}


void nextcardMeFirst(int cards[][13],
                     int *p_myshape, int *p_myvalue)
{
    
    if(*p_myvalue != 0)
    {for (int j=12; j>=0; --j)
        for (int i=3; i>=0; --i)
            if(1==cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }
    }
    else 
    {for(int j=0; j<=0; j++)
    	for(int i=0; i<=3; i++)
    		if(1==cards[i][j]) {
                *p_myshape=i;
                *p_myvalue=j;
                return;
            }
}
}

#include "playerMain.txt"

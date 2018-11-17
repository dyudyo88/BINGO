#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 2 
#define OVERLAPED 1
#define UNOVERLAPED 0



int row, col;
int num;


int get_number_byCom2(int x[N][N])
{	
	int i,j;
	num = 1 + (rand() % ((N)*(N)));

	 for(i=0;i<N;i++)
      {
         for(j=0;j<N;j++)                  
         {
            if(x[i][j]==num)
            {   
               return 0;
            }

            else
            {   
               return 1;
            }
         }
      }
   

	return num;
} 



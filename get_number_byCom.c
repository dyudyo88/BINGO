#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define M 3 
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N];
int arr2[N][N];
int row, col;
int num;



int get_number_byCom(int num)
{	
	num = 1 + (rand() % ((N)*(N)));
	
	int i,j;
	int flag=0;
	
		
	while(1) //중복확인  
	{
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)						
			{
				if((arr1[N][N]==0)||(arr2[N][N]==0)) //그 전에 입력한 숫자면 다시 반복  
				{	
					do
					{
						printf("ERROR!");
						return flag=1; 
					}while( (arr1[N][N]!=0) || (arr2[N][N]!=0) );
					
				}
				
				else
				{
					printf("컴퓨터가 %d를 선택했습니다.\n",num); 
					return flag=1; //그 전에 선택한  숫자가 아니면 빠져나옴.		
				}
			}
		}
	}
} 

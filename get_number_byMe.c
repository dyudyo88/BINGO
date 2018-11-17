#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 1
#define OVERLAPED 1
#define UNOVERLAPED 0

extern int arr1[N][N];
extern int arr2[N][N];
int row, col;
int num;
int cnum;


int get_number_byMe(int y[N][N])
{
	int i,j;
	int flag = 0;
	
	do
	{	
		printf("1~%d 사이의 숫자입력 : ",N*N);
		scanf("%d",&num);
			
		if(num<1||num>N*N) //범위 밖의 숫자를 선택했을 때 
		{	
			printf("1~%d 사이의 숫자를 입력해야합니다.",N*N);	
			flag=1; //깃발 들기->처음으로 돌아감 	
		}
		
		
		else //1~NxN 범위 사이의 숫자를 입력했을 때  
		{	
			flag=1;
			
			for(i=0;i<N;i++)
			{
				for(j=0;j<N;j++)
				{	
					if(y[i][j]==num)
					{	
						flag=0;
						break;
					}
				}
			}	

			if (flag == 1)
			{
				printf("선택했던 숫자 입니다. 다시 입력하세요.\n");
			}
		}
		
	}while(flag == 1); //flag가 0이면 탈출 

	printf("\n");	
	return num;

}


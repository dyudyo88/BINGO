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




int get_number_byMe(int num)
{
	int i,j;
	int flag = 0;
	

	do
	{	
		printf("1~%d 사이의 숫자입력 : ",N*N);
		scanf("%d",&num);
		
		
		
		if(num<1||num>N*N) //범위 밖의 숫자를 선택했을 때 
		{	
			do
			{
				printf("1~%d 사이의 숫자를 입력해야합니다. 다시 입력하세요 : ",N*N);
				scanf("%d",&num);
			}while(num<1||num>N*N);
			
		}
			
			
				
		else //1~NxN 범위 사이의 숫자를 입력했을 때  
		{	
			while(1) //그 전에 선택한 숫자인지 확인
				{
					for(i=0;i<N;i++)
					{
						for(j=0;j<N;j++)
						{
							if((arr1[i][j]==0)||(arr2[i][j]==0)) //그 전에 입력한 숫자면 다시 반복  
							{
								printf("선택했던 숫자 입니다. 다시 입력하세요 :");
								return flag=1;  //?
							}
							else
							{	
								return flag=0; //그 전에 숫자가 아니면 빠져나옴.//?? 
							}
							
						}
					}
					
				}
		}
					
	
	}while(flag == 1); //flag가 0이면 탈출 

	printf("\n");	
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N];
int arr2[N][N];
int row, col;
int num;



int get_number_byMe(int num)
{
	int flag=0;
	int i,j;
	do
	{	
		printf("1~%d 사이의 숫자입력 : ",N*N);
		scanf("%d",&num);
		
			
		if (num<=1||num>=N*N) 
		{	
			while(num<=1||num>=N*N)
			{
				printf("1~%d 사이의 숫자를 입력해야합니다. 다시 입력하세요 : ",N*N);
				scanf("%d",&num);
				
								 //여기에서도 중복확인을 해줘야하나?
			}
			
		}
				
		else //1~NxN 범위 사이의 숫자를 입력했을 때  
		{	
			while(1) //그 전에 선택한 숫자인지 확인->즉, 중복확인  
				{
					for(i=0;i<N;i++)
					{
						for(j=0;j<N;j++)
						{
							if((arr1[N][N]==num)||(arr2[N][N]==num)) //그 전에 입력한 숫자면 다시 반복  
							{
								printf("선택했던 숫자 입니다. 다시 입력하세요 :");
								return flag;
							}
							else
							{	
								return flag=1; //그 전에 숫자가 아니면 빠져나옴. 
								//return get_number_byCom(int num); ??????????????????????????????????
							}
							
						}
					}
					
				}
		}
					
	
	}while(flag == 1); //flag가 0이면 탈출 
	
	printf("컴퓨터의 차례입니다.\n");
	
}


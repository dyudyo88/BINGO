#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define M 3 
#define OVERLAPED 1
#define UNOVERLAPED 0

extern int arr1[N][N];
extern int arr2[N][N];
int row, col;
int num;




int get_number_byMe(void)
{
	int i,j;
	int flag = 0;
	int num;
	
	do
	{	
	 /*	int * input_number;
		input_number=&num;       //stop_overlap_number에서 num를 불러주기 위해 포인터사용  
	 */
		
		
		printf("1~%d 사이의 숫자입력 : ",N*N);
		scanf("%d",&num);
		
		
		
		if(num<1||num>N*N) //범위 밖의 숫자를 선택했을 때 
		{	
			printf("1~%d 사이의 숫자를 입력해야합니다. 다시 입력하세요 : ",N*N);	
			flag=1;	
		}
		else //1~NxN 범위 사이의 숫자를 입력했을 때  
		{	
		
		//	while(1) //그 전에 선택한 숫자인지 확인
				{
					flag=1;
					for(i=0;i<N;i++)
					{
						for(j=0;j<N;j++)
						{	
							
							if((arr1[i][j]==num) || (arr2[i][j]==num)) 
							{	
								printf("선택했던 숫자 입니다. 다시 입력하세요 :");
								flag=0;
								break;
							}

						}
					}
					
				}
		}
	
	}while(flag == 1); //flag가 0이면 탈출 

	printf("\n");	
	
	return num;
}


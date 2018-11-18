#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

//컴퓨터가 빙고번호 선택  
int get_number_byCom(void)
{	
	 //컴퓨터의 빙고번호 선택을 랜덤으로 
	int i,j;
	int flag=0;
	
	
	do //컴퓨터가 빙고번호 선택할 때 중복으로 선택하지 않도록 do~while구문 사용해서 프로그래맹하기  
	{	
		num = 1 + (rand() % ((N)*(N)));
		printf("컴퓨터가 %d를 선택했습니다\n", num); //컴퓨터가 선택하는 숫자 출력   
		
		flag=1;	
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{	
				if(arr2[i][j]==num) // 컴퓨터가 입력한 숫자가  중복이 아니면 종료 
				{	
					flag=0;
					break;
				}
			}
		}
		
		if (flag == 1) //컴퓨터가 입력한 숫자가 중복이면 숫자를 다시 받음 										 
		{
			printf("ERROR! 컴퓨터가 선택했던 숫자를 선택했습니다. 다시 선택합니다. \n");	//함수의 처음으로 되돌아감
			continue;
		}	
		
	}while(flag==1);
	printf("\n\n");
	return num;
}


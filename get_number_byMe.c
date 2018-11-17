#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

//사용자가 빙고번호 선택 
int get_number_byMe(void)
{
	int flag = 0;
	
	do	//범위 밖의 숫자, 범위 안의 숫자인데 중복일 때의 경우를 고려해서 상황에 맞게 출력하도록 하는 것 
	{	
		printf("1~%d 사이의 숫자입력 : ",N*N);		//사용자의 숫자 입력 
		scanf("%d",&num);
			
		if(num<1||num>N*N) 							//사용자가 범위 밖의 숫자를 선택했을 때 
		{	
			printf("1~%d 사이의 숫자를 입력해야합니다.",N*N);	
			flag=1; 								//깃발 들기->처음으로 돌아감 	
		}
		
		else 	//사용자가 범위안의 숫자를 입력했을 때  
		{	
			flag=1;		//깃발 들고있다가 조건 충족시키면 반복문을 빠져나가게 함  
			
			for(i=0;i<N;i++)
			{
				for(j=0;j<N;j++)
				{	
					if(arr1[i][j]==num) // 중복해서 선택을 하면 다시 처음으로 되돌아가도록 함. 
					{	
						flag=0;
						break;
					}
				}
			}	

			if (flag == 1) 	//사용자가 입력한 숫자가 선택했던 숫자 일 때										 
			{
				printf("선택했던 숫자 입니다. 다시 입력하세요.\n");	//다시 되돌아감  
			} 
		}
		
	}while(flag == 1); //flag가 0이면 탈출 

	printf("\n");	
	return num;  
}


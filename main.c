#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define OVERLAPED 1
#define UNOVERLAPED 0

void initiate_bingo(int arr[N][N]);
void print_bingo(int arr[N][N]);
int check(int arr[N][N], int row, int col);
int get_number_byMe(int num);
int arr1[N][N];
int arr2[N][N];
int row, col;
int num;

int main(void)
{	
	
    printf("---------START BINGO GAME----------\n");
    int arr[N][N]={0};      //배열 선언 
	

	srand((unsigned int)time(NULL));   //난수
	
    initiate_bingo(arr1);		//빙고판 생성
	initiate_bingo(arr2);
    print_bingo(arr1);         //빙고판 출력
    print_bingo(arr2); 
	get_number_byMe(num);
	
	//중복인지 확인해주기  
   
    return 0;
}



void initiate_bingo(int arr[N][N])
{
    int check = 0;
	int row;
	int col;
    

	for(row=0; row<N; row++)                        //NxN 배열 반복문
	{for (col=0; col<N; col++)
		{
        	while(1)
			{ 	
				arr[row][col] = 1 + (rand() % ((N)*(N)));   // 1 ~ NxN 난수 생성 및 대입
            	check = check_overlap(arr,row,col);         // 중복 체크-> 중복있으면 1 , 중복없으면 0 
            	if (!check)                           // 중복 없으면 무한루프 탈출 및 다음 배열로 넘어감
               	break;
         }
      }
   }
}


void print_bingo(int arr[N][N])
{	
	int row;
	int col;
	
   for (row=0; row <N; row++)
   {
      for (col=0; col <N; col++)
	  {
        printf("%d\t", arr[row][col]);      //출력
      }
      printf("\n\n");                     //가로줄 다쓰면 줄내림
   }
   
   printf("\n\n");
}

int check_overlap(int arr[N][N], int row, int col)
{
   int i, j;
   for (i = 0; i <N; i++){
      for (j = 0; j <N; j++){      
         if ((i==row)&&(j==col)) //자기자신이면 지나치기	 
            return UNOVERLAPED;
         else if (arr[i][j] == arr[row][col]) //숫자 겹치면 다시 돌아가기  
            return OVERLAPED;           
      }
   }
}


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
				scanf("%d",&num);     //여기에서도 중복확인을 해줘야하나?ㅠㅠ 하... 
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
							if(arr1[N][N]==num) //그 전에 입력한 숫자면 다시 반복  
							{
								printf("그 전에 선택한 숫자 입니다. 다시 입력하세요 :");
								return flag;
							}
							else
							{
								flag=1; //그 전에 숫자가 아니면 빠져나옴. 
							}
							
						}
					}
					
				}
		}
					
	
	}while(flag == 1); //flag가 0이면 탈출 
	
}




/*int get_number_byCom(int num)
{
	int i;
	
	while(1)
	{
		         
        if (!check)        // 중복 없으면 무한루프 탈출 및 다음 배열로 넘어감
    	break;
	}
	
	
} */

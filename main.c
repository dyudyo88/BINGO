#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4  

void initiate_bingo(int arr[N][N]);
void print_bingo(int arr[N][N]);


int main(void)
{
   printf("START BINGO GAME\n");
   int arr[N][N];    	  	 //배열 선언

   initiate_bingo(arr);      //빙고판 생성  
   print_bingo(arr);         //빙고판 출력

   return 0;
}



void initiate_bingo(int arr[N][N])
{
   int row;
   int col;
    
   srand((unsigned int)time(NULL));   //난수 초기화
   

	for(row=0; row<N; row++)	//NxN 배열에 넣기위한 반복문
   	{
	   for (col=0; col<N; col++)
      	{
        	arr[row][col] = 1 + (rand() % ((N)*(N)));   // 1 ~ NxN 사이의 난수생성과 입력 
      	}
   	}
}

void print_bingo(int arr[N][N])
{   
   int row;
   int col;
   
   for (row=0; row<N; row++)
   {
      for (col=0; col<N; col++)
     {
        printf("%d\t", arr[row][col]);      //빙고판 출력
     }
      printf("\n"); //가로줄 다 쓰면 아랫줄로 이동                     
   }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define M 3 
#define OVERLAPED 1
#define UNOVERLAPED 0

//extern int arr1[N][N]; //real
//extern int arr2[N][N]; //real
int row, col;



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





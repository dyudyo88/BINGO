#include "function.h"

//빙고테이블 초기에 만드는 함수  
void initiate_bingo(int arr[N][N])
{
    int check = 0;	//중복 있는지 없는지 체크하는 함수 값을 대입할 변수 초기화 

	for(row=0; row<N; row++)  	//NxN 배열 반복문
	{for (col=0; col<N; col++)
		{
        	while(1) //중복없을 때까지 무한루프  
			{ 	
				arr[row][col] = 1 + (rand() % ((N)*(N)));   // 1 ~ NxN 난수 생성 및 대입
            	check = check_overlap(arr,row,col);         // 중복 체크-> 중복있으면 1 , 중복없으면 0 
            	if (!check)                           		// 중복 없으면 무한루프 탈출 및 다음 배열로 넘어감
               	break;
         }
      }
   }
}





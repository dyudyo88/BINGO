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



void initiate_bingo(int arr[N][N])
{
    int check = 0;
	int row;
	int col;
    

	for(row=0; row<N; row++)                        //NxN �迭 �ݺ���
	{for (col=0; col<N; col++)
		{
        	while(1)
			{ 	
				arr[row][col] = 1 + (rand() % ((N)*(N)));   // 1 ~ NxN ���� ���� �� ����
            	check = check_overlap(arr,row,col);         // �ߺ� üũ-> �ߺ������� 1 , �ߺ������� 0 
            	if (!check)                           // �ߺ� ������ ���ѷ��� Ż�� �� ���� �迭�� �Ѿ
               	break;
         }
      }
   }
}
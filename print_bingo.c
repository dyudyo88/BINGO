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





void print_bingo(int arr[N][N])
{	

	
	int row;
	int col;
	
   for (row=0; row <N; row++)
   {
      for (col=0; col <N; col++)
	  {
        printf("%d\t", arr[row][col]);      //���
      }
      printf("\n\n");                     //������ �پ��� �ٳ���
   }
   
   printf("\n\n");
   

}


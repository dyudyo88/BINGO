#include "function.h"

void print_bingo(int arr[N][N])
{	
	int row;
	int col;
	
   for (row=0; row <N; row++)
   {
      for (col=0; col <N; col++)
	  {
        printf("%5d\t", arr[row][col]);      //���
      }
      printf("\n\n");                     //������ �پ��� �ٳ���
   }
   
   printf("\n\n");
}


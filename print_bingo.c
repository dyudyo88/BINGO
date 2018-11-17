#include "function.h"

void print_bingo(int arr[N][N])
{	
	int row;
	int col;
	
   for (row=0; row <N; row++)
   {
      for (col=0; col <N; col++)
	  {
        printf("%5d\t", arr[row][col]);      //출력
      }
      printf("\n\n");                     //가로줄 다쓰면 줄내림
   }
   
   printf("\n\n");
}


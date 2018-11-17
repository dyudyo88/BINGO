#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

//빙고판에 숫자 랜덤으로 배열할 때 겹치는지 안 겹치는지 확인해주는 함수  

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

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



//�����ǿ� ���� �������� �迭�� �� ��ġ���� �� ��ġ���� Ȯ�����ִ� �Լ�  

int check_overlap(int arr[N][N], int row, int col)
{
   int i, j;
   for (i = 0; i <N; i++){
      for (j = 0; j <N; j++){      
         if ((i==row)&&(j==col)) //�ڱ��ڽ��̸� ����ġ��	 
            return UNOVERLAPED;
         else if (arr[i][j] == arr[row][col]) //���� ��ġ�� �ٽ� ���ư���  
            return OVERLAPED;           
      }
   }
}

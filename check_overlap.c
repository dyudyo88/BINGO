#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

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

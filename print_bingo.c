#include "function.h"

//�������̺��� ���� ��Ȳ�� ȭ�鿡 ���
void print_bingo(int arr[N][N])
{
   for (row=0; row <N; row++)			//������	 
   {
      for (col=0; col <N; col++) 		//������  
	  {
        printf("%5d\t", arr[row][col]);  //���
      }
   	   printf("\n\n");                  //������ �� ���� �ٳ���
   }
   printf("\n\n");
}

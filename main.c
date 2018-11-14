#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define UNOVERLAPED 0
#define OVERLAPED 1


void initiate_bingo(int arr[N][N]);
void print_bingo(int arr[N][N]);


int main(void)
{
   printf("START BINGO GAME\n");
   int arr[N][N];    	  	 //�迭 ����

   initiate_bingo(arr);     //������ ���� 
   initiate_bingo(arr); 
   print_bingo(arr);         //������ ���

   return 0;
   
}



void initiate_bingo(int arr[N][N])
{
    int row;
    int col;
	int i,j;
	
   srand((unsigned int)time(NULL));   //���� �ʱ�ȭ
   

	for(row=0; row<N; row++)	//NxN �迭�� �ֱ����� �ݺ���
   	{
	   for (col=0; col<N; col++)
      	{
        	arr[row][col] = 1 + (rand() % ((N)*(N)));   // 1 ~ NxN ������ ���������� �Է� 
      	}
   	}
   	
   	for(i=0; i<N; i++)
	{	
		for(j=0; j<N; j++)
		{ 	
			do
			{
				if((i==row)&&(j==col)) 	 //�ڱ��ڽ��̸� ����ϱ�  
				return UNOVERLAPED;
				else if(arr[i][j]==arr[row][col]) //���� ��ġ�� �ǵ��ư��� 
				return OVERLAPED;
			}while(j=(N-1));
		}
	}
   	
   	
}

void print_bingo(int arr[N][N])
{   
   int row;
   int col;
   
   for (row=0; row<N; row++)
   {
      for (col=0; col<N; col++)
     {
        printf("%d\t", arr[row][col]);      //������ ���
     }
      printf("\n"); //������ �� ���� �Ʒ��ٷ� �̵�                     
   }
}

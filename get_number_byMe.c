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




int get_number_byMe(int num)
{
	int i,j;
	int flag = 0;
	

	do
	{	
		printf("1~%d ������ �����Է� : ",N*N);
		scanf("%d",&num);
		
		
		
		if(num<1||num>N*N) //���� ���� ���ڸ� �������� �� 
		{	
			do
			{
				printf("1~%d ������ ���ڸ� �Է��ؾ��մϴ�. �ٽ� �Է��ϼ��� : ",N*N);
				scanf("%d",&num);
			}while(num<1||num>N*N);
			
		}
			
			
				
		else //1~NxN ���� ������ ���ڸ� �Է����� ��  
		{	
			while(1) //�� ���� ������ �������� Ȯ��
				{
					for(i=0;i<N;i++)
					{
						for(j=0;j<N;j++)
						{
							if((arr1[i][j]==0)||(arr2[i][j]==0)) //�� ���� �Է��� ���ڸ� �ٽ� �ݺ�  
							{
								printf("�����ߴ� ���� �Դϴ�. �ٽ� �Է��ϼ��� :");
								return flag=1;  //?
							}
							else
							{	
								return flag=0; //�� ���� ���ڰ� �ƴϸ� ��������.//?? 
							}
							
						}
					}
					
				}
		}
					
	
	}while(flag == 1); //flag�� 0�̸� Ż�� 

	printf("\n");	
}


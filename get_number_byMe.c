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



int get_number_byMe(int num)
{
	int flag=0;
	int i,j;
	do
	{	
		printf("1~%d ������ �����Է� : ",N*N);
		scanf("%d",&num);
		
			
		if (num<=1||num>=N*N) 
		{	
			while(num<=1||num>=N*N)
			{
				printf("1~%d ������ ���ڸ� �Է��ؾ��մϴ�. �ٽ� �Է��ϼ��� : ",N*N);
				scanf("%d",&num);
				
								 //���⿡���� �ߺ�Ȯ���� ������ϳ�?
			}
			
		}
				
		else //1~NxN ���� ������ ���ڸ� �Է����� ��  
		{	
			while(1) //�� ���� ������ �������� Ȯ��->��, �ߺ�Ȯ��  
				{
					for(i=0;i<N;i++)
					{
						for(j=0;j<N;j++)
						{
							if((arr1[N][N]==num)||(arr2[N][N]==num)) //�� ���� �Է��� ���ڸ� �ٽ� �ݺ�  
							{
								printf("�����ߴ� ���� �Դϴ�. �ٽ� �Է��ϼ��� :");
								return flag;
							}
							else
							{	
								return flag=1; //�� ���� ���ڰ� �ƴϸ� ��������. 
								//return get_number_byCom(int num); ??????????????????????????????????
							}
							
						}
					}
					
				}
		}
					
	
	}while(flag == 1); //flag�� 0�̸� Ż�� 
	
	printf("��ǻ���� �����Դϴ�.\n");
	
}


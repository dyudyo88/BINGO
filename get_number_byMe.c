#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define M 3 
#define OVERLAPED 1
#define UNOVERLAPED 0

extern int arr1[N][N];
extern int arr2[N][N];
int row, col;
int num;




int get_number_byMe(void)
{
	int i,j;
	int flag = 0;
	int num;
	
	do
	{	
	 /*	int * input_number;
		input_number=&num;       //stop_overlap_number���� num�� �ҷ��ֱ� ���� �����ͻ��  
	 */
		
		
		printf("1~%d ������ �����Է� : ",N*N);
		scanf("%d",&num);
		
		
		
		if(num<1||num>N*N) //���� ���� ���ڸ� �������� �� 
		{	
			printf("1~%d ������ ���ڸ� �Է��ؾ��մϴ�. �ٽ� �Է��ϼ��� : ",N*N);	
			flag=1;	
		}
		else //1~NxN ���� ������ ���ڸ� �Է����� ��  
		{	
		
		//	while(1) //�� ���� ������ �������� Ȯ��
				{
					flag=1;
					for(i=0;i<N;i++)
					{
						for(j=0;j<N;j++)
						{	
							
							if((arr1[i][j]==num) || (arr2[i][j]==num)) 
							{	
								printf("�����ߴ� ���� �Դϴ�. �ٽ� �Է��ϼ��� :");
								flag=0;
								break;
							}

						}
					}
					
				}
		}
	
	}while(flag == 1); //flag�� 0�̸� Ż�� 

	printf("\n");	
	
	return num;
}


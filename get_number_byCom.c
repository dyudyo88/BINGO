#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

//��ǻ�Ͱ� �����ȣ ����  
int get_number_byCom(void)
{	
	num = 1 + (rand() % ((N)*(N))); //��ǻ���� �����ȣ ������ �������� 
	int i,j;
	int flag=0;
	
	do //��ǻ�Ͱ� �����ȣ ������ �� �ߺ����� �������� �ʵ��� do~while���� ����ؼ� ���α׷����ϱ�  
	{	
		printf("��ǻ�Ͱ� %d�� �����߽��ϴ�.\n", num); //��ǻ�Ͱ� �����ϴ� ���� ���   
		
		flag=1;
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{	
				if(arr2[i][j]==num) // �ߺ��ؼ� ������ �ϸ� �ٽ� ó������ �ǵ��ư����� ��. 
				{	
					flag=0;
					break;
				}
			}
		}
		
		if (flag == 1) 											 
		{
			printf("��ǻ�Ͱ� �����ߴ� ���ڸ� �����߽��ϴ�. �ٽ� ���ϴ�.\n");	//�Լ��� ó������ �ǵ��ư�
			break;
		} 
		
	}while(flag==1);

	printf("\n");
	return num;
}


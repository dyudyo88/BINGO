#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

//��ǻ�Ͱ� �����ȣ ����  
int get_number_byCom(void)
{	
	 //��ǻ���� �����ȣ ������ �������� 
	int i,j;
	int flag=0;
	
	
	do //��ǻ�Ͱ� �����ȣ ������ �� �ߺ����� �������� �ʵ��� do~while���� ����ؼ� ���α׷����ϱ�  
	{	
		num = 1 + (rand() % ((N)*(N)));
		printf("��ǻ�Ͱ� %d�� �����߽��ϴ�\n", num); //��ǻ�Ͱ� �����ϴ� ���� ���   
		
		flag=1;	
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{	
				if(arr2[i][j]==num) // ��ǻ�Ͱ� �Է��� ���ڰ�  �ߺ��� �ƴϸ� ���� 
				{	
					flag=0;
					break;
				}
			}
		}
		
		if (flag == 1) //��ǻ�Ͱ� �Է��� ���ڰ� �ߺ��̸� ���ڸ� �ٽ� ���� 										 
		{
			printf("ERROR! ��ǻ�Ͱ� �����ߴ� ���ڸ� �����߽��ϴ�. �ٽ� �����մϴ�. \n");	//�Լ��� ó������ �ǵ��ư�
			continue;
		}	
		
	}while(flag==1);
	printf("\n\n");
	return num;
}


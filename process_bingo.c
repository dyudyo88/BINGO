#include "function.h"

extern int arr1[N][N];	// ����� �����ǹ迭��  �ش� ���Ͽ��� ����� �� �ְ� ��
extern int arr2[N][N];	// ��ǻ��  �����ǹ迭��  �ش� ���Ͽ��� ����� �� �ְ� �� 

//���õ� ���ڸ� �Է¹޾Ƽ� �����ǿ� ä��� �Լ�
int process_bingo(int num)
{	
	{
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{	
			
				if(arr1[i][j]==num) //get number_byMe ���� �Է¹��� ���� ������ ������ ���ڰ� 0���� �ٲ� 
				{
					arr1[i][j]=0; 	
				}
						
				if(arr2[i][j]==num) //get number_byCom���� �Է¹��� ���� ������  ������ ���ڰ� 0���� �ٲ�  
				{
					arr2[i][j]=0;
				}
				
			}
		}
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define M 3   //M���� ���� �ϸ� ������ �̱�  
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N]; //����� ������ �迭 
int arr2[N][N]; //��ǻ�� ������ �迭 
int row, col;



void initiate_bingo(int arr[N][N]); 					//�������̺� �ʱ⿡ ����  
void print_bingo(int arr[N][N]);						//�������̺��� ���� ��Ȳ�� ȭ�鿡 ���
int check(int arr[N][N], int row, int col);				//�������̺� ���� �������� ��ġ�� �� �ߺ��Ǵ��� Ȯ��
int get_number_byMe(int num);							//����ڰ� �����ȣ ����  
int get_number_byCom(int cnum);							//��ǻ�Ͱ� �����ȣ ����  
int process_bingo(int num);								//���õ� ���ڸ� �Է¹޾Ƽ� �������̺��� ĭ�� ä��  
int count_bingo(int bingonum,int arr[N][N]);						//����� ����,����,�밢���� �� ���� ����ؼ� ��ȯ 




int main(void)
{	

	printf("---------START BINGO GAME----------\n");
    int arr[N][N]={0};      //�迭 ���� �� �ʱ�ȭ  
	int num;
	int bingonum;
	srand((unsigned int)time(NULL));   //����
	
	
	initiate_bingo(arr1);		//����� ������ ����
	initiate_bingo(arr2);		//��ǻ�� ������ ����  
    print_bingo(arr1);         	//����� ������ ��� 
	print_bingo(arr2); 			//��ǻ�� ������ ���  
    
    
    while(1)
	{	
		num = get_number_byMe(num);
		process_bingo(num);
		
		num = get_number_byCom(num);
		process_bingo(num);
		
		count_bingo(bingonum,arr1);
		count_bingo(bingonum,arr2);
		
		
		print_bingo(arr1);  	     //����� ������ ���
   		print_bingo(arr2); 			//��ǻ�� �������ε� ����� 
	
		if(bingonum>=M)
		{
			break;
		}		
		
	}
	
	
	
	
	
   
    return 0;
}





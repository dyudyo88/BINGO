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

void initiate_bingo(int arr[N][N]);
void print_bingo(int arr[N][N]);
int check(int arr[N][N], int row, int col);
int get_number_byMe(int num);
int get_number_byCom(int num);
int process_bingo(int arr[N][N],int num);
int count_bingo(int arr[N][N]);



int main(void)
{	
	
    printf("---------START BINGO GAME----------\n");
    int arr[N][N]={0};      //�迭 ���� 
	

	srand((unsigned int)time(NULL));   //����
	
    initiate_bingo(arr1);		//����� ������ ����
	initiate_bingo(arr2);		//��ǻ�� ������ ����  
    print_bingo(arr1);         //����� ������ ���
    print_bingo(arr2); 		//��ǻ�� �������ε� �����  
    
    //do~while ���� ���� M���� �� ������ ������
	 
	get_number_byMe(num);		//����� ��ȣ����  
	process_bingo(arr1,num);	//����� ���ù�ȣ �����	 
	process_bingo(arr2,num);	
	
	get_number_byCom(num);		//��ǻ�� ��ȣ����	 
	process_bingo(arr1,num);	//��ǻ�� ���ù�ȣ �����  
	process_bingo(arr2,num);
	
	count_bingo(arr1);
	count_bingo(arr2);
	
	
   
    return 0;
}





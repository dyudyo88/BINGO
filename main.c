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



int main(void)
{	
	
    printf("---------START BINGO GAME----------\n");
    int arr[N][N]={0};      //�迭 ���� 
	

	srand((unsigned int)time(NULL));   //����
	
    initiate_bingo(arr1);		//������ ����
	initiate_bingo(arr2);
    print_bingo(arr1);         //������ ���
    print_bingo(arr2); 
	get_number_byMe(num);
	get_number_byCom(num);
	
	//�ߺ����� Ȯ�����ֱ�  
   
    return 0;
}





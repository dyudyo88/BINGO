#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 1   //M���� ���� �ϸ� ������ �̱�  
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N]; //����� ������ �迭 
int arr2[N][N]; //��ǻ�� ������ �迭 
int row, col;	//initiate�Լ����� �����ٰ� ������ ���� ����
int i,j;    
int num;		//���� ���� �Է� ���� ���� ����   


void initiate_bingo(int arr[N][N]); 					//�������̺� �ʱ⿡ ����  
void print_bingo(int arr[N][N]);						//�������̺��� ���� ��Ȳ�� ȭ�鿡 ���
int check(int arr[N][N], int row, int col);				//�������̺� ���� �������� ��ġ�� �� �ߺ��Ǵ��� Ȯ��
int get_number_byMe(void);								//����ڰ� �����ȣ ����  
int get_number_byCom(void);								//��ǻ�Ͱ� �����ȣ ����  
int process_bingo(int num);								//���õ� ���ڸ� �Է¹޾Ƽ� �������̺��� ĭ�� ä��  
int count_bingo(int arr[N][N], int bingonumber);		//����� ����,����,�밢���� �� ���� ����ؼ� ��ȯ 


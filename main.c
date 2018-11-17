#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 2   //M���� ���� �ϸ� ������ �̱�  
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N]; //����� ������ �迭 
int arr2[N][N]; //��ǻ�� ������ �迭 
int row, col;



void initiate_bingo(int arr[N][N]); 					//�������̺� �ʱ⿡ ����  
void print_bingo(int arr[N][N]);						//�������̺��� ���� ��Ȳ�� ȭ�鿡 ���
int check(int arr[N][N], int row, int col);				//�������̺� ���� �������� ��ġ�� �� �ߺ��Ǵ��� Ȯ��
int get_number_byMe(void);								//����ڰ� �����ȣ ����  
int get_number_byCom(void);							//��ǻ�Ͱ� �����ȣ ����  
int process_bingo(int num);								//���õ� ���ڸ� �Է¹޾Ƽ� �������̺��� ĭ�� ä��  
int count_bingo(int arr[N][N], int bingonumber);							//����� ����,����,�밢���� �� ���� ����ؼ� ��ȯ 



int main(void)
{	

	int arr[N][N]={0};      //�迭 ���� �� �ʱ�ȭ  
	int num;
	int userbingonumber;		//������� ���� ��
	int combingonumber;		//��ǻ���� �����
	int bingonumber;
	int turn;
	 
	srand((unsigned int)time(NULL));   //����
	
	printf("-----------START BINGO GAME-------------\n");
	initiate_bingo(arr1);		//����� ������ ����
	initiate_bingo(arr2);		//��ǻ�� ������ ����  
    print_bingo(arr1);         	//����� ������ ��� 
	print_bingo(arr2); 			//��ǻ�� ������ ���  
    
   	 while(1)
		{
			num = get_number_byMe();
			process_bingo(num);
			
			num = get_number_byCom();
			process_bingo(num);
			
			turn++;
		
			print_bingo(arr1);  	     //����� ������ ���
   			print_bingo(arr2); 			//��ǻ�� �������ε� ����� 
				
			userbingonumber = count_bingo(arr1,bingonumber);
			combingonumber = count_bingo(arr2,bingonumber);	
			
			if(userbingonumber>=M)
			{
				printf("����ڰ� �̰���ϴ�.");	
				printf("%d��°�� �¸��߽��ϴ�",turn);
				break; 
			}
			
			else if(combingonumber>=M)
			{
				printf("��ǻ�Ͱ� �̰���ϴ�.");	
				printf("%d��°�� �¸��߽��ϴ�",turn);
				break; 
			}
			
			else if(userbingonumber>=M&&combingonumber>=M)
			{
				printf("�����ϴ�.");
				printf("%d��°�� �����ϴ�.", turn);
			}

		}
		
    
}

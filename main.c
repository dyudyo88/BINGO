#include "function.h"

int main(void)
{	
	int arr[N][N]={0};      //�迭 ���� �� �ʱ�ȭ  
	int userbingonumber;	//������� ���� ��
	int combingonumber;		//��ǻ���� �����
	int bingonumber;
	int turn;
	 
	srand((unsigned int)time(NULL));   //����
	
	printf("-----------START BINGO GAME-------------\n\n\n\n");
	initiate_bingo(arr1);		//����� ������ ����
	initiate_bingo(arr2);		//��ǻ�� ������ ����  
    print_bingo(arr1);         	//����� ������ ��� 
    
   	 while(1)
		{
			num = get_number_byMe();	//������� ���� �Է�  
			process_bingo(num);			//����ڰ� �Է��� ���ڸ� �����ǿ��� 0���� �ٲ� 
			
			num = get_number_byCom();	//��ǻ���� ���� �Է�  
			process_bingo(num);			//��ǻ�Ͱ� �Է��� ���ڸ� �����ǿ��� 0���� �ٲ�  
			
			turn++; 					//�� ��°�� �ºΰ� ���������� �˷��ֵ��� �ϴ� �� 
	
			print_bingo(arr1);  	   	//����� ������ ���
				
			userbingonumber = count_bingo(arr1, bingonumber);			//������� ���� �� �Է¹ޱ� 
			printf("����ڰ� %d bingo �߽��ϴ�.\n", userbingonumber); 	//������� ���� ���� �� ���� ���  
			combingonumber = count_bingo(arr2, bingonumber);				//�������  ���� �� �Է¹ޱ� 
			printf("��ǻ�Ͱ� %d bingo �߽��ϴ�.\n\n", combingonumber); 	//��ǻ���� ���� ���� �� ���� ���  
			
			
				
			if(userbingonumber>=M) //������� ���� ���� M���� ũ�ų� ������ ������ ������ ��� (���� ���ÿ� ������ ���� �� �����Ƿ� ������� M���� ũ�ų� ���� �� �ִ�)
			{
				printf("����ڰ� �̰���ϴ�.\n");	
				printf("%d��°�� �¸��߽��ϴ�.\n",turn);
				printf("��ǻ���� ������\n");
				print_bingo(arr2); //��ǻ�� ������ ���  
				break; 	//���ѷ��� ���� ������ 	
			}
			
			else if(combingonumber>=M )//��ǻ�� ���� ���� M���� ũ�ų�  ������ ������ ���  
			{
				printf("��ǻ�Ͱ� �̰���ϴ�.\n");	
				printf("%d��°�� �¸��߽��ϴ�.\n",turn);
				printf("��ǻ���� ������\n");
				print_bingo(arr2); //��ǻ�� ������ ���  
				break; //���ѷ��� ���� ������
			}
			
			else if(userbingonumber>=M && combingonumber>=M )//����ڿ� ��ǻ����  ���� ���� M��  ������ ������ ������ ���  
			{
				printf("�����ϴ�.");
				printf("%d��°�� �����ϴ�.", turn);
				printf("��ǻ���� ������\n");
				print_bingo(arr2); //��ǻ�� ������ ���  
				break; //���ѷ��� ���� ������
			}

		}   
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define OVERLAPED 1
#define UNOVERLAPED 0

void initiate_bingo(int arr[N][N]);
void print_bingo(int arr[N][N]);
int check(int arr[N][N], int row, int col);
int get_number_byMe(int num);
int arr1[N][N];
int arr2[N][N];
int row, col;
int num;

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
	
	//�ߺ����� Ȯ�����ֱ�  
   
    return 0;
}



void initiate_bingo(int arr[N][N])
{
    int check = 0;
	int row;
	int col;
    

	for(row=0; row<N; row++)                        //NxN �迭 �ݺ���
	{for (col=0; col<N; col++)
		{
        	while(1)
			{ 	
				arr[row][col] = 1 + (rand() % ((N)*(N)));   // 1 ~ NxN ���� ���� �� ����
            	check = check_overlap(arr,row,col);         // �ߺ� üũ-> �ߺ������� 1 , �ߺ������� 0 
            	if (!check)                           // �ߺ� ������ ���ѷ��� Ż�� �� ���� �迭�� �Ѿ
               	break;
         }
      }
   }
}


void print_bingo(int arr[N][N])
{	
	int row;
	int col;
	
   for (row=0; row <N; row++)
   {
      for (col=0; col <N; col++)
	  {
        printf("%d\t", arr[row][col]);      //���
      }
      printf("\n\n");                     //������ �پ��� �ٳ���
   }
   
   printf("\n\n");
}

int check_overlap(int arr[N][N], int row, int col)
{
   int i, j;
   for (i = 0; i <N; i++){
      for (j = 0; j <N; j++){      
         if ((i==row)&&(j==col)) //�ڱ��ڽ��̸� ����ġ��	 
            return UNOVERLAPED;
         else if (arr[i][j] == arr[row][col]) //���� ��ġ�� �ٽ� ���ư���  
            return OVERLAPED;           
      }
   }
}


int get_number_byMe(int num)
{
	int flag=0;
	int i,j;
	do
	{	
		printf("1~%d ������ �����Է� : ",N*N);
		scanf("%d",&num);
			
		if (num<=1||num>=N*N) 
		{	
			while(num<=1||num>=N*N)
			{
				printf("1~%d ������ ���ڸ� �Է��ؾ��մϴ�. �ٽ� �Է��ϼ��� : ",N*N);
				scanf("%d",&num);     //���⿡���� �ߺ�Ȯ���� ������ϳ�?�Ф� ��... 
			}
			
		}
				
		else //1~NxN ���� ������ ���ڸ� �Է����� ��  
		{	
			while(1) //�� ���� ������ �������� Ȯ��->��, �ߺ�Ȯ��  
				{
					for(i=0;i<N;i++)
					{
						for(j=0;j<N;j++)
						{
							if(arr1[N][N]==num) //�� ���� �Է��� ���ڸ� �ٽ� �ݺ�  
							{
								printf("�� ���� ������ ���� �Դϴ�. �ٽ� �Է��ϼ��� :");
								return flag;
							}
							else
							{
								flag=1; //�� ���� ���ڰ� �ƴϸ� ��������. 
							}
							
						}
					}
					
				}
		}
					
	
	}while(flag == 1); //flag�� 0�̸� Ż�� 
	
}




/*int get_number_byCom(int num)
{
	int i;
	
	while(1)
	{
		         
        if (!check)        // �ߺ� ������ ���ѷ��� Ż�� �� ���� �迭�� �Ѿ
    	break;
	}
	
	
} */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define UNOVERLAPED 0
#define OVERLAPED 1


void initiate_bingo(int arr[N][N]);
void print_bingo(int arr[N][N]);
int get_number_byMe(int num);
int get_number_by_Com(int cnum);

int main(void)
{
    printf("START BINGO GAME\n");
    int arr[N][N];    	  	 //�迭 ����
	int num; //����ڰ� �Է��� ���� 
	int cnum; //��ǻ�Ͱ� �� ����
	 
    initiate_bingo(arr);     //������ ���� 
    initiate_bingo(arr); 
    print_bingo(arr);         //������ ���
    get_number_by_Me(num); 	//user�� ��ȣ �Է¹ޱ� 
	get_number_by_Com(num);
   return 0;
   
}



void initiate_bingo(int arr[N][N])
{
    int row;
    int col;
	int i,j;
	
   srand((unsigned int)time(NULL));   //���� �ʱ�ȭ
   

	for(row=0; row<N; row++)	//NxN �迭�� �ֱ����� �ݺ���
   	{
	   for (col=0; col<N; col++)
      	{
        	arr[row][col] = 1 + (rand() % ((N)*(N)));   // 1 ~ NxN ������ ���������� �Է� 
      	}
   	}
   	
   	for(i=0; i<N; i++)
	{	
		for(j=0; j<N; j++)
		{ 	
			do
			{
				if((i==row)&&(j==col)) 	 //�ڱ��ڽ��̸� ����ϱ�  
				return UNOVERLAPED;
				else if(arr[i][j]==arr[row][col]) //���� ��ġ�� �ǵ��ư��� 
				return OVERLAPED;
			}while(j=(N-1));
		}
	}
   	
   	
}

void print_bingo(int arr[N][N])
{   
   int row;
   int col;
   
   for (row=0; row<N; row++)
   {
      for (col=0; col<N; col++)
     {
        printf("%d\t", arr[row][col]);      //������ ���
     }
      printf("\n"); //������ �� ���� �Ʒ��ٷ� �̵�                     
   }
}

int get_number_by_Me(int num)
{
	int try=0;
	do{
	if(try==0)
	{
		printf("1~%d������ �����Է� : ",N*N);
		scanf("%d",&num);
		
		if(num<=1||num>=N*N)
		{
			try++;
		}
	}
	else if(try>=1);
	{
		printf("1~%d ������ ���ڸ� �Է��ؾ��մϴ�. �ٽ� �Է��ϼ���: ",N*N);
		scanf("%d",&num); 
	}
	}while(num<=1||num>N*N);	
 } 

int get_number_by_Com(int cnum)
{
	int cnum = 1 + (rand() % ((N)*(N)));
	
	if(cnum!=num)
	{	
		printf("��ǻ�Ͱ� ���� %d �� �����߽��ϴ� : ",cnum);
	}
	
	else
	{
		printf("ERROR\N");
		printf(""��ǻ�Ͱ� ���� %d �� �����߽��ϴ� : ",cnum); 
	}
	
 } 



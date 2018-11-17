#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 2   //M개의 빙고를 하면 게임을 이김  
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N]; //사용자 빙고판 배열 
int arr2[N][N]; //컴퓨터 빙고판 배열 
int row, col;



void initiate_bingo(int arr[N][N]); 					//빙고테이블 초기에 만듦  
void print_bingo(int arr[N][N]);						//빙고테이블의 현재 상황을 화면에 출력
int check(int arr[N][N], int row, int col);				//빙고테이블에 숫자 랜덤으로 배치할 때 중복되는지 확인
int get_number_byMe(int arr);							//사용자가 빙고번호 선택  
int get_number_byCom(int num);						//컴퓨터가 빙고번호 선택  
int process_bingo(int num);								//선택된 숫자를 입력받아서 빙코테이블의 칸을 채움  
//빙고된 가로,세로,대각선의 줄 수를 계산해서 반환 




int main(void)
{	

	printf("-----------START BINGO GAME-------------\n");
    int arr[N][N]={0};      //배열 선언 및 초기화  
	int num;
	int bingonum;
	srand((unsigned int)time(NULL));   //난수
	
	
	initiate_bingo(arr1);		//사용자 빙고판 생성
	initiate_bingo(arr2);		//컴퓨터 빙고판 생성  
    print_bingo(arr1);         	//사용자 빙고판 출력 
	print_bingo(arr2); 			//컴퓨터 빙고판 출력  
    
    
    while(1)
	{	
		num = get_number_byMe(arr1); 
		process_bingo(num);
		
		num = get_number_byCom(num);
	
		printf("컴퓨터가 %d를 선택했습니다.\n",num);
		process_bingo(num);
		
		count_bingo(bingonum,arr1);
		count_bingo(bingonum,arr2);
		
		
		print_bingo(arr1);  	     //사용자 빙고판 출력
   		print_bingo(arr2); 			//컴퓨터 빙고판인데 지우기 
				
	}

    return 0;
}





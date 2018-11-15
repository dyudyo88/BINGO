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
    int arr[N][N]={0};      //배열 선언 
	

	srand((unsigned int)time(NULL));   //난수
	
    initiate_bingo(arr1);		//사용자 빙고판 생성
	initiate_bingo(arr2);		//컴퓨터 빙고판 생성  
    print_bingo(arr1);         //사용자 빙고판 출력
    print_bingo(arr2); 		//컴퓨터 빙고판인데 지우기  
    
    //do~while 구문 만들어서 M빙고 될 때까지 돌리기
	 
	get_number_byMe(num);		//사용자 번호선택  
	process_bingo(arr1,num);	//사용자 선택번호 지우기	 
	process_bingo(arr2,num);	
	
	get_number_byCom(num);		//컴퓨터 번호선택	 
	process_bingo(arr1,num);	//컴퓨터 선택번호 지우기  
	process_bingo(arr2,num);
	
	count_bingo(arr1);
	count_bingo(arr2);
	
	
   
    return 0;
}





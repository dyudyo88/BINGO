#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 1   //M개의 빙고를 하면 게임을 이김  
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N]; //사용자 빙고판 배열 
int arr2[N][N]; //컴퓨터 빙고판 배열 
int row, col;	//initiate함수에서 가로줄과 세로줄 변수 선언
int i,j;    
int num;		//빙고 숫자 입력 받을 변수 선언   


void initiate_bingo(int arr[N][N]); 					//빙고테이블 초기에 만듦  
void print_bingo(int arr[N][N]);						//빙고테이블의 현재 상황을 화면에 출력
int check(int arr[N][N], int row, int col);				//빙고테이블에 숫자 랜덤으로 배치할 때 중복되는지 확인
int get_number_byMe(void);								//사용자가 빙고번호 선택  
int get_number_byCom(void);								//컴퓨터가 빙고번호 선택  
int process_bingo(int num);								//선택된 숫자를 입력받아서 빙코테이블의 칸을 채움  
int count_bingo(int arr[N][N], int bingonumber);		//빙고된 가로,세로,대각선의 줄 수를 계산해서 반환 


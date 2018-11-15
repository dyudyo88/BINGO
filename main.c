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
    int arr[N][N]={0};      //배열 선언 
	

	srand((unsigned int)time(NULL));   //난수
	
    initiate_bingo(arr1);		//빙고판 생성
	initiate_bingo(arr2);
    print_bingo(arr1);         //빙고판 출력
    print_bingo(arr2); 
	get_number_byMe(num);
	get_number_byCom(num);
	
	//중복인지 확인해주기  
   
    return 0;
}





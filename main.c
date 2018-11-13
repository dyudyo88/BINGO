#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 4 //NxN BINGO GAME


void initiate_bingo(int arr[N][N]);
void print_bingo(int arr[N][N]);


int main(void)
{	
	printf("START BINGO GAME\n");
	
	int arr[N][N] ={0}; //배열 선언  
	
	initiate_bingo(arr); 	//빙고판 생성  
	print_bingo(arr); 		//빙고판 출력 
	
	return 0; 
}



void initiate_bingo(int arr[N][N])
{
	int row; //빙고테이블 가로	 
	int col; //빙고테이블 세로  
	
	srand((unsigned)time(NULL)); //난수만들기  
	
	for(row=0;row<N;row++)
	{
		for(col=0; col<N; col++)
		{
			arr[row][col]=1+(rand()%(N*N));
		}
	}


void print_bingo(int arr[N][N]) 
{	
	int row ;
	int col ;
	 
	for(row=0; row<N; row++)
	{
		for(col=0; col<N; col++)
		{
			printf("%d ",arr[row][col]);
		}
	}
}



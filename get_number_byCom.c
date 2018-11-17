#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 1
#define OVERLAPED 1
#define UNOVERLAPED 0



int row, col;
int num;


int get_number_byCom(int num)
{	
	int i,j;
	num = 1 + (rand() % ((N)*(N)));
	int array[N*N];
	int arr[N][N];
	

	while(1)
	{
	
		if(array[num]==0)
		{
			arr[N][N] = num;
			array[num] = 1;
		}
		
		break;
	}
	
	return num;
} 



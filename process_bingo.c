#include "function.h"

extern int arr1[N][N];	// 사용자 빙고판배열을  해당 파일에서 사용할 수 있게 함
extern int arr2[N][N];	// 컴퓨터  빙고판배열을  해당 파일에서 사용할 수 있게 함 

//선택된 숫자를 입력받아서 빙고판에 채우는 함수
int process_bingo(int num)
{	
	{
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{	
			
				if(arr1[i][j]==num) //get number_byMe 에서 입력받은 수와 같으면 선택한 숫자가 0으로 바뀜 
				{
					arr1[i][j]=0; 	
				}
						
				if(arr2[i][j]==num) //get number_byCom에서 입력받은 수와 같으면  선택한 숫자가 0으로 바뀜  
				{
					arr2[i][j]=0;
				}
				
			}
		}
	}
}

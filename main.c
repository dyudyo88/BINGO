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
int get_number_byMe(void);								//사용자가 빙고번호 선택  
int get_number_byCom(void);							//컴퓨터가 빙고번호 선택  
int process_bingo(int num);								//선택된 숫자를 입력받아서 빙코테이블의 칸을 채움  
int count_bingo(int arr[N][N], int bingonumber);							//빙고된 가로,세로,대각선의 줄 수를 계산해서 반환 



int main(void)
{	

	int arr[N][N]={0};      //배열 선언 및 초기화  
	int num;
	int userbingonumber;		//사용자의 빙고 수
	int combingonumber;		//컴퓨터의 빙고수
	int bingonumber;
	int turn;
	 
	srand((unsigned int)time(NULL));   //난수
	
	printf("-----------START BINGO GAME-------------\n");
	initiate_bingo(arr1);		//사용자 빙고판 생성
	initiate_bingo(arr2);		//컴퓨터 빙고판 생성  
    print_bingo(arr1);         	//사용자 빙고판 출력 
	print_bingo(arr2); 			//컴퓨터 빙고판 출력  
    
   	 while(1)
		{
			num = get_number_byMe();
			process_bingo(num);
			
			num = get_number_byCom();
			process_bingo(num);
			
			turn++;
		
			print_bingo(arr1);  	     //사용자 빙고판 출력
   			print_bingo(arr2); 			//컴퓨터 빙고판인데 지우기 
				
			userbingonumber = count_bingo(arr1,bingonumber);
			combingonumber = count_bingo(arr2,bingonumber);	
			
			if(userbingonumber>=M)
			{
				printf("사용자가 이겼습니다.");	
				printf("%d번째에 승리했습니다",turn);
				break; 
			}
			
			else if(combingonumber>=M)
			{
				printf("컴퓨터가 이겼습니다.");	
				printf("%d번째에 승리했습니다",turn);
				break; 
			}
			
			else if(userbingonumber>=M&&combingonumber>=M)
			{
				printf("비겼습니다.");
				printf("%d번째에 비겼습니다.", turn);
			}

		}
		
    
}

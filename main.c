#include "function.h"

int main(void)
{	
	int arr[N][N]={0};      //배열 선언 및 초기화  
	int userbingonumber;	//사용자의 빙고 수
	int combingonumber;		//컴퓨터의 빙고수
	int bingonumber;
	int turn;
	 
	srand((unsigned int)time(NULL));   //난수
	
	printf("-----------START BINGO GAME-------------\n\n\n\n");
	initiate_bingo(arr1);		//사용자 빙고판 생성
	initiate_bingo(arr2);		//컴퓨터 빙고판 생성  
    print_bingo(arr1);         	//사용자 빙고판 출력 
    
   	 while(1)
		{
			num = get_number_byMe();	//사용자의 숫자 입력  
			process_bingo(num);			//사용자가 입력한 숫자를 빙고판에서 0으로 바꿈 
			
			num = get_number_byCom();	//컴퓨터의 숫자 입력  
			process_bingo(num);			//컴퓨터가 입력한 숫자를 빙고판에서 0으로 바꿈  
			
			turn++; 					//몇 번째에 승부가 결정나는지 알려주도록 하는 것 
	
			print_bingo(arr1);  	   	//사용자 빙고판 출력
				
			userbingonumber = count_bingo(arr1, bingonumber);			//사용자의 빙고 수 입력받기 
			printf("사용자가 %d bingo 했습니다.\n", userbingonumber); 	//사용자의 빙고 수가 몇 인지 출력  
			combingonumber = count_bingo(arr2, bingonumber);				//사용자의  빙고 수 입력받기 
			printf("컴퓨터가 %d bingo 했습니다.\n\n", combingonumber); 	//컴퓨터의 빙고 수가 몇 인지 출력  
			
			
				
			if(userbingonumber>=M) //사용자의 빙고 수가 M보다 크거나 같으면 게임을 끝내고 출력 (빙고가 동시에 여러개 나올 수 있으므로 빙고수는 M보다 크거나 같을 수 있다)
			{
				printf("사용자가 이겼습니다.\n");	
				printf("%d번째에 승리했습니다.\n",turn);
				printf("컴퓨터의 빙고판\n");
				print_bingo(arr2); //컴퓨터 빙고판 출력  
				break; 	//무한루프 빠져 나오기 	
			}
			
			else if(combingonumber>=M )//컴퓨터 빙고 수가 M보다 크거나  게임을 끝내고 출력  
			{
				printf("컴퓨터가 이겼습니다.\n");	
				printf("%d번째에 승리했습니다.\n",turn);
				printf("컴퓨터의 빙고판\n");
				print_bingo(arr2); //컴퓨터 빙고판 출력  
				break; //무한루프 빠져 나오기
			}
			
			else if(userbingonumber>=M && combingonumber>=M )//사용자와 컴퓨터의  빙고 수가 M과  같으면 게임을 끝내고 출력  
			{
				printf("비겼습니다.");
				printf("%d번째에 비겼습니다.", turn);
				printf("컴퓨터의 빙고판\n");
				print_bingo(arr2); //컴퓨터 빙고판 출력  
				break; //무한루프 빠져 나오기
			}

		}   
}

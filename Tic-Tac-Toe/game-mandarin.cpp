/*
________________________________________
|                                       |
|       遊戲.cpp                        | 
|                                        \
|       谷歌-編程-比賽 (2k17-18)          \
|                                          \
|                                           \
|       遊戲 - 井子棋                  |
|                                            |	
`---------@@@@@-------------------@@@--------'

*/




#include <iostream>
using namespace std;



int is_winner(char );
void banner_ttt();
int authenticated_index(int );
void show_status_ttt();
void tic_tac_toe();



// 專門存玩家的‘0’或‘X’的位置的陣列
//
char a[9] = {'T','T','T','T','T','T','T','T','T'};			




int main()
{
	// 執行井子棋遊戲的主體區塊
	tic_tac_toe();		
}



// 井子棋遊戲的主體區塊
// 遊戲從這裡開始，然後是回合制形式玩的
void tic_tac_toe()
{
	int flag = 0, turn_counter = 1;
	int zero, cross;
	int continue_p2 = 0;


	banner_ttt();


		
		// 只要沒有玩家贏的話，一直請求著數
		while(1)
		{

			// 如果玩家二沒有選擇繼續玩的話 
			// 那就讓玩家一做他的著數
			//
			if ( continue_p2 != 1 )
			{
				cout<<"玩家一 -> ";
				// 兩個玩家指定他們的著數
				cin>>zero;				


					// 查看如果玩家登入的數字作準
					if (( authenticated_index(zero-1)) )
					{	
						++turn_counter;				
						a[zero-1] = '0';				
						show_status_ttt();
						
							if (turn_counter > 4 && is_winner('0'))	
							{
								cout<<"可喜可賀!!\n";
								cout<<"玩家一贏了 !\n";
								exit(0);
							}
					}
				
					else 
						continue;
					
			}
	
	

			cout<<"玩家二 -> ";
			cin>>cross;

				// 查看如果玩家登入的數字作準不作準
				if (authenticated_index(cross-1))
				{	
					
					++turn_counter;
					a[cross-1] = 'X';				
					show_status_ttt();
					continue_p2 = 0;					
	
						if (turn_counter > 4  && is_winner('X'))
						{
							cout<<"Congratulations!!\n";
							cout<<"Player 2 wins !\n";
							exit(0);
						}
				}
			
				// 如果玩家二登入的數字不作準
				//一直等到玩家二登入作準的數字
				else 
				{
					// 設定‘continue——p2’旗
					// 所以我們能認同玩家二繼續玩而不是玩家一繼續
					continue_p2 = 1;
					continue;	
				}
	
		}

}



// 返回零如果執行這個指數的玩家贏了或沒贏
int is_winner(char ch)
{
	// 把編程寫在這裡
	
		
}



// 井子棋遊戲的旗子
void banner_ttt()
{
	cout<<"\n\n";
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
	cout<<"                歡迎!這是井子棋遊戲			                  \n";
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
	cout<<"\n";
	cout<<"這是一個兩個人的遊戲。登入‘X'之前要登入’0‘ ^_^ \n";
	cout<<"玩家需要登入他想把’X‘或’O‘放到那裡那裡    \n";
	cout<<"登入 '0' 或 'X'\n\n\n";

		// 旗子的編程在這裡
}



// 查看
// 一. 如果玩家登入的位置從來沒有被登入過
// 二. 玩家登入的位置在範圍裡
// 如果位置作準返回‘一’，如果位置不作準返回‘0’
int authenticated_index(int index)
{
	//把編程寫在這裡
	

}



// 展示遊戲的現況等級
// 每次玩家開始他的輪執行以下的編程
void show_status_ttt()
{
	
	cout<<"\n";
	
	for( int i=0 ; i<9 ; ++i )
	{
		
		if (i != 0 && i%3 == 0 )
		{
			cout<<"\n";
			cout<<"___|___|___\n";
		}	
	
		cout<<" ";

		if ( a[i] == '0' || a[i] == 'X' )
			{
				cout<<(char )a[i]<<" ";
				if (i != 2 && i != 5 && i !=8)
					cout<<"|";
				
			}

			else 
			{
				cout<<"  ";
				if (i != 2 && i !=5 && i != 8)
					cout<<"|";
			}
	}

	cout<<"\n   |   |   \n";

	cout<<"\n";
}






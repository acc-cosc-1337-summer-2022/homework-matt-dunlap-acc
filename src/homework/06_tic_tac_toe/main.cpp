#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std:: cin; using std::string; using std::vector;

int main() 
{

	TicTacToe game;
	string first_player;
	char user_choice = '\0';
	bool is_position_taken = false;
	vector<int> positions_taken;

	do {

		first_player = "";
		if (positions_taken.size() != 0){
			positions_taken.clear();
		}
		user_choice = '\0';

		while (first_player != "X" && first_player != "O"){
			cout<<"Enter first player: ";
			cin>>first_player;
			if (first_player != "X" && first_player != "O"){
				cout<<"Invalid input. First player must be either 'X' or 'O'.\n";
			}
		}

		game.start_game(first_player);

		while(!game.game_over()){
			
			int position = 0;
			while (position < 1 || position > 9 || is_position_taken){
				is_position_taken = false;
				cout<<"Enter a position: ";
				cin>>position;
				if (position < 1 || position > 9){
					cout<<"Invalid input. Position must be between 1-9 (inclusive).\n";
				} else if (positions_taken.size() != 0) {
					for (int position_taken : positions_taken){
						if (position == position_taken){
							cout<<"Invalid input. Position is already taken.\n";
							is_position_taken = true;
						}
					}
				}
			}

			positions_taken.push_back(position);
			game.mark_board(position);
			game.display_board();
		}

		cout<<"Winner: "<<game.get_winner();

		cout<<"\nPlay again? <y/n> ";
		cin>>user_choice;
		user_choice = toupper(user_choice);

		while (user_choice != 'Y' && user_choice != 'N'){
			cout<<"Play again? <y/n> ";
			cin>>user_choice;
			user_choice = toupper(user_choice);
			if (user_choice != 'Y' && user_choice != 'N'){
			cout<<"Invalid input. Please enter 'n' to quit or 'y' to restart game.\n";
			}
		}
		
	}while(toupper(user_choice) == 'Y');

	return 0;
}
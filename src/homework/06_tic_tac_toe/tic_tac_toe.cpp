//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over(){
    //if one of the players has won
    if (check_column_win() || check_row_win() || check_diagonal_win()){
        //set winner. get_winner returns next_player value
        if (get_winner() == "X"){
            set_winner("O");
        } else {
            set_winner("X");
        }
        return true;
    } else if (check_board_full()){
        set_winner("C");
        return true;
    }

    return false;
}

void TicTacToe::start_game(string first_player){
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position){
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const{
    for (long unsigned int i = 0; i < pegs.size(); i+=3){
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

//private functions
void TicTacToe::clear_board(){
    for (string& peg : pegs){
        peg = " ";
    }
}

void TicTacToe::set_next_player(){
    if (player == "X"){
        player = "O";
    } else {
        player = "X";
    }
}

bool TicTacToe::check_board_full(){
    for (string peg : pegs){
        if (peg == " "){
            return false;
        }    
    }

    return true;
}

bool TicTacToe::check_column_win(){
    string winner = "";
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X"){
        winner = "X";
    } else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X"){
        winner = "X";
    } else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X"){
        winner = "X";
    } else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O"){
        winner = "O";
    } else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O"){
        winner = "O";
    } else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"){
        winner = "O";
    }

    if (winner != ""){
        return true;
    } else {
        return false;
    }
 
}
bool TicTacToe::check_row_win(){
    string winner = "";
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X"){
        winner = "X";
    } else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X"){
        winner = "X";
    } else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"){
        winner = "X";
    } else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"){
        winner = "O";
    } else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O"){
        winner = "O";
    } else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"){
        winner = "O";
    }

    if (winner != ""){
        return true;
    } else {
        return false;
    }
}
bool TicTacToe::check_diagonal_win(){
    string winner = "";
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X"){
        winner = "X";
    } else if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X"){
        winner = "X";
    } else if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X"){
        winner = "X";
    } else if (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O"){
        winner = "O";
    } 

    if (winner != ""){
        return true;
    } else {
        return false;
    }
}
void TicTacToe::set_winner(string w){
    winner = w;
}
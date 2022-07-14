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

void TicTacToe::set_winner(string w){
    winner = w;
}
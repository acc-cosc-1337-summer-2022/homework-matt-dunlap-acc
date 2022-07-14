//h
#include<string>
#include<vector>
#include<iostream>
using std::string;
using std::vector;
using std::cin;
using std::cout;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe{
    protected:
        vector<string> pegs;
        virtual bool check_column_win() = 0;
        virtual bool check_row_win() = 0;
        virtual bool check_diagonal_win() = 0;
    public:
        TicTacToe(int peg_count) : pegs(peg_count * peg_count, " "){}
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const{return player;}
        string get_winner() const{return winner;}
        virtual void display_board() const = 0;
    private:
        string player;
        string winner;
        void clear_board();
        void set_next_player();
        bool check_board_full();
        void set_winner(string w);
};

#endif
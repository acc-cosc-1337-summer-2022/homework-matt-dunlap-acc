//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

class TicTacToe4 : public TicTacToe{

    public:
        TicTacToe4() : TicTacToe(4){}
        void display_board() const;
    private:
        bool check_column_win();
        bool check_diagonal_win();
        bool check_row_win();

};

#endif
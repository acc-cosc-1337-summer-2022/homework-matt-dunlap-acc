//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

class TicTacToe3 : public TicTacToe{

    public:
        TicTacToe3() : TicTacToe(3){}
        void display_board() const;
    private:
        bool check_column_win();
        bool check_diagonal_win();
        bool check_row_win();

};

#endif
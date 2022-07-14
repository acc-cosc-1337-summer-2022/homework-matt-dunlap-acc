#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(3);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(2);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(4);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(5);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(9);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(6);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(8);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(7);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test first player set to X"){
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O"){
	TicTacToe3 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left"){
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);

	REQUIRE(game.game_over() == true);
}

/*Tests for TicTacToe4
/
/
/
*/

TEST_CASE("Test if the board is full4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(2);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(3);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(6);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(5);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(10);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(7);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(8);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(4);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(9);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(11);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(16);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(12);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(15);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(14);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(13);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test first player set to X4"){
	TicTacToe4 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O4"){
	TicTacToe4 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(13);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(10);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(14);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(11);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(15);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by fourth column4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(12);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(16);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(10);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(11);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(12);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(11);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(16);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left4"){
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(13);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(10);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);

	REQUIRE(game.game_over() == true);
}


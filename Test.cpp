#include "doctest.h"
#include "Board.hpp"
#include <string>

#include "Direction.hpp"
using ariel::Direction;
using namespace ariel;



TEST_CASE("tests"){
   Board board;
    CHECK_NOTHROW(board.post(100,200, Direction::Horizontal,"abcd"));
    CHECK(board.read(99 ,201, Direction::Vertical , 3)==("_b_"));
    CHECK_NOTHROW(board.post(99 ,202, Direction::Vertical,"xyz"));
	CHECK(board.read(100,200, Direction::Horizontal,6).compare("abyd__"));
    CHECK_NOTHROW(board.post(110,200, Direction::Horizontal,"abcd"));
    CHECK(board.read(109,201, Direction::Vertical , 3)==("_b_"));
    CHECK_NOTHROW(board.post(109,202, Direction::Vertical,"xyz"));
	CHECK(board.read(110,200, Direction::Horizontal,6)==("abyd__")); 
    CHECK_NOTHROW(board.post(120,200, Direction::Horizontal,"abcd"));
    CHECK(board.read(119,201, Direction::Vertical , 3)==("_b_"));
    CHECK_NOTHROW(board.post(119,202, Direction::Vertical,"xyz"));
	CHECK(board.read(120,200, Direction::Horizontal,6)==("abyd__"));
    CHECK_NOTHROW(board.post(130,200, Direction::Horizontal,"abcd"));
    CHECK(board.read(129,201, Direction::Vertical , 3)==("_b_"));
    CHECK_NOTHROW(board.post(129,202, Direction::Vertical,"xyz"));
	CHECK(board.read(130,200, Direction::Horizontal,6)==("abyd__"));
	

}


TEST_CASE("out of range, length_error"){
     Board board;

    CHECK_NOTHROW(board.post(109,202,Direction::Horizontal,""));
    CHECK_THROWS(board.read(109,202,Direction::Horizontal,9));
    CHECK_THROWS(board.read(109,202,Direction::Horizontal,2));
    CHECK_THROWS(board.read(109,202,Direction::Horizontal,0));      
}
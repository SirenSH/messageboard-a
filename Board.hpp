#include <iostream>
#include <string>
using namespace std;

#include "Direction.hpp"
using ariel::Direction;

namespace ariel{
        class Board{
        private:
                unsigned int row,col;

        public:
        static void post(unsigned int row, unsigned int col, Direction direction, string ad);
        static string read(unsigned int row, unsigned int col, Direction direction,unsigned int letters);
         void show();
        };
};

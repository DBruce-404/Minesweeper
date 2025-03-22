#ifndef BOARD_HPP 1
#define BOARD_HPP 1

#include <cstdlib>

#define MINE_DENSITY 30
#define ROW_LEN 9

namespace board {
  enum slot {
    empty = 0;
    mine = 1;
    cleared = 2;
  };

  class row {
    private:
      slot line[ROW_LEN] = {0};
      int counter[ROW_LEN] = {0};
      int rando = 0;
    public:
      row() {
        init();
      }
      void init() {
        for (int i = 0; i < ROW_LEN; i++) {
          rando = rand() % 100;
          // randomly assigns a mine or empty value to each slot of the row
          // if the random number assigned above is greater than the desnity, it is left empty
          line[i] = (rando > MINE_DENSITY) ? empty : mine;
        }
      }
  };

  class board {
    private:
      row columns[ROW_LEN];
    public:

  };
}

#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DIRECTIONS 4;

int main(void)
{
  int i, j, x, y, next_move;
  char grid[10][10];
  char trail;

  srand((unsigned)time(NULL));

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      grid[i][j] = '.';
    }
  }

  trail = 'A';
  x = 0;
  y = 0;
  grid[x][y] = trail;  
  for (i = 1; i < 26; i++) {
    next_move = rand() % NUM_DIRECTIONS;
    switch (next_move) {
    case 0: x -= 1; break;
    case 1: y += 1; break;
    case 2: x += 1; break;
    case 3: y -= 1; break;
    }

    grid[x][y] = trail;
    trail++;
  }
  
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      printf("%c ", grid[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

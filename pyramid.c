#include <stdio.h>
#include <stdlib.h>

void printBrick(int length, int spaces);

int main(void) {
  int heigth;
  scanf("%d", &heigth);
  int spaces = heigth;
  for (int i = 0; i < heigth; i++)
  {
    printBrick(i + 1, spaces--);
  }
  
}

void printBrick(int length, int spaces) {
  for (int j = 0; j < spaces; j++)
  {
    printf(" ");
  }
  for (int i = 0; i < length; i++)
  {
    printf("#");
  }
  printf("\n");
}
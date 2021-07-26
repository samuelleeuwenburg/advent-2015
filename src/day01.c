#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helpers.h"

void part_one() {
  char* file_content = read_file_text("./input/day01.txt");

  size_t floor = 0;

  for (size_t i = 0; i < strlen(file_content); ++i) {
    char symbol = file_content[i];

    if (symbol == '(') {
      floor++;
    }

    if (symbol == ')') {
      floor--;
    }
  }

  printf("\nfinal floor: %zu \n", floor);
  
  free(file_content);
}

void part_two() {
  char* file_content = read_file_text("./input/day01.txt");

  size_t floor = 0;
  size_t basement = -1;

  for (size_t i = 0; i < strlen(file_content); ++i) {
    char symbol = file_content[i];

    if (symbol == '(') {
      floor++;
    }

    if (symbol == ')') {
      floor--;
    }

    if (floor == basement) {
      printf("\nhit the basement at char %zu \n", i + 1);
      break;
    }
  }

  free(file_content);
}

int main() {
  part_one();
  part_two();
  return 0;
}

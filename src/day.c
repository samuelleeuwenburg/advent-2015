#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main() {
  char* file_content = read_file_text("./input/day01.txt");

  printf("\n%s\n", file_content);
  
  free(file_content);

  return 0;
}

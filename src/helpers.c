#include <stdio.h>
#include <stdlib.h>

char *read_file_text(char *filename) {
  char *buffer = NULL;
  size_t size = 0;

  FILE *file_ptr = fopen(filename, "r");

  fseek(file_ptr, 0, SEEK_END);
  size = ftell(file_ptr);
  rewind(file_ptr);

  buffer = malloc((size + 1) * sizeof(*buffer));

  fread(buffer, size, 1, file_ptr);
  buffer[size] = '\0';
  
  fclose(file_ptr);

  return buffer;
}

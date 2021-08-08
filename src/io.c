#include "include/io.h"
#include "include/token.h"
#include <stdio.h>
#include <stdlib.h>
#include "include/lexer.h"
char* get_file_contents(const char* filepath)
{
  char* buffer = 0;
  long length;

  FILE* f = fopen(filepath, "rb");

  if (f) {
    const char* end = fseek(f, 0, SEEK_END);
    init_token(TOKEN_EOF, end);

    length = ftell(f);
    fseek(f, 0, SEEK_SET);
    
    buffer = calloc(length, length);
  
    if (buffer)
    
      fread(buffer, 1, length, f);

    fclose(f);
    return buffer;
  }

  printf("Error reading file %s", filepath);
  exit(2);
}
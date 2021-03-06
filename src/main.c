
#include "include/io.h"
#include "include/lexer.h"
#include "include/parser.h"
#include "include/visitor.h"
#include <stdio.h>
#include <string.h>
#include <wchar.h>

#define MAX_LIMIT 20
void print_help()
{
  printf("\n----------- EXECUTING -----------\n");
  printf("Running: nonya <filename.onya\n\n");
  
  printf("\n----------- Developers -----------\n");
  printf("Penguin Technology");


  exit(1);
}

char** split(const char* text, const char* deli, int* len)
{

  char** parts = 0;
  char* fname = strdup(text);
  char* tok = strtok(fname, deli);
  int l = 0;

  while (tok != 0) {
    l++;
    parts = realloc(parts, (l * sizeof(char*)) + (strlen(tok) * sizeof(char) + 1));
    parts[l - 1] = strdup(tok);
    tok = strtok(0, ".");
  }

  *len = l;

  free(fname);

  return parts;
}

unsigned int contains(char** parts, const char* needle, int len)
{
    int i;
  for (i = 0; i < len; i++)
    if (strcmp(parts[i], needle) == 0)
      return 1;

  return 0;
}

unsigned int has_ext(const char* filename, const char* ext)
{
  int len = 0;
  char** parts = split(filename, ".", &len);
  unsigned int c = contains(parts, ext, len);

  if (parts) {
      int i;
    for ( i = 0; i < len; i++)
      free(parts[i]);

    free(parts);
  }

  return c;
}

 void* addENV()
{
    _putenv("Path=;%%PROGRAMFILES%%\\Onya;");
    char * x = getenv("PATH");
    printf("ADDED ENV VARS");
    printf("%s", x);
}

int main(int argc, char* argv[])
{

  if (argc >= 2) {
    int i;
    for (i = 1; i < argc; i++) {
      if (has_ext(argv[i], "onya")) {
        lexer_T* lexer = init_lexer(get_file_contents(argv[i]));
        parser_T* parser = init_parser(lexer);
        AST_T* root = parser_parse(parser, parser->scope);
        visitor_T* visitor = init_visitor();
        visitor_visit(visitor, root);
       // addENV();
      }

      else{
        print_help();
       
      }

    }
  }
  return 0;
}

#include "include/io.h"
#include "include/lexer.h"
#include "include/parser.h"
#include "include/visitor.h"
#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 20
void print_help()
{
  printf("Usage:\nhello.out <filename>\n");
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
  for (int i = 0; i < len; i++)
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
    for (int i = 0; i < len; i++)
      free(parts[i]);

    free(parts);
  }

  return c;
}

int main(int argc, char* argv[])
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    if (argc >= 2){
        int i;
        for( i = 1; i < argc; i++){
            int len = strlen(argv[i]);
            char* last_four = &argv[i][len-6];
            if(strcmp(last_four,".onya") == 0){
                                lexer_T* lexer = init_lexer(
                    get_file_contents(argv[i])
                );
                parser_T* parser = init_parser(lexer);
                AST_T* root = parser_parse(parser, parser->scope);
                visitor_T* visitor = init_visitor();
                visitor_visit(visitor, root);
            }

            else {
                print_help();
            }
        }
=======
=======
>>>>>>> parent of 7644d56 (.)
=======
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
>>>>>>> parent of edd9782 (.)
=======
>>>>>>> parent of 651b737 (remove workflows)
  if (argc >= 2) {
    int i;
    for (i = 1; i < argc; i++) {
      if (has_ext(argv[i], "onya")) {
        lexer_T* lexer = init_lexer(get_file_contents(argv[i]));
        parser_T* parser = init_parser(lexer);
        AST_T* root = parser_parse(parser, parser->scope);
        visitor_T* visitor = init_visitor();
        visitor_visit(visitor, root);
      }

      else {
        print_help();
      }
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> parent of 0b46eb2 (fix conflicts)
=======
>>>>>>> parent of 7644d56 (.)
=======

>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
=======
    if (argc >= 2){
        int i;
        for( i = 1; i < argc; i++){
            int len = strlen(argv[i]);
            char* last_four = &argv[i][len-5];
            if(strcmp(last_four,".onya") == 0){
                                lexer_T* lexer = init_lexer(
                    get_file_contents(argv[i])
                );
                parser_T* parser = init_parser(lexer);
                AST_T* root = parser_parse(parser, parser->scope);
                visitor_T* visitor = init_visitor();
                visitor_visit(visitor, root);
                
            }

            else {
                print_help();
            }
        }
>>>>>>> main
>>>>>>> parent of edd9782 (.)
=======
>>>>>>> parent of 651b737 (remove workflows)
    }
  } else {
    char input[MAX_LIMIT];
    while (1) {
      printf("Welcome to the Onya language v. 0.0.1!\nCreated by Tech Penguineer\n>>> ");
      fgets(input, MAX_LIMIT, stdin);
      lexer_T* lexer = init_lexer(input);
      parser_T* parser = init_parser(lexer);
      AST_T* root = parser_parse(parser, parser->scope);
      visitor_T* visitor = init_visitor();
      visitor_visit(visitor, root);
    }
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    return 0;
}
=======
  }
  return 0;
}
>>>>>>> parent of 7644d56 (.)
=======
  }
  return 0;
}
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
  }
  return 0;
}
=======
    
    
    
    0;
}
>>>>>>> main
>>>>>>> parent of edd9782 (.)
=======
  }
  return 0;
}
>>>>>>> parent of 651b737 (remove workflows)

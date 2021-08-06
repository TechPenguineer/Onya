
#include <stdio.h>
#include <string.h>
#include "include/lexer.h"
#include "include/parser.h"
#include "include/visitor.h"
#include "include/io.h"

#define MAX_LIMIT 20
void print_help()
{
    printf("Usage:\nhello.out <filename>\n");
    exit(1);
}

int main(int argc, char* argv[])
{
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
    }
    else {
        char input[MAX_LIMIT];
        while(1){
            printf("Welcome to the Onya language v. 0.0.1!\nCreated by Tech Penguineer\n>>> ");
            fgets(input,MAX_LIMIT, stdin);
            lexer_T* lexer = init_lexer(input);
            parser_T* parser = init_parser(lexer);
            AST_T* root = parser_parse(parser, parser->scope);
            visitor_T* visitor = init_visitor();
            visitor_visit(visitor, root);
        }
    }
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

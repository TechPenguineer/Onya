#include "include/lexer.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

lexer_T* init_lexer(char* contents)
{
  lexer_T* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
  lexer->contents = contents;
  lexer->i = 0;
  lexer->c = contents[lexer->i];

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> parent of edd9782 (.)
=======
>>>>>>> parent of 651b737 (remove workflows)
=======
>>>>>>> parent of 8c07ddc (revert to initial pull)
  return lexer;
=======
    
    
    
    lexer;
<<<<<<< HEAD
<<<<<<< HEAD
=======
    return lexer;
>>>>>>> parent of e7b217b (make your code work)
<<<<<<< HEAD
=======
    return lexer;
>>>>>>> parent of e7b217b (make your code work)
=======
    return lexer;
>>>>>>> parent of be1b0de (changed unix build name)
=======
  return lexer;
>>>>>>> parent of 7644d56 (.)
=======
  return lexer;
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
>>>>>>> main
>>>>>>> parent of edd9782 (.)
=======
>>>>>>> parent of 651b737 (remove workflows)
=======
>>>>>>> parent of 8c07ddc (revert to initial pull)
}

void lexer_advance(lexer_T* lexer)
{
  if (lexer->c != '\0' && lexer->i < strlen(lexer->contents)) {
    lexer->i += 1;
    lexer->c = lexer->contents[lexer->i];
  }
}

void lexer_skip_whitespace(lexer_T* lexer)
{
  while (lexer->c == ' ' || lexer->c == 10) {
    lexer_advance(lexer);
  }
}

token_T* lexer_get_next_token(lexer_T* lexer)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> parent of 7644d56 (.)
=======
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
>>>>>>> parent of 651b737 (remove workflows)
=======
>>>>>>> parent of 8c07ddc (revert to initial pull)
  while (lexer->c != '\0' && lexer->i < strlen(lexer->contents)) {
    if (lexer->c == ' ' || lexer->c == 10)
      lexer_skip_whitespace(lexer);

    if (isalnum(lexer->c))
      return lexer_collect_id(lexer);

    if (lexer->c == '"')
      return lexer_collect_string(lexer);

    switch (lexer->c) {
      case '=':
        return lexer_advance_with_token(
          lexer, init_token(TOKEN_EQUALS, lexer_get_current_char_as_string(lexer)));
        break;
      case ';':
        return lexer_advance_with_token(
          lexer, init_token(TOKEN_SEMI, lexer_get_current_char_as_string(lexer)));
        break;
      case '(':
        return lexer_advance_with_token(
          lexer, init_token(TOKEN_LPAREN, lexer_get_current_char_as_string(lexer)));
        break;
      case ')':
        return lexer_advance_with_token(
          lexer, init_token(TOKEN_RPAREN, lexer_get_current_char_as_string(lexer)));
        break;
      case '{':
        return lexer_advance_with_token(
          lexer, init_token(TOKEN_LBRACE, lexer_get_current_char_as_string(lexer)));
        break;
      case '}':
        return lexer_advance_with_token(
          lexer, init_token(TOKEN_RBRACE, lexer_get_current_char_as_string(lexer)));
        break;
      case ',':
        return lexer_advance_with_token(
          lexer, init_token(TOKEN_COMMA, lexer_get_current_char_as_string(lexer)));
        break;
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
<<<<<<< HEAD
>>>>>>> parent of e7b217b (make your code work)
<<<<<<< HEAD
=======
>>>>>>> parent of e7b217b (make your code work)
=======
>>>>>>> parent of 651b737 (remove workflows)
=======
>>>>>>> parent of 8c07ddc (revert to initial pull)
    while (lexer->c != '\0' && lexer->i < strlen(lexer->contents))
    {
        if (lexer->c == ' ' || lexer->c == 10)
            lexer_skip_whitespace(lexer);

        if (isalnum(lexer->c))
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> parent of 651b737 (remove workflows)
=======
>>>>>>> parent of 8c07ddc (revert to initial pull)
            
            
            
            
            lexer_collect_id(lexer);
<<<<<<< HEAD
=======
            return lexer_collect_id(lexer);
>>>>>>> parent of e7b217b (make your code work)
<<<<<<< HEAD
=======
            return lexer_collect_id(lexer);
>>>>>>> parent of e7b217b (make your code work)
=======
            return lexer_collect_id(lexer);
>>>>>>> parent of be1b0de (changed unix build name)
=======
>>>>>>> parent of 651b737 (remove workflows)
=======
>>>>>>> parent of 8c07ddc (revert to initial pull)

        if (lexer->c == '"')
            return lexer_collect_string(lexer);

        switch (lexer->c)
        {
            case '=': return lexer_advance_with_token(lexer, init_token(TOKEN_EQUALS, lexer_get_current_char_as_string(lexer))); break;
            case ';': return lexer_advance_with_token(lexer, init_token(TOKEN_SEMI, lexer_get_current_char_as_string(lexer))); break;
            case '(': return lexer_advance_with_token(lexer, init_token(TOKEN_LPAREN, lexer_get_current_char_as_string(lexer))); break;
            case ')': return lexer_advance_with_token(lexer, init_token(TOKEN_RPAREN, lexer_get_current_char_as_string(lexer))); break;
            case '{': return lexer_advance_with_token(lexer, init_token(TOKEN_LBRACE, lexer_get_current_char_as_string(lexer))); break;
            case '}': return lexer_advance_with_token(lexer, init_token(TOKEN_RBRACE, lexer_get_current_char_as_string(lexer))); break;
            case ',': return lexer_advance_with_token(lexer, init_token(TOKEN_COMMA, lexer_get_current_char_as_string(lexer))); break;
        }
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> main
=======
>>>>>>> parent of e7b217b (make your code work)
=======
>>>>>>> parent of e7b217b (make your code work)
=======
>>>>>>> parent of 7644d56 (.)
=======
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
>>>>>>> main
>>>>>>> parent of 651b737 (remove workflows)
=======
>>>>>>> main
=======
>>>>>>> parent of e7b217b (make your code work)
>>>>>>> parent of 8c07ddc (revert to initial pull)
    }
  }

  return init_token(TOKEN_EOF, "\0");
}

token_T* lexer_collect_string(lexer_T* lexer)
{
  lexer_advance(lexer);

  char* value = calloc(1, sizeof(char));
  value[0] = '\0';

  while (lexer->c != '"') {
    char* s = lexer_get_current_char_as_string(lexer);
    value = realloc(value, (strlen(value) + strlen(s) + 1) * sizeof(char));
    strcat(value, s);

    lexer_advance(lexer);
  }

  lexer_advance(lexer);

  return init_token(TOKEN_STRING, value);
}

token_T* lexer_collect_id(lexer_T* lexer)
{
  char* value = calloc(1, sizeof(char));
  value[0] = '\0';

  while (isalnum(lexer->c)) {
    char* s = lexer_get_current_char_as_string(lexer);
    value = realloc(value, (strlen(value) + strlen(s) + 1) * sizeof(char));
    strcat(value, s);

    lexer_advance(lexer);
  }

  return init_token(TOKEN_ID, value);
}

token_T* lexer_advance_with_token(lexer_T* lexer, token_T* token)
{
  lexer_advance(lexer);

  return token;
}

char* lexer_get_current_char_as_string(lexer_T* lexer)
{
  char* str = calloc(2, sizeof(char));
  str[0] = lexer->c;
  str[1] = '\0';

  return str;
}

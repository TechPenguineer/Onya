#ifndef LEXER_H
#define LEXER_H 
#include "token.h"

typedef struct LEXER_STRUCT
{
    char c; 
    unsigned int i;
    char* constents;

} lexer_T;

lexer_T8 init_lexer(char* contents);

void lexer_advance(lexer_T* lexer);

void lexer_skip_whitespace(lexer_T* lexer);

token_T* lexer_get_next_token(lexer_T* lexer);

token_T* lexer_collect_string(lexer_T* lexer)


#endif
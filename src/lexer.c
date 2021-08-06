#include "include/lexer.h"
#include <stdlib.h>
lexer_T* init_lexer(char* contents)
{
	lexer_T* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
	lexer->contents = contents;
	lexer->i = 0;
	lexer->contents[lexer->i];

	return lexer;
}

void lexer_advance(lexer_T* lexer)
{
	if(lexer->c)
}

void lexer_skip_whitespace(lexer_T* lexer)
{

}

token_T* lexer_get_next_token(lexer_T* lexer)
{

}

token_T* lexer_collect_string(lexer_T* lexer)
{

}

char* lexer_get_current_chat_as_string(lexer_T* lexer)
{

}

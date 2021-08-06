#include "include/lexer.h"
#include "include/token.h"
#include <stdlib.h>
#include <string.h>
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
	if (lexer->c != '\0' && lexer->i < strlen(lexer->contents))
	{
		lexer->i += 1;
		lexer->c=lexer->contents[lexer->i];
	}
}

void lexer_skip_whitespace(lexer_T* lexer)
{
	while (lexer->c == ' ' || lexer->c == 10)
	{
		lexer_advance(lexer);
	}
}

token_T* lexer_get_next_token(lexer_T* lexer)
{
	while (lexer->c != '\0' && lexer->i < strlen(lexer->contents))
	{
		if (lexer->c == ' ' || lexer->c == 10)
		{
			lexer_skip_whitespace(lexer);

			if (lexer->c == '"')
			{
				return lexer_collect_string(lexer);
			}
			switch (lexer->c)
			{
			case '=': return lexer_advance_with_token(lexer, init_token(TOKEN_EQUALS, lexer_get_current_chat_as_string(lexer))); break;
			case ';': return lexer_advance_with_token(lexer, init_token(TOKEN_SEMI, lexer_get_current_chat_as_string(lexer))); break;
			case '(': return lexer_advance_with_token(lexer, init_token(TOKEN_LPAREN, lexer_get_current_chat_as_string(lexer))); break;
			case ')': return lexer_advance_with_token(lexer, init_token(TOKEN_RPAREN, lexer_get_current_chat_as_string(lexer))); break;

			}
		}
	}
}

token_T* lexer_collect_string(lexer_T* lexer)
{

}

token_T* lexer_advance_with_token(lexer_T* lexer, token_T* token)
{
	lexer_advance(lexer);
	return token;
}

char* lexer_get_current_chat_as_string(lexer_T* lexer)
{

}

#include "include/token.h"
#include <stdlib.h>


token_T* init_token(int type, char* value)
{
    token_T* token = calloc(1, sizeof(struct TOKEN_STRUCT));
    token->type = type;
    token->value = value;

<<<<<<< HEAD
    
    token;
=======
    return token;
>>>>>>> parent of e7b217b (make your code work)
}

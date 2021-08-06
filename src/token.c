#include "include/token.h"
#include <stdlib.h>

token_T* init_token(int type, char* value)
{
  token_T* token = calloc(1, sizeof(struct TOKEN_STRUCT));
  token->type = type;
  token->value = value;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    
    token;
=======
    return token;
>>>>>>> parent of e7b217b (make your code work)
=======
    return token;
>>>>>>> parent of e7b217b (make your code work)
=======
    return token;
>>>>>>> parent of be1b0de (changed unix build name)
=======
  return token;
>>>>>>> parent of 7644d56 (.)
=======
  return token;
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
  return token;
=======
    
    token;
>>>>>>> main
>>>>>>> parent of edd9782 (.)
=======
    
    token;
>>>>>>> parent of 651b737 (remove workflows)
}

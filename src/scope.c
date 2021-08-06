#include "include/scope.h"
#include <string.h>

scope_T* init_scope()
{
  scope_T* scope = calloc(1, sizeof(struct SCOPE_STRUCT));

  scope->function_definitions = (void*)0;
  scope->function_definitions_size = 0;

  scope->variable_definitions = (void*)0;
  scope->variable_definitions_size = 0;

  return scope;
}

AST_T* scope_add_function_definition(scope_T* scope, AST_T* fdef)
{
  scope->function_definitions_size += 1;

  if (scope->function_definitions == (void*)0) {
    scope->function_definitions = calloc(1, sizeof(struct AST_STRUCT*));
  } else {
    scope->function_definitions = realloc(
      scope->function_definitions, scope->function_definitions_size * sizeof(struct AST_STRUCT**));
  }

  scope->function_definitions[scope->function_definitions_size - 1] = fdef;

<<<<<<< HEAD
<<<<<<< HEAD
  return fdef;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> parent of edd9782 (.)
    
    
    
    
    fdef;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

=======
=======
>>>>>>> parent of 98c92a1 (revert to initial pull)
    return fdef;
>>>>>>> parent of e7b217b (make your code work)
=======
    return fdef;
<<<<<<< HEAD
=======
    return fdef;
=======
>>>>>>> parent of 7644d56 (.)
=======
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
>>>>>>> main
>>>>>>> parent of edd9782 (.)
=======
>>>>>>> parent of 651b737 (remove workflows)
}
>>>>>>> parent of be1b0de (changed unix build name)
=======
>>>>>>> parent of e7b217b (make your code work)
}
>>>>>>> parent of 98c92a1 (revert to initial pull)

AST_T* scope_get_function_definition(scope_T* scope, const char* fname)
{
<<<<<<< HEAD
<<<<<<< HEAD
  int i;
  for (i = 0; i < scope->function_definitions_size; i++) {
    AST_T* fdef = scope->function_definitions[i];

    if (strcmp(fdef->function_definition_name, fname) == 0) {
      return fdef;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> parent of edd9782 (.)
=======
>>>>>>> parent of 651b737 (remove workflows)
=======
=======
>>>>>>> parent of e7b217b (make your code work)
=======
>>>>>>> parent of e7b217b (make your code work)
>>>>>>> parent of 98c92a1 (revert to initial pull)
    int i;
    for ( i = 0; i < scope->function_definitions_size; i++)
    {
        AST_T* fdef = scope->function_definitions[i];

        if (strcmp(fdef->function_definition_name, fname) == 0)
        {
<<<<<<< HEAD
<<<<<<< HEAD
            
            
            
            
            
            fdef;
<<<<<<< HEAD
=======
            return fdef;
>>>>>>> parent of e7b217b (make your code work)
=======
            return fdef;
>>>>>>> parent of e7b217b (make your code work)
=======
            return fdef;
>>>>>>> parent of be1b0de (changed unix build name)
=======
>>>>>>> parent of 651b737 (remove workflows)
        }
<<<<<<< HEAD
=======
>>>>>>> parent of 7644d56 (.)
=======
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
>>>>>>> main
>>>>>>> parent of edd9782 (.)
    }
  }

  return (void*)0;
}

AST_T* scope_add_variable_definition(scope_T* scope, AST_T* vdef)
{
  if (scope->variable_definitions == (void*)0) {
    scope->variable_definitions = calloc(1, sizeof(struct AST_STRUCT*));
    scope->variable_definitions[0] = vdef;
    scope->variable_definitions_size += 1;
  } else {
    scope->variable_definitions_size += 1;
    scope->variable_definitions = realloc(
      scope->variable_definitions, scope->variable_definitions_size * sizeof(struct AST_STRUCT*));
    scope->variable_definitions[scope->variable_definitions_size - 1] = vdef;
  }

  return vdef;
}

AST_T* scope_get_variable_definition(scope_T* scope, const char* name)
{
  int i;
  for (i = 0; i < scope->variable_definitions_size; i++) {
    AST_T* vdef = scope->variable_definitions[i];

    if (strcmp(vdef->variable_definition_variable_name, name) == 0) {
      return vdef;
    }
  }

  return (void*)0;
}

#include "include/AST.h"

AST_T* init_ast(int type)
{
<<<<<<< HEAD
<<<<<<< HEAD
    AST_T* ast = calloc(1, sizeof(struct AST_STRUCT));
    ast->type = type;
=======
  AST_T* ast = calloc(1, sizeof(struct AST_STRUCT));
  ast->type = type;
>>>>>>> parent of 651b737 (remove workflows)

  ast->scope = (void*)0;

  /* AST_VARIABLE_DEFINITION */
  ast->variable_definition_variable_name = (void*)0;
  ast->variable_definition_value = (void*)0;

  /* AST_FUNCTION_DEFINITION */
  ast->function_definition_body = (void*)0;
  ast->function_definition_name = (void*)0;
  ast->function_definition_args = (void*)0;
  ast->function_definition_args_size = 0;

  /* AST_VARIABLE */
  ast->variable_name = (void*)0;

  /* AST_FUNCTION_CALL */
  ast->function_call_name = (void*)0;
  ast->function_call_arguments = (void*)0;
  ast->function_call_arguments_size = 0;

  /* AST_STRING */
  ast->string_value = (void*)0;

  /* AST_COMPOUND */
  ast->compound_value = (void*)0;
  ast->compound_size = 0;

<<<<<<< HEAD
    return ast;
=======
  AST_T* ast = calloc(1, sizeof(struct AST_STRUCT));
  ast->type = type;

  ast->scope = (void*)0;

  /* AST_VARIABLE_DEFINITION */
  ast->variable_definition_variable_name = (void*)0;
  ast->variable_definition_value = (void*)0;

  /* AST_FUNCTION_DEFINITION */
  ast->function_definition_body = (void*)0;
  ast->function_definition_name = (void*)0;
  ast->function_definition_args = (void*)0;
  ast->function_definition_args_size = 0;

  /* AST_VARIABLE */
  ast->variable_name = (void*)0;

  /* AST_FUNCTION_CALL */
  ast->function_call_name = (void*)0;
  ast->function_call_arguments = (void*)0;
  ast->function_call_arguments_size = 0;

  /* AST_STRING */
  ast->string_value = (void*)0;

  /* AST_COMPOUND */
  ast->compound_value = (void*)0;
  ast->compound_size = 0;

<<<<<<< HEAD
  return ast;
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> parent of 7644d56 (.)
=======
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)
=======
=======
    
    
    ast;
>>>>>>> main
>>>>>>> parent of edd9782 (.)
=======
  return ast;
>>>>>>> parent of 651b737 (remove workflows)
}

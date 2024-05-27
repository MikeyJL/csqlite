#include "../include/statement.h"

#include <stdio.h>

PrepareResult prepare_statement(InputBuffer *input_buffer,
                                Statement *statement) {
  if (strcmp(input_buffer->buffer, ".select") == 0) {
    statement->type = STATEMENT_SELECT;
    return PREPARE_SUCCESS;
  }

  if (strcmp(input_buffer->buffer, ".insert") == 0) {
    statement->type = STATEMENT_INSERT;
    return PREPARE_SUCCESS;
  }

  return PREPARE_UNRECOGNIZED_STATEMENT;
}

void execute_statement(Statement *statement) {
  switch (statement->type) {
  case (STATEMENT_SELECT):
    printf("Selecting...");
    break;
  case (STATEMENT_INSERT):
    printf("Inserting...");
    break;
  }
}

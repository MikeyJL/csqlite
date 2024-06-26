#ifndef STATEMENT_H
#define STATEMENT_H

#include "repl.h"
#include <string.h>
typedef enum { PREPARE_SUCCESS, PREPARE_UNRECOGNIZED_STATEMENT } PrepareResult;

typedef enum { STATEMENT_INSERT, STATEMENT_SELECT } StatementType;

typedef struct {
  StatementType type;
} Statement;

PrepareResult prepare_statement(InputBuffer *input_buffer,
                                Statement *statement);

void execute_statement(Statement *statement);

#endif // !STATEMENT_H

#ifndef META_COMMANDS_H
#define META_COMMANDS_H

#include "repl.h"

typedef enum {
  META_COMMAND_SUCCESS,
  META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

typedef enum { PREPARE_SUCCESS, PREPARE_UNRECOGNIZED_STATEMENT } PrepareResult;

MetaCommandResult execute_meta_command(InputBuffer *input_buffer);

#endif

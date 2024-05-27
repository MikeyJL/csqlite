#ifndef META_COMMAND_H
#define META_COMMAND_H

#include "repl.h"

typedef enum {
  META_COMMAND_SUCCESS,
  META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

MetaCommandResult execute_meta_command(InputBuffer *input_buffer);

#endif // !META_COMMAND_H

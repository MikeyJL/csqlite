#include "../include/meta_command.h"
#include "../include/utils.h"

#include <stdlib.h>
#include <string.h>

MetaCommandResult execute_meta_command(InputBuffer *input_buffer) {

  char *available_commands[] = {".exit", ".select", ".insert"};

  int length = sizeof(available_commands) / sizeof(available_commands[0]);

  StrArrayReturnCode array_match_code =
      str_array_contains(available_commands, length, input_buffer->buffer);

  if (array_match_code != 0) {
    return META_COMMAND_UNRECOGNIZED_COMMAND;
  }

  if (strcmp(input_buffer->buffer, ".exit") == 0) {
    close_input_buffer(input_buffer);
    exit(EXIT_SUCCESS);
  }

  return META_COMMAND_SUCCESS;
}

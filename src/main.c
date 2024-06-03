#include <stdbool.h>
#include <stdio.h>

#include "../include/meta_command.h"
#include "../include/repl.h"
#include "../include/statement.h"

int main(int argc, char *argv[]) {
  InputBuffer *input_buffer = new_input_buffer();

  while (true) {
    print_prompt();
    read_input(input_buffer);

    if (input_buffer->buffer[0] == '.') {
      switch (execute_meta_command(input_buffer)) {
      case (META_COMMAND_SUCCESS):
        printf("Success\n");
        break;
      case (META_COMMAND_UNRECOGNIZED_COMMAND):
        printf("Unrecognized command: %s\n", input_buffer->buffer);
        continue;
      }
    }

    Statement statement;
    switch (prepare_statement(input_buffer, &statement)) {
    case (PREPARE_SUCCESS):
      printf("Successfully prepared statement\n");
      break;
    case (PREPARE_UNRECOGNIZED_STATEMENT):
      printf("Unrecognized statement: %s\n", input_buffer->buffer);
      continue;
    }

    execute_statement(&statement);
  }

  return 0;
}

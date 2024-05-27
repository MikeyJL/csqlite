#include <stdbool.h>

#include "../include/meta_commands.h"
#include "../include/repl.h"

int main(int argc, char *argv[]) {
  InputBuffer *input_buffer = new_input_buffer();

  while (true) {
    print_prompt();
    read_input(input_buffer);

    execute_meta_command(input_buffer);
  }

  return 0;
}

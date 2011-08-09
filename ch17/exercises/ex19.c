#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void
new_cmd(void)
{
  printf("New Command!\n");
}

void
exit_cmd(void)
{
  printf("Exiting!\n");
  exit(EXIT_SUCCESS);
}

struct {
  char *name;
  void (*command)(void);
} file_cmd[] = {
  {"new", new_cmd},
  {"exit", exit_cmd}
};

int
main(void)
{
  int i;
  int num_commands;
  char command_name[100];

  num_commands = sizeof(file_cmd) / (sizeof(void*) * 2);
  
  printf("Number of commands registered: %d\n", num_commands);

  while (true) {
    printf("Enter a command name: ");
    scanf("%s", command_name);

    for (i = 0; i < num_commands; i++) {
      if (strcmp(file_cmd[i].name, command_name) == 0) {
        printf("Found command: %s\n", file_cmd[i].name);
        file_cmd[i].command();
      }
    }
  }
  
  return EXIT_SUCCESS;
}

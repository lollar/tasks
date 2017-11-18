#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct tasks {
  char *task[50];
};

int main(int argc, char *argv[]) {
  struct tasks today;

  if(argc > 1) {
    for(int i = 1; i < argc; i++) {
      today.task[i-1] = argv[i];
    }
  }

  printf("Today's tasks: \n");
  for(int i = 0; i < argc - 1; i++) {
    printf("[%d]: %s\n", i, today.task[i]);
  }

  char string[256];
  fgets(string, 256, stdin);
  puts(string);

  getchar();
  return 0;
}

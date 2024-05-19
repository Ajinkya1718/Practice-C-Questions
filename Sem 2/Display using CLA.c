// WAP to display arguments & count of arguments passed through command line.
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Number of command-line arguments: %d\n", argc);

  for (int i = 1; i <argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
  }

  return 0;
}

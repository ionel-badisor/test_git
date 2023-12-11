#include <stdio.h>

int main(int argc, char *argv[]) {
  int a = 123;
  int *refa = &a;

  printf("%d %xl %s\n", a, refa, "hello world");
  return 0;
}

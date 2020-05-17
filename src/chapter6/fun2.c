#include <stdio.h>

extern void fun();
int f;

int main() {
  fun();
  printf("fun2.c %p, f=%d\n", &f, f);
}

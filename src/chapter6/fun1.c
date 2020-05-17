#include <stdio.h>

float f = 1.0;
void fun() {
  f = 2.22;
  printf("in fun1.c %p\n", &f);
}

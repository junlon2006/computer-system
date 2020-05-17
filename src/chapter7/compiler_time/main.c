#include <malloc.h>

int main() {
    void *p = malloc(32);
    free(p);

    return 0;
}
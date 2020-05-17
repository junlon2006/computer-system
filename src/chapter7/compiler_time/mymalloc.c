#include <stdio.h>
#include <malloc.h>

void* mymalloc(size_t size) {
    void *ptr = malloc(size);
    printf("malloc %p, size=%lu\n", ptr, size);
    return ptr;
}

void myfree(void *ptr) {
    free(ptr);
    printf("free %p\n", ptr);
}
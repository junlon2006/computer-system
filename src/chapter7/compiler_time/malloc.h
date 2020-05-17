#ifndef __MY_MALLOC_H_
#define __MY_MALLOC_H_

#define malloc(size) mymalloc(size) 
#define free(ptr) myfree(ptr)

void *mymalloc(size_t size);
void myfree(void *ptr);

#endif
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void *malloc(size_t size);
void free(void *ptr);
void exit(int status);
void *malloc_checked(unsigned int b);
char *string_ncocat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int main, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif

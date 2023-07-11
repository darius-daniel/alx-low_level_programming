#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

/* ================== Prototypes =================== */
/* Helper functions */
void print_list(int *array, size_t start, size_t stop);
int search(int *array, size_t left, size_t right, int value);

/* Main funcitons */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif

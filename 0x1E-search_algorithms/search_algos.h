#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/** Structure */
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int crap_search(int *array, size_t size, int value);
int dual_search(int *array, size_t size, int value);
int more_search(int *array, size_t size, int value);
int ahead_binary(int *array, size_t size, int value);
/*listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);*/

#endif
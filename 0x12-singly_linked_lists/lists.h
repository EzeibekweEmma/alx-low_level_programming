#ifndef _LISTS_H_
#define _LISTS_H_
/* Struct */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


/* Standard library header files */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* My header files */
int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* _LISTS_H_ */

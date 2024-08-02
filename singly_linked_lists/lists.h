#ifndef LISTS_h
#define LISTS_h

/**
 * struct list_s - singly linked lists
 * @str: string - (malloc string)
 * @len: length of string
 * @next: point to the next node
 *
 * Description: singly linked lists node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;




size_t print_list(const list_t *h);

/********************************************/
/* @file ds.h                               */
/*                                          */
/* @brief Contains headers for ds.c         */
/*                                          */
/* @authors Fadhil Abubaker, Malek Anabtawi */
/********************************************/

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>

#define DATA_SIZE 1500

/* Linked list for storing bytes */

typedef struct node node;

struct node {
  uint8_t  data[DATA_SIZE];
  node* next;

};

typedef struct linkedlist {
  node*  first;
  size_t count;
  node*  last;

} ll;

ll*   create_ll();
void  remove_ll(ll* list);

void  add_node(ll* list, uint8_t* data, size_t n);
void delete_node(ll* list);

/* End Linked list */

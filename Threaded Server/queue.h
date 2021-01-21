//  Includes
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//  Structs
struct process_t{
      int id;
      char *name;
};

struct process_c{
      char *character;
};

struct process_i{
      int fd;
};

struct node {
      void *data;
      struct node *next;
};

struct queue_t {
      int count;
      struct node *first;
      struct node *last;
};
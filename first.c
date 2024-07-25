#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_ITEMS 100
#define MAX_TRANSACTIONS 100
typedef struct FPNODE{
    int item;
    int count;
    struct fpnode*parent;
    struct fpnode*next;
    struct fpnode*children[MAX_ITEMS];
}
FPNODE;
typedef struct{
   int item;
int count;
}
item count;
type
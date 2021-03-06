#include <stdio.h>
#include <stdlib.h>
typedef struct node_type * node_ptr;
struct node_type{
    int data;
    node_ptr link;
};

int main() {
    node_ptr node1, node2, node3;
    node1 = (node_ptr) malloc(sizeof(struct node_type));
    node2 = (node_ptr) malloc(sizeof(struct node_type));
    node3 = (node_ptr) malloc(sizeof(struct node_type));
    node1->data = 7;
    node2->data = 11;
    node3->data = 13;
    node1->link = node2;
    node2->link = node3;
    node3->link = NULL;
    printf("%d %d %d", node1->data, node2->data, node3->data);
    free(node1);
    free(node2);
    free(node3);
    return 0;
}

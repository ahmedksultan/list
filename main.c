#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    struct node * A = NULL;
    // printing empty list (print_list)
    printf("Printing empty list...");
    printf("\nResult: ");
    print_list(A);

    printf("\nAdding items to list...");
    // adding items to front of linked list (insert_front)
    A = insert_front(A, 9);
    A = insert_front(A, 99);
    A = insert_front(A, 999);
    A = insert_front(A, 8);
    A = insert_front(A, 88);
    A = insert_front(A, 888);
    
    printf("\nResult: ");
    print_list(A);

    printf("\nRemoving node containing 888 from the list...");
    A = remove_node(A, 888);
    printf("\nResult: ");
    print_list(A);


    return 0;
}
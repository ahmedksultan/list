#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    struct node * A = NULL;
    // printing empty list (print_list)
    printf("Printing empty list...\n");
    printf("Result: ");
    print_list(A);

    printf("\nAdding items to list...\n");
    // adding nodes to front of list (insert_front)
    A = insert_front(A, 9);
    A = insert_front(A, 99);
    A = insert_front(A, 999);
    A = insert_front(A, 8);
    A = insert_front(A, 88);
    A = insert_front(A, 888);
    A = insert_front(A, 808);

    // printing list after adding nodes
    printf("Result: ");
    print_list(A);

    // testing out removing first node
    printf("\nRemoving node containing 808 from the list...\n");
    A = remove_node(A, 808);
    printf("Result: ");
    print_list(A);

    // testing out removing middle node
    printf("\nRemoving node containing 99 from the list...\n");
    A = remove_node(A, 99);
    printf("Result: ");
    print_list(A);

    // testing out removing last node
    printf("\nRemoving node containing 9 from the list...\n");
    A = remove_node(A, 9);
    printf("Result: ");
    print_list(A);

    // testing out remvoing node whose target does not exist
    printf("\nRemoving node containing 2000 from the list...\n");
    A = remove_node(A, 2000);
    printf("Result: ");
    print_list(A);

    printf("\nFreeing list...\n");
    A = free_list(A);
    printf("Result: ");
    print_list(A);

    return 0;
}
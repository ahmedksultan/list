#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/* --- INSTRUCTIONS ---
void print_list(struct node *);
    Should take a pointer to a node struct and print out all of the data in the list
struct node * insert_front(struct node *, int);
    Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
    The second argument should match whatever data you contain in your nodes.
    Returns a pointer to the beginning of the list.
struct node * free_list(struct node *);
    Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).  
struct node * remove_node(struct node *front, int data);
    Remove the node containing data from the list pointed to by front.
    If data is not in the list, nothing is changed.
    Returns a pointer to the beginning of the list.
Your list functions should be in a .c/.h library, with a separate .c file used for testing.
--- INSTRUCTIONS --- */

void print_list(struct node * a) {
    // starting list on open bracket
    printf("[ ");
    while (a != NULL) {
        // prints integer stored in node
        printf("%d ", a->i);
        // sets to next node
        a = a->next;
    }
    // ends list on closed bracket
    printf("]\n");
}

struct node * insert_front(struct node * a, int n) {
    // allocate space for new node
    struct node * new = malloc(sizeof(struct node));
    // store provided integer in node
    new->i = n;
    // appends new node to front of linked list
    new->next = a;
    // return pointer of front
    return new;
}

struct node * remove_node(struct node * front, int data) {
    // checking to see if front has target data
    if (front->i == data) {
        struct node * front2 = front->next;
        free(front);
        front = NULL;
        return front2; }
    // cycling through linked list, looking for node w/ matching data
    struct node * a = front;
    while (a != NULL) {
        if (a->next->i == data) {
            // creating node pointing to the node after the soon-to-be deleted node
            struct node * newNext = a->next->next;
            struct node * oldNext = a->next;
            a->next = newNext;
            free(oldNext);
            oldNext = NULL;
            return front;
        }
        a = a->next;

    }
    // this return only occurs when a) the list is empty, or b) when the entire list has been searched
    return front;
}
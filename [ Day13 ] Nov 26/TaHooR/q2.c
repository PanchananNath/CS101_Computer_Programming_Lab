#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
} *temp = NULL, *first = NULL, *second = NULL, *third = NULL, *last = NULL;

struct Node* Create (int A[], int n){
    int i;
    struct Node *t, *last;
    temp = (struct Node *) malloc(sizeof(struct Node));
    temp->data = A[0];
    temp->next = NULL;
    last = temp;

    for (i = 1; i < n; i++){
        t = (struct Node *) malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;}
    return temp;
}

void Display(struct Node *p){
    while (p != NULL){
        printf ("%d->", p->data);
        p = p->next;}
    printf("NULL");}

void Merge(struct Node *first, struct Node *second){
    if (first->data < second->data){
        third = last = first;
        first = first->next;
        last->next = NULL;}
    else{
        third = last = second;
        second = second->next;
        last->next = NULL;}
    
    while (first != NULL && second != NULL){
        if (first->data < second->data){
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;}
        else{
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;}
    }
    if (first != NULL)last->next = first;
    else last->next = second;
}

int main(){
    int A[] = { 1,2,3,4,5,6,7,8,9,10 };
    int B[] = { 11,12,13,14,15,16,17,18,19,20 };
    first = Create (A, 10);
    second = Create (B, 10);

    printf ("1st Linked List: ");
    Display (first);

    printf ("\n2nd Linked List: ");
    Display (second);

    Merge (first, second);

    printf ("\n\nMerged Linked List: \n");
    Display (third);
  return 0;
}
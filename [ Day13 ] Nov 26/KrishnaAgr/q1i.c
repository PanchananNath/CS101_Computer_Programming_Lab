#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* next;
};
struct Node * insertNodeAtFirst(struct Node* head , int value) {
  struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = value;
  return ptr;
}
struct Node * insertAtEnd(struct Node* head, int value) {
  struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
  struct Node *ind = head;
  while(ind-> next != NULL) {
    ind = ind->next;
  }
  ind->next = ptr;
  ptr -> data = value;
  return head;
}
struct Node* insertAtIndex(struct Node* head , int target , int value ) {
  struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
  ptr->data = value;
  struct Node* Temp = head;
  for(int j = 0 ; j < target -1 && Temp != NULL; j++) { 
  Temp = Temp->next;
  }
  ptr->next = Temp->next;
  Temp->next = ptr;

  return head;
}
int numberOfNodes(struct Node* head) {
  struct Node* ptr = head;
  int count = 0;
  while(ptr != NULL) {
    ptr = ptr->next;
    count++;
  }
  return count;
}
struct Node* deleteFromStart(struct Node* head) {
  head = head->next;
  return head;
}
struct Node* deleteFromEnd(struct Node* head) {
  struct Node* j = head;
  
  while(j->next->next != NULL) {
    j = j->next;
  }
  free(j->next);
  j->next = NULL;
  return head;
}

int searchElement(struct Node* head , int target) {
  struct Node*ptr = head;
  int index = 0;
  while(index != target) {
    ptr = ptr->next;
    index++;
  }
  int value = ptr->data;
  return value;
}
struct Node* deleteByValue(struct Node* head , int target) {
  if(target == 0) {
    struct Node* Temp = head;
    head = head->next;
    free(Temp);
    return head;
  }
  int index = 0;
  struct Node* ptr = head;
  while(index != target - 1) {
    ptr = ptr->next;
    index++;
  }
  ptr->next = ptr->next->next;
  free(ptr->next);
  // ptr->next= NULL;
  return head;
}
void linkedListTransverse(struct Node* ptr) {
  while(ptr != NULL) {
  printf("%d\n" , ptr->data);
  ptr = ptr -> next;
  }
}
int main() {

  struct Node* Head;
  struct Node* Second;
  struct Node* Third;
  struct Node* Fourth;
  struct Node* Fifth;

  Head = (struct Node*)malloc(sizeof(struct Node));
  Second = (struct Node*)malloc(sizeof(struct Node));
  Third = (struct Node*)malloc(sizeof(struct Node));
  Fourth = (struct Node*)malloc(sizeof(struct Node));
  Fifth = (struct Node*)malloc(sizeof(struct Node));

  Head->data=10;
  Head->next = Second;
  Second->data=11;
  Second->next=Third;
  Third->data=12;
  Third->next = Fourth;
  Fourth->data=13;
  Fourth->next=Fifth;
  Fifth->data=14;
  Fifth->next = NULL;

  int n;
  printf("------Enter the operation you want to do-------\n");
  printf("1:Insert At Beginning\n");
  printf("2:Insert At End\n");
  printf("3:Insert At given position\n");
  printf("4:Count Number of Nodes\n");
  printf("5:Delete at start\n");
  printf("6:Delete At End\n");
  printf("7:Search Element By Its Position\n");
  printf("8:Delete By Its Position\n");
  scanf("%d" , &n);

  switch (n)
  {
  case 1:
    int v;
    printf("Enter The new starting value:");
    scanf("%d" , &v);
    Head = insertNodeAtFirst(Head , v);
    linkedListTransverse(Head);
    break;
  case 2:
      int k;
    printf("Enter The new Ending value:");
    scanf("%d" , &k);
    Head = insertAtEnd(Head , k);
    linkedListTransverse(Head);
    break;
  case 3:
  int l , m;
  printf("Enter value you want to insert:");
  scanf("%d" , &l);
  printf("Enter the position:" );
  scanf("%d" , &m);
  Head = insertAtIndex(Head , m , l);
  linkedListTransverse(Head);
  break;
  case 4:
  printf("There are %d Nodes" , numberOfNodes(Head));
  break;
  case 5:
  Head = deleteFromStart(Head);
  linkedListTransverse(Head);
  case 6:
  Head = deleteFromEnd(Head);
  linkedListTransverse(Head);
  break;
  case 7:
  int index;
  printf("Enter which element you want to search:");
  scanf("%d" , &index);
  printf("The data at index %d is %d" , index , searchElement(Head , index));
  break;
  case 8:
  int x;
  printf("Which Node you want to delete?");
  scanf("%d" , &x);
  Head = deleteByValue(Head , x-1);
  linkedListTransverse(Head);
  break;
  default:
    break;
  }

  return 0;
}
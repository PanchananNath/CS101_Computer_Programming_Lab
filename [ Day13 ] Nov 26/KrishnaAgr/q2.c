#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *create(int x)
{
  struct node *temp = malloc(sizeof(struct node));
  temp->data = x;
  temp->next = NULL;
  return temp;
}

struct node *merge(struct node *a, struct node *b)
{
  struct node *head = NULL, *tail = NULL;

  while (a != NULL && b != NULL)
  {
    struct node *t;

    if (a->data < b->data)
    {
      t = a;
      a = a->next;
    }
    else
    {
      t = b;
      b = b->next;
    }

    if (head == NULL)
    {
      head = tail = t;
    }
    else
    {
      tail->next = t;
      tail = t;
    }
  }

  if (a != NULL)
  {
    if (head == NULL)
      return a;
    tail->next = a;
  }
  if (b != NULL)
  {
    if (head == NULL)
      return b;
    tail->next = b;
  }

  return head;
}

void print(struct node *h)
{
  while (h != NULL)
  {
    printf("%d -> ", h->data);
    h = h->next;
  }
  printf("NULL\n");
}

int main()
{

  struct node *list1 = NULL, *list2 = NULL, *temp, *last;

  for (int i = 1; i <= 10; i++)
  {
    temp = create(i);
    if (list1 == NULL)
      list1 = last = temp;
    else
    {
      last->next = temp;
      last = temp;
    }
  }

  for (int i = 11; i <= 20; i++)
  {
    temp = create(i);
    if (list2 == NULL)
      list2 = last = temp;
    else
    {
      last->next = temp;
      last = temp;
    }
  }

  struct node *merged = merge(list1, list2);

  print(merged);

  return 0;
}

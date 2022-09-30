
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};

struct Node *head;

void
Insert (int data)
{
  struct Node *temp = (struct Node *) malloc (sizeof (struct Node *));


  temp->data = data;
  temp->next = NULL;

  if (head == NULL)
    {
      head = temp;
      return;
    }

  struct Node *temp2 = head;
  while (temp2->next != NULL)
    {
      temp2 = temp2->next;
    }
  temp2->next = temp;
}

void
Reverse (struct Node *p)
{
  if (p->next == NULL)
    {
      head = p;
      return;
    }
  Reverse (p->next);
  struct Node *q = p->next;
  q->next = p;
  p->next = NULL;

}

void
Print ()
{
  struct Node *temp = head;
  while (temp != NULL)
    {
      printf (" %d", temp->data);
      temp = temp->next;
    }
  printf ("\n");

}


int
main ()
{
  head = NULL;
  Insert (4);
  Insert (6);
  Insert (8);
  Insert (2);
  Print ();
  Reverse (head);
  Print ();

  return 0;
}

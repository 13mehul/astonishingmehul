#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
  int data;
  struct node* next;
}node;

node *traverse(node *head , int n)
{
  for(int i = 0;i<n;i++)
  {
    int x ;
    cin>>x;
    node *temp = (node*)malloc(sizeof(node));
    temp ->data = x;
    temp->next = NULL;
    if(head == NULL)
    head = temp;
    else
    {
      node * p = head ;
      while(p->next != NULL)
      {
        p = p->next;
      }
      p->next = temp;
    }
  }
  return head;
}

node *reverse(node*head)
{
  node * curr = head;
  node *prev = NULL, *next = NULL;
  while(curr != NULL)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
  return head;
}

void print(node *head)
{
  node * p = head;
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p = p->next;
  }
  cout<<"\n";
}

int main()
{
  int n;
  cin>>n;
  node *head = NULL;
  head = traverse(head, n);
  cout<<"Linked list is \n";

  print(head);

  cout<<"Reverse linked list is \n";
  head = reverse(head);
  print(head);

}

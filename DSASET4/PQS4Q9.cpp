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

node* _delete(node *head, int key)
{
  node *tmp = head;
  node *prev = head;
  if(tmp != NULL and tmp->data == key)
  {
    head = tmp->next;
    tmp ->next = NULL;
    return head;
  }
  while(tmp != NULL and tmp->data != key)
  {
    prev = tmp;
    tmp = tmp->next;
  }
  if(tmp == NULL)
  return head;
  prev->next = tmp->next;
  tmp->next = NULL;
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

  cout<<"Enter the number to be deleted\n";
  int x;
  cin>>x;
  head = _delete(head,x);
  cout<<"New linked list is \n";
  print(head);



}

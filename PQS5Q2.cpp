#include<iostream>
using namespace std;

typedef struct node
{
  struct node *left;
  struct node *right;
  int data;
}node;


node *insertion(int n, node*head)
{

  node *temp=(node *)malloc(sizeof(node*));
  temp->data=n;
  temp->left=NULL;
  temp->right=NULL;
  if(head==NULL)
  {
    head=temp;
    return head;
  }
  else if(head->data>n)
  {
    head->left=insertion(n,head->left);
  }
  else
  {
    head->right=insertion(n,head->right);
  }
  return head;
}

void preorder(node *head)
{
  if(head==NULL)
  return;
  cout<<head->data<<" ";

  preorder(head->left);

  preorder(head->right);

}



int main()
{
  int n;
  cin>>n;
  node *head=NULL;
  while(n--)
  {
    int x;
    cin>>x;
    head=insertion(x,head);
  }
  preorder(head);
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
  int data;
  struct node*left;
  struct node *right;
}node;

node *newNode(int k)
{
  node *temp = (node *)malloc (sizeof(node));
  temp->data = k;
  temp->left = temp->right = NULL;
  return temp;
}

int cntNodes(node *root)
{
  if(root == NULL)
  return 0;
  return (1 + cntNodes(root->left)+ cntNodes(root->right));

}

bool Complete (node *root , int index , int cnt)
{
  if(root == NULL)
  return true;

  if(index >= cnt)
  return false;

  return (Complete(root->left , 2*index +1,cnt) and (Complete(root->right, 2*index +2, cnt)));
}

int main()
{
  node *root = NULL;
  root = newNode(1);
   root->left = newNode(2);
   root->right = newNode(3);
   root->left->left = newNode(4);
   root->left->right = newNode(5);
   root->right->left = newNode(6);
   int cnt = cntNodes(root);
   if(Complete(root,0 ,cnt))
   cout<<"Binary tree is complete\n";
   else
   cout<<"Binary tree is not complete\n";
}

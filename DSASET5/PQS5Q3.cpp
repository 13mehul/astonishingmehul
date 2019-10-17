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

void preorder(node *head)
{
  if(head == NULL)
  return ;
  cout<<head->data<<" ";
  preorder(head -> left);
  preorder(head -> right);
}

void inorder(node *head)
{
  if(head == NULL)
  return ;
  inorder(head -> left);
  cout<<head->data<<" ";
  inorder(head -> right);
}

void postorder(node *head)
{
  if(head == NULL)
  return ;
  postorder(head -> left);
  postorder(head -> right);
  cout<<head->data<<" ";
}

bool nodeExists(node *head , int key)
{
  if(head == NULL)
  return false;
  if(head -> data == key)
  return true;

  return (nodeExists(head -> left , key)) || (nodeExists(head -> right , key));
}


int main()
{
  node *root = NULL;ve a node from a givenhea
  root = newNode(1);
   root->left = newNode(2);
   root->right = newNode(3);
   root->left->left = newNode(4);
   root->left->right = newNode(5);
   root->right->left = newNode(6);

   cout<<"Preorder traversal is \n";
   preorder(root);
   cout<<"\n";
   cout<<"postorder traversal is \n";
   postorder(root);
   cout<<"\n";
   cout<<"Inorder traversal is \n";
   inorder(root);
   cout<<"\n";

   cout<<"Enter the number to be searched\n";
   int x ;
   cin>>x;
   if(nodeExists(root,x))
   cout<<"Node Exists\n";
   else cout<<"Node does not exists\n";



}

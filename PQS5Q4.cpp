#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
typedef struct node
{
  int data;
  struct node *left;
  struct node *right;
}node;

node *insertion(int n, node*head)
{

  node *temp=(node *)malloc(sizeof(node));
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

void preOrder(node *head)
{
  if(head == NULL)
  return;

    printf("%d ",head->data);
    preOrder(head->left);
    preOrder(head->right);
}

void inOrder(node *head)
{
  if(head == NULL)
  return;

    inOrder(head->left);
    printf("%d ",head->data);
    inOrder(head->right);
}

void postOrder(node *head)
{
  if(head == NULL)
  return;

    postOrder(head->left);
    postOrder(head->right);
    printf("%d ",head->data);
}

int search(node *head,int n)
{
  //printf("%d\n",head->data);
  if(head==NULL)
  {
    return 0;
  }
  else
  {
  //  printf("hey\n");
    if(head->data == n)
    return 1;
    else if(head->data > n)
    {
    //  printf("goin left\n");

    return search(head->left,n);
    }
    else
    return search(head->right,n);
  }
  return 0;
}

int minimum(node *head)
{
  while(head->left!=NULL)
  {
    return minimum(head->left);
  }
  return head->data;
}

int maximum(node *head)
{
  while(head->right!=NULL)
  {
    return maximum(head->right);
  }
  return head->data;
}

int predecessor(node *head, int n, int pole)
{
  if((head->left) -> data == n)
  {
    pole=1;
    return n;
  }
  else if((head->right) ->data == n)
  {
    pole=1;
    return n;
  }
  else
  {
    if(head->data > n)
    return predecessor(head->left,n,pole);
    else
    {
      return predecessor(head->right,n,pole);
    }
  }
}

node *minValueNode(node *head)
{
  node *curr = head;
  while(curr and curr->left != NULL)
  curr = curr -> left;

  return curr;
}

node * deleteNode(node *head , int key)
{
  if(head == NULL)
  return head;

  if(key < head->data)
  head->left = deleteNode(head->left,key);

  else if(key > head->data)
  head->right = deleteNode(head->right , key);

  else
  {
    if(head->left == NULL)
    {
      node *temp = head->right;
      head->right = NULL;
      return temp;
    }
    else if (head->right == NULL)
    {
      node *temp = head->left;
      head->left = NULL;
      return temp;
    }

    node *temp = minValueNode(head -> right);
    head -> data = temp->data;
    head -> right = deleteNode(head->right , temp->data);


  }
  return head;
}

int main()
{
  node *head = NULL;
  int cond;
  int i=0;
  while(1)
  {

      char s[4];
      scanf("%s",s);
      if(strcmp(s,"insr")==0)
      {
        int n;
        scanf("%d", &n);

        head = insertion(n,head);
      }
      else if(strcmp(s,"stop")==0)
      {
        break;
      }
      else if(strcmp(s,"srch")==0)
      {
        int n;
        scanf("%d", &n);
        int result = search(head,n);
      //  printf("%d\n",result);
        if(result == 0)
        printf("NOT FOUND\n");
        else
        printf("FOUND\n");
      }
      else if(strcmp(s,"minm")==0)
      {
        if(head == NULL)
        printf("NIL\n");
        else
        {
          int x = minimum(head);
          printf("%d\n",x);
        }
      }
      else if(strcmp(s,"maxm")==0)
      {
        if(head == NULL)
        printf("NIL\n");
        else
        {
          int x=maximum(head);
          printf("%d\n",x);
        }
      }
      else if(strcmp(s,"inor")==0)
      {
        inOrder(head);
      }
      else if(strcmp(s,"prer")==0)
      {
        preOrder(head);
      }
      else if(strcmp(s,"post")==0)
      {
        postOrder(head);
      }
      else if(strcmp(s,"pred")==0)
      {
        int n;
        scanf("%d", &n);

          int x = maximum(head->left);
          if(x == -1)
          printf("NOT FOUND\n");
          else
          {
            printf("%d\n",x);
          }

      }
      else if(strcmp(s,"succ")==0)
      {
        int n;
        scanf("%d", &n);
        if(head == NULL)
        {
          printf("NIL\n");
        }


      }
      else if(strcmp(s,"dele") == 0)
      {
        cout<<"Enter the node to be deleted\n";
        int x;
        cin>>x;
        head = deleteNode(head , x);
      }
  }
  // preOrder(head);

}

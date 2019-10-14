#include <iostream>

using namespace std;

struct Stack{
  int top=0;
  int a[100];
};

struct Queue{
  int a[100];
  int head=0;
  int tail=0;
};

int deQueue(Queue* Q){
  int val = Q->a[Q->head];
  Q->head = Q->head + 1;
  // cout<<"Element "<<val<<" dequeued from Q"<<endl;
  return val;
};

void enQueue(Queue* Q,int value){
  Q->a[Q->tail] = value;
  Q->tail = Q->tail + 1;
  cout<<"Element "<<value<<" enqued to Q"<<endl;
};

void pushS(Stack* st,int v){
  st->a[st->top] = v;
  st->top = st->top + 1;
  cout<<"Element "<<v<<" pushed to stack"<<endl;
};

int popS(Stack* st){
  int v;
  st->top = st->top - 1;
  v = st->a[st->top];
  cout<<"Element "<<v<<" popped from stack"<<endl;
  return v;
};

void fun(Queue* Q) {
  Stack S;
  int var;

  // Run while Q is not empty
  while ((Q->head)!=(Q->tail)) {
    // deQueue an item from Q and push the dequeued item to S
    var = deQueue(Q);
    pushS(&S,var);
  }
  // Run while Stack S is not empty
  while (S.top!=0) {
    // Pop an item from S and enqueue the poppped item to Q
    var = popS(&S);
    enQueue(Q,var);
  }
};

int main(){
  Queue* q = new Queue;
  for (int i = 0; i < 10; i++) {
    enQueue(q,i);
  }
  fun(q);
  return 0;
}

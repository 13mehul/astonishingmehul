#include<bits/stdc++.h>
using namespace std;

struct part
{
  string name;
  int roll;
};

class Queue
{
  private :
  int front = 0, rear = 0;
  public :
  part a[100];

  void show()
  {
    if(front == rear)
    {
      cout<<"Queue is empty\n";
    }
    for(int i = rear;i<front;i++)
    cout<<a[i].name<<" "<<a[i].roll<<"\n";
  }

  void enqueue(part p)
  {
    a[front] = p;
    front++;
  }

  void dequeue()
  {
    if(rear == front)
    {
      cout<<"Queue is empty\n";
    }
    else
    {
      cout<<a[rear].name<<" deQueued\n";
      rear++;
    }
  }

};

int main()
{
  Queue Q;
   part p;
   int tmp=0;
   char c;

   while (tmp==0){
     cout<<"Enter e to enque, d to dequeue & s to show the queue: ";
     cin>>c;
     if (c=='e') {
       cout<<"Enter name: ";
       cin>>p.name;
       cout<<"Enter roll number: ";
       cin>>p.roll;
       Q.enqueue(p);
     }
     else if (c=='d') {
       Q.dequeue();
     } else if (c=='s') {
       Q.show();
     }
     else{
       tmp++;
     }
   }
}

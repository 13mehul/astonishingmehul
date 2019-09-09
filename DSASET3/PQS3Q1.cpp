#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class demo
{
  public:
    void func();

};

void demo :: func()
{
  for(int i = 1;i<=6;i++)
  {
    for(int j = 6;j>i;j--)
      printf("  ");

    for(int k = i-1 ;k>=0 ;k--)
      printf("%d ",k);

    for(int l = 1;l<i;l++)
      printf("%d ",l);

    printf("\n");
  }
}



int main()
{
  demo ob;
  ob.func();
}

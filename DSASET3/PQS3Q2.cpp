#include<iostream>
using namespace std;

class factorial
{
  int f,n;
  public:
    void fact();
    void result();

};

void factorial :: fact()
{
  f = 1;
  cin>>n;
  for(int i = 1;i<=n;i++)
  f *= i;
}

void factorial :: result()
{
  cout<<f<<"\n";
}



int main()
{
  factorial ob;
  ob.fact();
  ob.result();
}

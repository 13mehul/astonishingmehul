#include<iostream>
using namespace std;

class factorial
{
  int n,fact;
public:
  factorial(int x)
  {
    n = x;
    fact = 1;
  }
  factorial(const factorial &ptr)
  {
    n = ptr.n;
    fact = ptr.fact;
    for(int i = 1;i<=n;i++)
    {
      fact *= i;
    }
  }
  void display()
  {
    cout<<"Factorial = "<<fact<<"\n";

  }
  ~factorial()
  {
    // cout<<"Factorial = "<<fact<<"\n";
  }
};

int main()
{
  int num;
  cin>>num;
  factorial obj1(num);
  factorial obj2 = obj1;
  obj2.display();
}

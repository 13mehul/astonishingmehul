#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  printf("octal representation is %o\n",n);
  printf("hexadecimal representation is %X\n",n);

  printf("binary representation is ");

  while(n)
  {
    cout<<n%2;
    n /= 2;
  }
  cout<<"\n";

}

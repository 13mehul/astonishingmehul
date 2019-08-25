#include<iostream>
#include<math.h>
using namespace std;
void root(int *a,int *b, int *c)
{
  if(*a == 0)
  {
    printf("invalid\n");
    return;
  }
  int ans1 = (*b)*(*b) - 4*(*a)*(*c);
  double ans2 = sqrt(abs(ans1));

  if(ans1 > 0)
  {
    cout<<(double)(-(*b) + ans2)/(2*(*a))<<" \n"<<(double)(-(*b) - ans2)/(2*(*a))<<"\n";
  }
  else if(ans1 == 0)
  {
    cout<<(double)(-(*b) )/(2*(*a))<<"\n"<<(double)(-(*b) )/(2*(*a))<<"\n";

  }
  else
  {
    cout<<-(double)(*b)/(2*(*a))<<" + i"<<ans2<<" \n"<<-(double)(*b) / (2*(*a))<<" - i"<<ans2<<"\n";
  }

}

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  // int *p = &a,*q = &b,r = &c;
  root(&a,&b,&c);
}

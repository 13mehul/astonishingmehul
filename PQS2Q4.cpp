#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int freq[10] = {0};
  while(n)
  {
    int x = n%10;
    freq[x]++;
     n /= 10;
  }
  for(int i = 0;i<10;i++)
  cout<<"frequecy of "<<i<<" is = "<<freq[i]<<" \n";
  cout<<"\n";
}

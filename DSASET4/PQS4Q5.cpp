#include<bits/stdc++.h>
using namespace std;

int main()
{
  stack<char>s;
  string a;
  cin>>a;
  for(int i = 0;i<a.length();i++)
  {
    s.push(a[i]);
  }
  string b ="";
  int i = s.size()-1;
  while(!s.empty())
  {
    char c = s.top();
    b += c;
    s.pop();
  }
  cout<<b<<"\n";
}

#include<bits/stdc++.h>
using namespace std;

stack<int> sorting(stack<int>s)
{
  // cout<<"hey1\n";
  stack<int>tmp;
  while(!s.empty())
  {
    int x = s.top();
    s.pop();

    while(!tmp.empty() and tmp.top() < x)
    s.push(tmp.top()) , tmp.pop();

    tmp.push(x);

  }
  return tmp;

}

void sort(int arr[], int n)
{
  // cout<<"hey2\n";
  stack<int>s;

  for(int i = 0;i<n;i++)
  s.push(arr[i]);

  stack<int>tmp = sorting(s);
  for(int i = 0;i<n;i++)
  {
    arr[i] = tmp.top();
    tmp.pop();
  }
}


int main()
{
  int arr[] = {5,10,15,45,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr,n);

  for(int i = 0;i<n;i++)
  cout<<arr[i]<<" ";
  cout<<"\n";
}

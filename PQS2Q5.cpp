// 5. Find the number of words in the sentences entered by user.

#include<bits/stdc++.h>
// #include <iostream>
#include<math.h>
using namespace std;
int main()
{
  string s;
  getline(cin , s);
  // scanf("%[^\n]%*c", s);

  int cnt = 0;
  for(int i = 0;s[i] != '\0'; i++)
  {
    if(s[i] == ' ')
    cnt++;
  }

  cout<<cnt+1<<"\n";
}

#include<iostream>
#include<algorithm>
using namespace std;

struct student
{
  string name;
  int rollno;
  int mark;
};

bool compare(student a, student b)
{
  if(a.name != b.name)
  return a.name < b.name;

  else
  return a.mark > b.mark;

}


int main()
{
  student arr[10];

  for(int i = 0;i<10;i++)
  {
    cin>>arr[i].name;
    // getline(cin , arr[i].name);
    cin>>arr[i].rollno;
    cin>>arr[i].mark;
  }

  sort(arr,arr+10 , compare);

  for(int i = 0;i<10;i++)
  {
    cout<<arr[i].name<<" "<<arr[i].rollno<<" "<<arr[i].mark<<"\n";
  }
}

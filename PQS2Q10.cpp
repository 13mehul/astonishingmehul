#include<iostream>
#include<algorithm>
using namespace std;

struct dob
{
  int date;
  int month;
  int year;

};

struct student
{
  string name;
  int rollno;
  int mark;
  char grade;

  struct dob add;
};



bool compare(student a, student b)
{
  if(a.name != b.name)
  return a.name < b.name;

  else
  return a.mark > b.mark;

}

void printtoppers(struct student arr[])
{
  for(int i = 0;i<5;i++)
  {
    if(arr[i].grade == 'S')
    cout<<arr[i].name<<"\n";
  }
}


int main()
{
  student arr[5];

  for(int i = 0;i<5;i++)
  {
    cin>>arr[i].name;
    // getline(cin , arr[i].name);
    cin>>arr[i].rollno;
    cin>>arr[i].mark;
    cin>>arr[i].add.date;
    cin>>arr[i].add.month;
    cin>>arr[i].add.year;
  }

  sort(arr,arr+5 , compare);

  cout<<"\n\nHere are the Results :)\n\n";

  for(int i = 0;i<5;i++)
  {
    cout<<arr[i].name<<" "<<arr[i].rollno<<" "<<arr[i].mark<<" "<<arr[i].add.date<<" "<<arr[i].add.month<<" "<<arr[i].add.year<<"\n";
  }

  for(int i = 0;i<5;i++)
  {
    int n = arr[i].mark;
    n /= 10 ;
    switch(n)
     {
       case 9:
              arr[i].grade = 'S';break;
       case 8:
              arr[i].grade = 'A';break;
       case 7:
              arr[i].grade = 'B';break;
       case 6:
               arr[i].grade = 'C';break;
       case 5:
              arr[i].grade = 'D';break;
       case 4:
              arr[i].grade = 'E';break;
       default:
              arr[i].grade = 'F';break;
      }
  }

  printtoppers(arr);
}

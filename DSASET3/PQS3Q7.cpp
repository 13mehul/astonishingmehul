#include<iostream>
using namespace std;

struct student
{
private :
  int a,b,c;
public:
  void read()
  {
    cout<<"Enter three numberes :)\n";
    cin>>a>>b>>c;

  }
  void sum()
  {
    int sum = a+b+c;
    cout<<"sum = "<<sum<<"\n";
  }
  void average()
  {
    float avg = float(a+b+c)/3;
    cout<<"average = "<<avg<<"\n";
  }
};

int main()
{
  student *ptr , s;
  ptr = &s;
  ptr->read();ptr->sum();ptr->average();
}

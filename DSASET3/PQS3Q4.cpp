#include<iostream>
using namespace std;

class demo
{
  public :
  string name;
  int date,month,year;

  void read_name()
  {
    cout<<"Enter name\n";
    cin>>name;
  }

  void check()
  {
    int tmp = 2019;
    int ans = 0;
    ans += 2019-year;
    if(month > 9)
    ans += 1;
    if(ans >= 32)
    cout<<"Eligible\n";
    else
    cout<<"Not Eligible\n";
  }

  void print()
  {
    cout<<name<<" "<<date<<"-"<<month<<"-"<<year<<"\n";
  }
};
class dob : public demo
{
  public :
  void read_dob1()
  {
    cout<<"Enter dob\n";
    cin>>date>>month>>year;
  }
};


int main()
{
  dob obj;
  obj.read_name();
  obj.read_dob1();
  obj.check();
  obj.print();
}

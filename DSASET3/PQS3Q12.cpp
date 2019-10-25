#include<iostream>
#include<algorithm>
using namespace std;

class Detail
{
  public :
  string name;
  int roll_no;
};

class Birthday
{
  public :
  int date, month, year;
};

class Age : public Birthday
{
  public :
  int age = 0;
  void Calculate()
  {
    age = 2019 - year;
    if(month > 9)
    age++;
    cout << "Age is = "<<age<<"\n";
  }
};

class Student : public Detail , public Birthday
{
  public :
  void Read()
  {
    cout << "Enter the name \n";
    cin >> name;
    cout << "Enter roll no. \n";
    cin >> roll_no;
    cout << "Enter dob\n";
    cin >> date >> month >> year;
  }

  void Print()
  {
    cout << "Name : " << name << "\n";
    cout << "rollno. :" << roll_no << "\n";
    cout << "DOB : "<< date <<"-" << month << "-" << year <<"\n";
  }
};
bool Compare(Student const &ptr1 , Student const &ptr2)
{
  return ptr1.roll_no<ptr2.roll_no;
}

int main()
{
  Student obj1[5];
  for(int i = 0; i < 5; i++)
  obj1[i].Read();

  cout << "Enter case\n";
  int case1;
  cin >> case1;

  switch(case1)
  {
    case 1 : cout << "Sorting \n";
              sort( obj1, obj1 + 5, Compare);

              for(int i = 0; i < 5; i++)
              obj1[i].Print();
              break;

    case 2 :   cout << "FInd roll no :\n";
                int x;
                cin >> x;
                for(int i = 0; i < 5; i++)
                {
                  if(obj1[i].roll_no == x)
                  {
                    cout << "roll no = " << obj1[i].roll_no << "\n";
                    cout << "name = " << obj1[i].name << "\n";
                    cout << "DOB = " << obj1[i].date << "-" << obj1[i].month << "-" << obj1[i].year << "\n";
                  }
                }
                break;

  }

}

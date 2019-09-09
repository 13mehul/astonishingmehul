#include<iostream>
using namespace std;
class FourSide
{
  public :
  int length , breadth;
};

class Square : public FourSide
{
  public :
  void Read()
  {
    cout<<"Enter length of square\n";
    cin>>length;
  }
  void Area()
  {
    cout<<"Area of square is = "<<length*length<<"\n";
  }
};
class Rectangle : public FourSide
{
  public :

  void Read()
  {
    cout<<"Enter length and breadth of rectangle\n";
    cin>>length>>breadth;
  }
  void Area()
  {
    cout<<"Area of rectangle is = "<<length*breadth<<"\n";
  }
};

class Parallelogram : public FourSide
{
  public :

  void Read()
  {
    cout<<"Enter base and height of parallelogram\n";
    cin>>length>>breadth;
  }
  void Area()
  {
    cout<<"Area of Parallelogram is = "<<length*breadth<<"\n";
  }
};

class Triangle : public Rectangle
{
  public :

  void Read()
  {
    cout<<"Enter base and height of Triangle\n";
    cin>>length>>breadth;
  }
  void Area()
  {
    cout<<"Area of Triangle is = "<<float(length * breadth)/2<<"\n";
  }
};

int main()
{
  Square obj1;
  obj1.Read();
  obj1.Area();

  Rectangle obj2;
  obj2.Read();
  obj2.Area();

  Parallelogram obj3;
  obj3.Read();
  obj3.Area();

  Triangle obj4;
  obj4.Read();
  obj4.Area();
}

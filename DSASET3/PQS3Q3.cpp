#include<iostream>
#include<algorithm>
using namespace std;

class demo
{
  public:
  void getdata(int a[],int b[],int c[], int n)
  {
    for(int i = 0;i<n;i++)
    {
      cin>>a[i];
      b[i]=a[i];
    }
    reverse(b,b+n);
    for(int i = 0;i<n;i++)
    {
      c[i] = a[i] + b[i];
    }
  }

  void print(int a[],int b[],int c[] ,int n)
  {
    cout<<"Array A is \n";
    for(int i = 0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<"\nArray B is \n";
    for(int i = 0;i<n;i++)
    {
      cout<<b[i]<<" ";
    }
    cout<<"\nArray C is \n";
    for(int i = 0;i<n;i++)
    {
      cout<<c[i]<<" ";
    }
  }
  void minmax(int a[],int b[],int c[],int n)
  {
    sort(c,c+n);
    cout<<"min = "<<c[0]<<" max = "<<c[n-1]<<"\n";
  }
};




int main()
{
  int n;
  cout<<"Enter value of n :)\n";
  cin>>n;
  cout<<"n = "<<n<<"\n";
  int a[n],b[n],c[n];
  demo obj;
  obj.getdata(a,b,c,n);
  obj.print(a,b,c,n);
  obj.minmax(a,b,c,n);

}
// void demo :: getdata()
// {
//   // cin>>n;
//   int a[n],b[n],c[n];
//   for(int i = 0;i<n;i++)
//   {
//     cin>>a[i];
//     b[i]=a[i];
//   }
//   reverse(b,b+n);
// }

// void demo :: sum()
// {
//   for(int i = 0;i<n;i++)
//   {
//     c[i] = a[i] + b[i];
//   }
// }

// void demo :: print()
// {
//   cout<<"Array A is \n";
//   for(int i = 0;i<n;i++)
//   {
//     cout<<a[i];
//   }
//   cout<<"\nArray B is \n";
//   for(int i = 0;i<n;i++)
//   {
//     cout<<b[i];
//   }
//   cout<<"\nArray C is \n";
//   for(int i = 0;i<n;i++)
//   {
//     cout<<c[i];
//   }
// }

// void demo :: minmax()
// {
//   sort(c,c+n);
//   cout<<"min = "<<c[0]<<" max = "<<c[n-1]<<"\n";
// }

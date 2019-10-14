#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n)
{
    int i,j,_min;
    for(i=0;i<n-1;i++)
    {
        _min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[_min])
                _min=j;
        }
        swap(arr[_min],arr[i]);
    }
}


int main()
{

   int a[10]={5,8,1,3,0,10,4,9,6,7};
   SelectionSort(a,10);
   for(int i=0;i<10;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<"\n";

}

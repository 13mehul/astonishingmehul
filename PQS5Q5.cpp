#include<iostream>
using namespace std;

//MAX HEAP !!!!!!
//
// void heapify(int arr[], int n, int i)
// {
//   int parent = (i-1)/2;
//   if(arr[parent] > 0)
//   {
//     if(arr[i] > arr[parent])
//     {
//       swap(arr[i], arr[parent]);
//       heapify(arr,n,parent);
//     }
//   }
// }

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void deleteRoot(int arr[], int& n)
{
    int lastElement = arr[n - 1];

    arr[0] = lastElement;
    n = n - 1;
    heapify(arr, n, 0);
}

void insertNode(int arr[], int &n, int key)
{
  n += 1;
  arr[n-1] = key;

   for(int i=(n-1)/2;i>=0;i--)
  heapify(arr,n,i);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
  int arr[99999] = {10,5,3,2,4};
  int n = 5;
  printArray(arr,n);


  cout<<"Enter the number to be inserted\n";
  int key;
  cin>>key;
  insertNode(arr,n,key);
  printArray(arr,n);

  // cout<<"Enter the number to be deleted\n";
  // int key;
  // cin>>key;
  cout<<"Deletion\n";
  deleteRoot(arr,n);

  printArray(arr,n);

}

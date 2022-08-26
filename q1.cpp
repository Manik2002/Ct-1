//Name - Manik Khurana
//Roll No - 2010990445
// Set No - 03
// Q1

#include <iostream>
using namespace std;
 

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 

void rearrangeArray(int arr[], int n)
{
    
    for (int i = 1; i < n; i += 2)
    {
        
        if (arr[i - 1] > arr[i]) {
            swap(arr, i - 1, i);
        }
 
        
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr, i + 1, i);
        }
    }
}
 
int main(void)
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rearrangeArray(arr, n);
 
    cout<<"Output is = ";
    for (int i = 0; i < n; i++) {
        cout<<" "<<arr[i];
    }
 
    return 0;
}
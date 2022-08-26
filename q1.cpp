//name-anamika
//roll no.-2010990955
//set no-3
//question no.-1
#include <iostream>
using namespace std;
 
// Utility function to swap elements `arr[i]` and `arr[j]` in an array
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
// Function to rearrange the array such that every second element
// of the array is greater than its left and right elements
void rearrangeArray(int arr[], int n)
{
    // start from the second element and increment index
    // by 2 for each iteration of the loop
    for (int i = 1; i < n; i += 2)
    {
        // if the previous element is greater than the current element,
        // swap the elements
        if (arr[i - 1] > arr[i]) {
            swap(arr, i - 1, i);
        }
 
        // if the next element is greater than the current element,
        // swap the elements
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr, i + 1, i);
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
 
    rearrangeArray(arr, n);
 
    // print output array
    for (int i = 0; i < n; i++) {
        cout<< arr[i]<<" ";
    }
 
    return 0;
}

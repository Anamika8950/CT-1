//name-anamika
//roll no.-2010990955
//set no-
//question no.-

#include <iostream>
#include <algorithm>
using namespace std;

void findPair(int nums[], int n, int target)
{
   
    sort(nums, nums + n);
 
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        // sum found
        if (nums[low] + nums[high] == target)
        {
            cout << "Pair found (" << nums[low] << ", " << nums[high] << ")\n";
            return;
        }
 
        (nums[low] + nums[high] < target)? low++: high--;
    }
 
    // we reach here if the pair is not found
    cout << "Pair not found";
}
 
int main()
{
    int nums[] = { 8,7,2,5,3,1 };
    int target = 12;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findPair(nums, n, target);
 
    return 0;
}

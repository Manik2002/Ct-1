//Name - Manik Khurana
//Roll No - 2010990445
// Set No - 03
// Q2

#include <iostream>
using namespace std;

void findPair(int nums[], int n, int target)
{
    // consider each element except the last
    for (int i = 0; i < n - 1; i++)
    {
        // start from the i'th element until the last element
        for (int j = i + 1; j < n; j++)
        {
            // if the desired sum is found, print it
            if (nums[i] + nums[j] == target)
            {
                cout<<"Pair found "<<nums[i]<<","<<nums[j];
            }
        }
    }
 
    // we reach here if the pair is not found
    cout<<"Pair not found";
}
 
int main(void)
{
    int n;
    int nums[n];
    cin>>n;
    int target;
    cin>>target;
 
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
 
    findPair(nums, n, target);
 
    return 0;
}
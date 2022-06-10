// Subarray with 0 sum 
// Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

// Example:
// Input: 5
// 4 2 -3 1 6
// Output: Yes
// Explanation : 2, -3, 1 is the subarray with sum 0.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[]={4, 2, -3, 1, 6}; 
    int n=5;
    unordered_set<int> sumSet;
 
    // Traverse through array and store prefix sums
    int sum = 0;
    bool ans=false;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
     
        // If prefix sum is 0 or it is already present
        if (sum == 0 || sumSet.find(sum) != sumSet.end()){
            ans= true;
        }
        sumSet.insert(sum);
    }
    cout<<ans;
    return 0;
}
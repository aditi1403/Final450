// Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
// Note: Return -1 if you can't reach the end of the array.

// Example:
// Input:
// N = 11 
// arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
// Output: 3 
// Explanation: 
// First jump from 1st element to 2nd 
// element with value 3. Now, from here 
// we jump to 5th element with value 9, 
// and from here we will jump to last.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}; 
    int n=11;

    if (n <= 1)
    cout<<"0";
 
    if (arr[0] == 0)
        cout<<"-1";
     
    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;
     
    int i = 1;
    for (i = 1; i < n; i++) {
        if (i == n - 1)
            cout<< jump;
    
        maxReach = max(maxReach, i + arr[i]);
        step--;
        if (step == 0) {
            jump++;
            if (i >= maxReach)
                cout<<"-1";
            step = maxReach - i;
        }
    }
     
    return -1;
}
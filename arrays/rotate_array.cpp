// Given an array, rotate the array by one position in clock-wise direction.

// Example:
// Input:
// N = 8
// A[] = {9, 8, 7, 6, 4, 2, 1, 3}
// Output:
// 3 9 8 7 6 4 2 1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={9, 8, 7, 6, 4, 2, 1, 3}; 
    int n=8;
    int low = 0, high = n-1; // i and j pointing to first and last element respectively
    while(low != high){
        swap(arr[low], arr[high]);
        low++;
    }
    cout<<"Rotated Array: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// ROTATE ARRAY
// Given an array, rotate the array to the right by k steps, where k is non-negative.
// Example:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

/* Pending to be Solved LeetCode*/ 
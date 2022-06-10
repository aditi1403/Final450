//MAXIMUM SUBARRAY

// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.
// Example:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int sum=0;
    int maxSum=INT_MIN;
    for(auto it:nums){
        sum += it;
        maxSum=max(maxSum, sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<"Max Sum: \n"<<maxSum<<endl;
    return 0;
}
// Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

// Example:
// Input: nums = [3,1,3,4,2]
// Output: 3

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> nums= {3,1,3,4,2};
    int slow=nums[0];
    int fast=nums[0];
        
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    
    fast=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    cout<<"The Duplicate No. is: \n"<<slow;

    return 0;
}

// Brute force
// sort the array then a[i]=a[i+1] loop
// Time Complexity: O(Nlogn)
// Space Complexity: O(1)

// Hash Table
// check the duplicates in hash table easily
// Time Complexity: O(N)
// Space Complexity: O(N)

// Linked List
// Cycle Linked List - Tortoise method
// Time Complexity: O(N)
// Space Complexity: O(1)
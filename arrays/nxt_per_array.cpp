// Next Permutation

// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are considered permutations of arr: [1,2,3], [1,3,2], [3,1,2], [2,3,1].

// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.
// The replacement must be in place and use only constant extra memory.

// Example:
// Input: nums = [1,2,3]
// Output: [1,3,2]

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> nums={1,2,3};
    int idx1,idx2;
    int n=nums.size();
        
    for(idx1=n-2;idx1>=0;idx1--){
        if(nums[idx1]<nums[idx1+1]){
            break;
        }
    }
    if(idx1<0){
        reverse(nums.begin(),nums.end());
    }
    else{
        for(idx2=n-1;idx2>idx1;idx2--){
            if(nums[idx2]>nums[idx1]){
                break;
            }
        }
        swap(nums[idx1],nums[idx2]);
        reverse(nums.begin()+idx1+1,nums.end());
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
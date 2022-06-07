// Merge Sorted Array
// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// Example:
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;
// int main()
// {
//     vector<int> nums1={1,2,3,0,0,0}; 
//     int m=3; 
//     vector<int> nums2={2,5,6}; 
//     int n=3;
//     int i=m-1,j=n-1,k=m+n-1;
//     while(i>=0 && j>=0)
//     {
//         if(nums1[i]>nums2[j])
//         {
//             nums1[k]=nums1[i];
//             k--;
//             i--;
//         }
//         else
//         {
//             nums1[k]=nums2[j];
//             k--;
//             j--;
//         }
//     }
//     while(j>=0)
//     {
//         nums1[k]=nums2[j];
//         k--;
//         j--;
//     }   

//     cout<<"Merged Array: \n";
//     for(int i=0; i<nums1.size(); i++){
//         cout<<nums1[i]<<" ";
//     }

//     return 0;
// }

// Merge Without Extra Space
// Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.
// Example:
// Input:
// N = 4, M = 5
// arr1[] = {1, 3, 5, 7}
// arr2[] = {0, 2, 6, 8, 9}
// Output: 0 1 2 3 5 6 7 8 9
// Explanation: Since you can't use any 
// extra space, modify the given arrays
// to form 
// arr1[] = {0, 1, 2, 3}
// arr2[] = {5, 6, 7, 8, 9}

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr1[]={1, 3, 5, 7}; 
    int arr2[]={0, 2, 6, 8, 9}; 
    int n=4; 
    int m=5;
    int i=0;
    // while loop till last element of array 1(sorted) is greater than
      // first element of array 2(sorted)
    while(arr1[n-1]>arr2[0])
    {
        if(arr1[i]>arr2[0])
        {
            // swap arr1[i] with first element
              // of arr2 and sorting the updated
            // arr2(arr1 is already sorted)
            swap(arr1[i],arr2[0]);
            sort(arr2,arr2+m);
        }
        i++;
    }
    cout<<"Merged Array: \n";
    for(int i=0;i<n; i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
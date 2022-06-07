// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

// Examples : 
// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

// Note: Order of elements is not important here.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int nums[] = {1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1};
    int low=0;
    int n=sizeof(nums) / sizeof(nums[0]);
    int high=n-1;

    // Dutch National Flag Algorithm 
    while(low<=high){
        if(nums[low]<0){
            low++;
        }
        else if(nums[high]>0){
            high--;
        }
        else{
            swap(nums[low],nums[high]);
        }
    }
    
    // print array
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}

// 1. Dutch National Flag Algorithm O(N)
// 2. Two Pointer Approach O(N)

// Two Pointer Algo: 
//   // Loop to iterate over the
//   // array from left to the right
//   while (left<=right)
//   {
//     // Condition to check if the left
//     // and the right elements are
//     // negative
//     if (arr[left] < 0 && arr[right] < 0)
//       left+=1;
     
//     // Condition to check if the left
//     // pointer element is positive and
//     // the right pointer element is negative
//     else if (arr[left]>0 && arr[right]<0)
//     {
//       int temp=arr[left];
//       arr[left]=arr[right];
//       arr[right]=temp;
//       left+=1;
//       right-=1;
//     }
     
//     // Condition to check if both the
//     // elements are positive
//     else if (arr[left]>0 && arr[right] >0)
//       right-=1;
//     else{
//       left += 1;
//       right -= 1;
//     }
//   }
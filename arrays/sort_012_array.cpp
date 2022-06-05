// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int nums[] = {2,0,2,1,1,0};
    int low=0;
    int mid=0;
    int n=sizeof(nums) / sizeof(nums[0]);
    int high=n-1;
    
    // Dutch national flag algorithm 

    while(mid<=high){
        switch(nums[mid]){
            case 0:
            cout<<"case: 0"<<endl;
                swap(nums[low],nums[mid]);
                low++;
                mid++;
                break;
                
            case 1:
            cout<<"case: 1"<<endl;
                mid++;
                break;
                
            case 2:
            cout<<"case: 2"<<endl;
                swap(nums[mid],nums[high]);
                high--;
                break;
            }
        }

    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

// Dutch national flag algorithm O(N)
// sort(nums.begin(),nums.end()); O(NlogN)
// count sort--count occurence of each number then print theem in asscending order O(2N)
// Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function

    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int k, n = sizeof(arr) / sizeof(arr[0]);
    int l=arr[0]; int r=arr[n-1];
    cout<<"k: ";
    cin>>k;
    
    // sort(arr, arr+n);
    // cout<<arr[k-1];

    priority_queue<int> maxHeap;
    for(int i=l;i<=r;i++){
        maxHeap.push(arr[i]);
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}
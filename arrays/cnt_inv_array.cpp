// Count Inversions
// Given an array of integers. Find the Inversion Count in the array. 

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

// Example:
// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 
// has three inversions (2, 1), (4, 1), (4, 3).

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[]={2, 4, 1, 3, 5};
    int N=5;
    int count=0;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                for(int k=0;k<N;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
                count++;
            }
        }
    }
    cout<<"\nNo. of Inversions: "<<count;
    return 0;
}
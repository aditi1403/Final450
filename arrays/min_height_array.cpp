// Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
// Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.
// Note: It is compulsory to increase or decrease by K to each tower.
// Example:
// Input:
// K = 3, N = 5
// Arr[] = {3, 9, 12, 16, 20}
// Output:
// 11
// Explanation:
// The array can be modified as
// {6, 12, 9, 13, 17}. The difference between 
// the largest and the smallest is 17-6 = 11.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[]={3, 9, 12, 16, 20}; 
    int n=5; 
    int k=3;
    sort(arr,arr+n);

    int ans=arr[n-1]-arr[0];

    int smallest=arr[0]+k;
    int largest=arr[n-1]-k;
    int mi,ma;
        
    for(int i=0;i<n-1;i++){
        mi=min(smallest,arr[i+1]-k);
        ma=max(largest,arr[i]+k);
        if(mi<0) continue;
        ans= min(ans,ma-mi);
    }

    cout<<"Modiefied Array: \n";
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Minimum Difference: \n"<<ans;

    return 0;
}
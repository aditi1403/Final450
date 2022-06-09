// Count pairs with given sum
// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
// Example:
// Input:
// N = 4, K = 6
// arr[] = {1, 5, 7, 1}
// Output: 2
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.


// Brute Force
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[]={1, 5, 7, 1};
    int n=4; 
    int k=6;
    int sol=0;
    cout<<"Pairs: \n";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" & "<<j<<endl;
                sol++;
            }
        }
    }
    cout<<"No. of pairs: "<<sol;
    return 0;
}
// Time COmplexity: O(N^2)
// Space COmplexity: O(1)

// Using Map
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[]={1, 5, 7, 1};
    int n=4; 
    int k=6;
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end()) {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    }
    cout<<"No. of pairs: "<<count;
    return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(N)
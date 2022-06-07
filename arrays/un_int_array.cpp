//UNION OF TWO ARRAYS 

// Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
// Example: 
// Input:
// 6 2 
// 85 25 1 32 54 6
// 85 2 
// Output: 
// 7
// Explanation: 
// 85, 25, 1, 32, 54, 6, and
// 2 are the elements which comes in the
// union set of both arrays. So count is 7.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a[]={85, 25, 1, 32, 54, 6,}; 
    int n=6; 
    int b[]={85, 2}; 
    int m=2;
    map<int, int> mp;
   
    // Inserting array elements in mp
    for (int i = 0; i < n; i++)
        mp.insert({ a[i], i });
   
    for (int i = 0; i < m; i++)
        mp.insert({ b[i], i });
    cout << "The union set of both arrays is :" << endl;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first
             << " "; // mp will contain only distinct
                     // elements from array a and b
    cout<<"\nsize of union set: "<<mp.size();
    return 0;
}

// INTERSECTION OF TWO ARRAYS

// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
// Example:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> nums1={4,9,5};
    vector<int> nums2={9,4,9,8,4};
    set<int>s1,s2;
    vector<int>out;
    for(auto val:nums1)
        s1.insert(val);
    for(auto val:nums2)
        s2.insert(val);
        
    //find if we can get the value from first set in second set
    for(auto val:s1)
    {
       if(s2.find(val)!=s2.end()) //if found push it into output vector
           out.push_back(val);
    }
    cout<<"Intersection of the two arrays is: \n";
    for(int i=0; i<out.size(); i++){
        cout<<out[i]<<" ";
    }
    return 0;
}
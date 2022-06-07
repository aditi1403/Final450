// Merge Intervals
// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

// Example:
// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main()
{
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans;
    if(intervals.size()==0){
        return ans;
    }
    sort(intervals.begin(),intervals.end());
    vector<int> tempInter=intervals[0];
        
    for(auto it:intervals){
        if(it[0]<=tempInter[1]){
            tempInter[1]=max(tempInter[1],it[1]);
        }
        else{
            ans.push_back(tempInter);
            tempInter=it;
        }
    }
    ans.push_back(tempInter);
    cout<< ans;
    return 0;
}
// Factorials of large numbers
// Given an integer N, find its factorial.
// Example:
// Input: N = 5
// Output: 120
// Explanation : 5! = 1*2*3*4*5 = 120

// Input: N = 10
// Output: 3628800
// Explanation :
// 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

// METHOD 1 (but doesn't work for large integers...)

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int N=50;
    int fact=1;
    vector<int> ans;
    for(int i=1;i<=N;i++){
        fact*=i;
    }
    while(fact>0){
        ans.push_back(fact%10);
        fact/=10;
    }
    reverse(ans.begin(), ans.end());
    int sz=ans.size();
    for(int j=0;j<sz;j++){
        cout<<ans[j];
    }
    return 0;
    //not proper outputs
}

// METHOD 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int N=50;
    vector<int> v;
    if(N==0){
        for(int j=0;j<v.size();j++){
            cout<<v[j];
        }
    }
    v.push_back(1);
    int carry=0;
    int j,prod;
    for(int i=2;i<=N;i++){
        for(j=0;j<v.size();j++){
            prod=v[j]*i+carry;
            v[j]=prod%10;
            carry=prod/10;
        }
        while(carry>0){
            v.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(v.begin(),v.end());
    for(int j=0;j<v.size();j++){
        cout<<v[j];
    }
    return 0;
}
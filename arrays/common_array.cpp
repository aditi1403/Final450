// Common elements 
// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// Note: can you take care of the duplicates without using any additional Data Structure?

// Example:
// Input:
// n1 = 6; A = {1, 5, 10, 20, 40, 80}
// n2 = 5; B = {6, 7, 20, 80, 100}
// n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
// Output: 20 80
// Explanation: 20 and 80 are the only
// common elements in A, B and C.

// ***METHOD 1***

#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main()
{
    vector<int> A{1, 5, 10, 20, 40, 80};
    vector<int> B{6, 7, 20, 80, 100};
    vector<int> C{3, 4, 15, 20, 30, 70, 80, 120};
    int n1=6;
    int n2=5;
    int n3=8;
    vector<int> cmn;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(A[i]==B[j]){
                for(int k=0;k<n3;k++){
                    if(B[j]==C[k]){
                        cmn.push_back(A[i]);
                    }
                }
            }
        }
    }
    cout<<"Common ELements: ";
    for(int i=0; i<cmn.size();i++){
        cout<<cmn[i]<<" ";
    }
    return 0;
}

// ***METHOD 2***

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> A{1, 5, 10, 20, 40, 80};
    vector<int> B{6, 7, 20, 80, 100};
    vector<int> C{3, 4, 15, 20, 30, 70, 80, 120};
    int n1=6;
    int n2=5;
    int n3=8;

    // Initialize starting indexes for ar1[], ar2[] and ar3[]
    int i = 0, j = 0, k = 0;
    vector<int> cmn;
        
    // Iterate through three arrays while all arrays have elements
    while (i < n1 && j < n2 && k < n3) {
        // If x = y and y = z, print any of them and move ahead in all arrays
        if (A[i] == B[j] && B[j] == C[k]) {
            cout << A[i] << " ";
            // cmn.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        
        // x < y
        else if (A[i] < B[j])
            i++;
    
        // y < z
        else if (B[j] < C[k])
            j++;
        
        // We reach here when x > y and z < y, i.e., z is smallest
        else
            k++;
                    
        }
        // vector<int> cmn;
        // cmn.push_back(A[i]);
        return 0;
}

// ***METHOD 3***

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> A{1, 5, 10, 20, 40, 80};
    vector<int> B{6, 7, 20, 80, 100};
    vector<int> C{3, 4, 15, 20, 30, 70, 80, 120};
    int n1=6;
    int n2=5;
    int n3=8;

    // Initialize starting indexes
    // for ar1[], ar2[] and ar3[]
    int i = 0, j = 0, k = 0;
    vector<int> cmn;
        
    // Declare three variables prev1, prev2, prev3 to track previous element
    int prev1, prev2, prev3;
        
    // Initialize prev1, prev2, prev3 with INT_MIN
    prev1 = prev2 = prev3 = INT_MIN;
        
    // Iterate through three arrays while all arrays have elements
    while (i < n1 && j < n2 && k < n3) {
        
        // If ar1[i] = prev1 and i < n1, keep incrementing i
        while (A[i] == prev1 && i < n1)
            i++;
        
        // If ar2[j] = prev2 and j < n2, keep incrementing j
        while (B[j] == prev2 && j < n2)
            j++;
        
        // If ar3[k] = prev3 and k < n3, keep incrementing k
        while (C[k] == prev3 && k < n3)
            k++;
        
        // If x = y and y = z, print= any of them, update prev1 prev2, prev3 and move ahead in each array
        if (A[i] == B[j] && B[j] == C[k]) {
            cout << A[i] << " ";
            // cmn.push_back(A[i]);
            prev1 = A[i];
            prev2 = B[j];
            prev3 = C[k];
            i++;
            j++;
            k++;
        }
        
        // If x < y, update prev1 and increment i
        else if (A[i] < B[j]) {
            prev1 = A[i];
            i++;
        }
    
        // If y < z, update prev2 and increment j
        else if (B[j] < C[k]) {
            prev2 = B[j];
            j++;
        }
        
        // We reach here when x > y and z < y, i.e., z is smallest update prev3 and imcrement k
        else {
            prev3 = C[k];
            k++;
        }
    }
    // return cmn;
    return 0;
}

// ***METHOD 4***

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> A{1, 5, 10, 20, 40, 80};
    vector<int> B{6, 7, 20, 80, 100};
    vector<int> C{3, 4, 15, 20, 30, 70, 80, 120};
    int n1=6;
    int n2=5;
    int n3=8;

    // three sets to maintain frequency of elements
    unordered_set<int> uset, uset2, uset3;
    for (int i = 0; i < n1; i++) {
        uset.insert(A[i]);
    }
    for (int i = 0; i < n2; i++) {
        uset2.insert(B[i]);
    }
    // checking if elements of 3rd array are present in
    // first 2 sets
    for (int i = 0; i < n3; i++) {
        if (uset.find(C[i]) != uset.end()
            && uset2.find(C[i]) != uset.end()) {
            // using a 3rd set to prevent duplicates
            if (uset3.find(C[i]) == uset3.end())
                cout << C[i] << " ";
            uset3.insert(C[i]);
        }
    }
    return 0;
}
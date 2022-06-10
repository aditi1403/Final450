// Maximum Product Subarray 
// Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

// Example:
// Input:
// N = 5
// Arr[] = {6, -3, -10, 0, 2}
// Output: 180
// Explanation: Subarray with maximum product
// is [6, -3, -10] which gives product as 180.

// METHOD 1

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> arr{2, 3, 4, 5, -1, 0}; 
    int n = 6;
    int result = arr[0];
    for(int i = 0; i<n; i++){
        int mul = arr[i];
        // Traversing in current subarray
        for(int j = i+1;j<n;j++){
            // updaing result every time
            //  to keep an eye over the maximum product
            result = max(result, mul);
            mul *= arr[j];
        }
        // updating the result for (n-1)th index.
        result = max(result, mul);
    }
    cout<<result;
    return 0;
}

// Time COmplexity: O(N^2)
// Space COmplexity: O(1)

// METHOD 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
   vector<int> arr{-1, -1}; 
   int n = 2;

    // max positive product ending at the current position
    int max_ending_here = 1;
 
    // min negative product ending at the current position
    int min_ending_here = 1;
 
    // Initialize overall max product
    int max_so_far = 0;
    int flag = 0;
    /* Traverse through the array. Following values are maintained after the i'th iteration:
    max_ending_here is always 1 or some positive product ending with arr[i] min_ending_here is always 1 or some negative product ending with arr[i] */
    for (int i = 0; i < n; i++)
    {
        /* If this element is positive, update max_ending_here. Update min_ending_here only if min_ending_here is negative */
        if (arr[i] > 0)
        {
            max_ending_here = max_ending_here * arr[i];
            min_ending_here
                = min(min_ending_here * arr[i], 1);
            flag = 1;
        }
 
        /* If this element is 0, then the maximum product cannot end here, make both max_ending_here and min_ending_here 0
        Assumption: Output is alway greater than or equal to 1. */
        else if (arr[i] == 0) {
            max_ending_here = 1;
            min_ending_here = 1;
        }
 
        /* If element is negative. This is tricky max_ending_here can either be 1 or positive. min_ending_here can either be 1 or negative. next max_ending_here will always be prev. min_ending_here * arr[i] ,next min_ending_here will be 1 if prev max_ending_here is 1, otherwise next min_ending_here will be prev max_ending_here * arr[i] */
        else {
            int temp = max_ending_here;
            max_ending_here
                = max(min_ending_here * arr[i], 1);
            min_ending_here = temp * arr[i];
        }
 
        // update max_so_far, if needed
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    if (flag == 0 && max_so_far == 0){
        return 0;
    }
    /* if all the array elements are negative */
    if (max_so_far == 1)
    {
       max_so_far = arr[0];
       for(int i = 1; i < n; i++)
         max_so_far = max(max_so_far, arr[i]);
    }
    cout<< max_so_far;
    return 0;
}

// Time COmplexity: O(N)
// Space COmplexity: O(1)

// METHOD 3

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> arr{-1, -1}; 
    int n = 2;

    // max positive product ending at the current position
    int max_ending_here = arr[0];
 
    // min negative product ending at the current position
    int min_ending_here = arr[0];
 
    // Initialize overall max product
    int max_so_far = arr[0];
    /* Traverse through the array. the maximum product subarray ending at an index will be the maximum of the element itself, the product of element and max product ending previously and the min product ending previously. */
    for (int i = 1; i < n; i++)
    {
        int temp = max({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        min_ending_here = min({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        max_ending_here = temp;
        max_so_far = max(max_so_far, max_ending_here);
    }
    cout<< max_so_far;
    return 0;
}

// Time COmplexity: O(N)
// Space COmplexity: O(1)
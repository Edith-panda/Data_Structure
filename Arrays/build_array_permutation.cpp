//Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

//A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).
#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            nums[i] += (n*(nums[nums[i]]%n));
            
        }
        for(int i=0;i<n;i++){
            nums[i] /=n;
        }
        return nums;
    }
};
// Given an array of integers nums, return the number of good pairs.

//A pair (i, j) is called good if nums[i] == nums[j] and i < j.
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        set<pair<int, int>>s;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
            s.insert(make_pair(nums[i], nums[j]));
                if(nums[i] ==nums[j]  && i<j ){
                    count++;
                }
        }
        }
        return count;
    }
};
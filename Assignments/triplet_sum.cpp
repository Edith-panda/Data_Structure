class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> output;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;i<n-1;i++){
            for(int k=j+1;k<n;k++){
                while(i!=j&& j!=k&&k!=i){
                    if(nums[i] +nums[j] +nums[k] ==0){
                        output.push_back({nums[i],nums[j],nums[k]});
                    }
                }
            
        }
        }
        }
        return output;
    }
};
// TLE aagya ...............

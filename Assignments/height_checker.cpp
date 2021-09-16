class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int count =0;
        int expected[100];
        for(int i=0;i<n;i++){
            expected[i]= heights[i];
        }                 
        sort(expected,expected+n);
        for(int i=0;i<n;i++){
            if(expected[i] != heights[i]){
            count++;       
        }
        }
                
       return count; 
    }
};
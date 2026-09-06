class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> runningSum;
        int n;
        n = nums.size();
        int t=0;
        for(int i = 0;i<n;i++){
            t+=nums[i];
            runningSum.push_back(t);
        }
        return runningSum;
        
    }
};
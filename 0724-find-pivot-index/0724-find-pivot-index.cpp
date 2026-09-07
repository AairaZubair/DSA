class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n;
        n = nums.size();
        int total=0;
        for(int i =0;i<n;i++){
            total+=nums[i];
        }
        int leftSum=0;
        for (int j=0;j<n;j++){
            int rightSum = total - leftSum -nums[j];
            if(leftSum==rightSum){
                return j;
            }
            leftSum +=nums[j];
        }
        return -1;
    }
};
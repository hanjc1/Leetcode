class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans(2);
        for(int i=0 ; i <  nums.size(); i++) {
            int diff = target - nums[i];
            for(int j=i+1;  j< nums.size();j++){
                if(diff == nums[j]){
                    ans[0] = i;
                    ans[1] = j;
                
                }    
            }
        }
        return ans;
    }
   
};

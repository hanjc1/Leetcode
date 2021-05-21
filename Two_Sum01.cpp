class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans(2);
        map<int, int> ansMap;
        
        for(int i=0; i< nums.size(); i++){
            ansMap[nums[i]] = i; 
        }
        
        for(int i=0; i < nums.size(); i++){
             int diff = target - nums[i];
            if(ansMap[diff] && ansMap[diff] != i){
                ans[0] =  i;
                ans[1] =  ansMap[diff];
            }
        }
         return ans;   
    }
   
};


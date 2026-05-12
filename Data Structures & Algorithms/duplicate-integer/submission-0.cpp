class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        // [1,2,3,4]
        
        bool result = false; 
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }

        return false;
        
    }
};
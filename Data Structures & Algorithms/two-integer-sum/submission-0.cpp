class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complement;
    
        for(int i = 0; i<nums.size(); i++){
            complement[nums[i]] = i;
        }
        for(int i = 0; i<nums.size(); i++){
            if(complement.count(target-nums[i]) && complement[target-nums[i]] != i){
                return {i, complement[target-nums[i]]};
            }
        }
        return {};
    }
};

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dupe;
        for(int num:nums){
            if(dupe.count(num)){
                return true;
            }
            dupe.insert(num);
        }

        return false;
        
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }

        vector<pair<int,int>> result;
        for(const auto& i : freq){
            result.push_back({i.second, i.first});
        }
        sort(result.rbegin(), result.rend());
        vector<int> res;
        for(int i = 0; i<k; i++){
            res.push_back(result[i].second);
        }
        return res;
        
    }
};

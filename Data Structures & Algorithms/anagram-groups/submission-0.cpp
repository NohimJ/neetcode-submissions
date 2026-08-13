class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> freq;

        for(auto &i : strs){
            vector<int> count(26,0);
            for(char c : i){
                count[c - 'a']++;
            }

            string key = to_string(count[0]);
            for(int j = 0; j<26; j++){
                key += ',' + to_string(count[j]);
            }
            freq[key].push_back(i);


            }
            vector<vector<string>> result;
            for (const auto& pair : freq) {
                result.push_back(pair.second);
            }
        return result;
        
          
           

               

    }

        
};


class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (const string& s : strs) {
            // Append length + delimiter + actual string
            encoded += to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        
        while (i < s.length()) {
            // Find the delimiter position starting from the current index
            int delimiter_pos = s.find('#', i);
            
            // Extract the length of the upcoming string chunk
            int length = stoi(s.substr(i, delimiter_pos - i));
            
            // Move the index past the delimiter
            i = delimiter_pos + 1;
            
            // Extract the original string data
            decoded.push_back(s.substr(i, length));
            
            // Move the index past the extracted string data
            i += length;
        }
        
        return decoded;
    }
};

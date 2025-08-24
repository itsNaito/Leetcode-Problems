class Solution {
public:
    map<char, int> parseString(const string& s){
        map<char, int> result;
        for(int i = 0; i < s.size(); i++){
            result[s[i]] += 1;
        }
        return result;
    }

    bool isAnagram(string s, string t) {
        map<char, int> s_string = parseString(s);
        map<char, int> t_string = parseString(t);
        if(s_string == t_string){
            return true;
        }
        return false;
    }
};

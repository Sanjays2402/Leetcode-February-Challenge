class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;
        
        vector<int> a(260, 0);
        for(int i=0; i<s.size(); i++)
        {
            a[s[i]]++;
            a[t[i]]--;
        }
        for(int i=0; i<260; i++)
        {
            if(a[i] != 0)
                return false;
        }
        return true;
    }
};

class Solution {
public:
    int romanToInt(string s) {
        
        int res = 0;
        unordered_map<char, int> hash;
        hash['M']=1000;
        hash['D']=500;
        hash['C']=100;
        hash['L']=50;
        hash['X']=10;
        hash['V']=5;
        hash['I']=1;
        
        res = hash[s[s.size()-1]];
        for(int i=s.size()-1; i>0; i--)
        {
            if(hash[s[i]] > hash[s[i-1]])
                res -= hash[s[i-1]];
            else
                res += hash[s[i-1]];
        }
        
        return res;
    }
};

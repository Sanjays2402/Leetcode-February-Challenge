class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int start = 0, i = 0;
        stack<int> stk;
        while(i < pushed.size())
        {
            if(stk.size() && stk.top() == popped[start])
            {
                stk.pop();
                start++;
            }
            else
            {
                stk.push(pushed[i]);
                i++;
            }
        }
        while(stk.size())
        {
            if(stk.top() != popped[start])
                return false;
            stk.pop();
            start++;
        }
        
        return true;
    }
};

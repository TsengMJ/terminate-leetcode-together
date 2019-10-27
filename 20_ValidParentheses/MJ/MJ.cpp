class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        bool ans = true;
        int str_len = str.length();
        
        if(str_len%2)
            return false;

        for(int i=0; i<str_len; i++){
            char c = str[i];
            if(c == '(' || c == '[' || c == '{')
                s.push(c);
            else if(!s.empty()){
                if( (s.top()+1 == c) || (s.top()+2 == c) )
                    s.pop();
                else
                    ans = false;
            }
            else
                ans = false;
        }

        if(!s.empty())
            ans = false;

        
        return ans;
    }
};

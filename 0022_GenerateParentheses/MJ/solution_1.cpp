class Solution {
public:
    
    vector<string> generateParenthesis(int n) {
        int left=n, right=n;
        vector<string> set;
        
        addParentheses(set, "(", left-1, right);
        
        return set;
    }

    void addParentheses(vector<string> &set, string str,int left, int right) {
        if (!left && !right)
            set.push_back(str);
        
        if (left)
        addParentheses(set, str + "(", left-1, right);

        if (right > left)
        addParentheses(set, str + ")", left, right-1);

    }
};


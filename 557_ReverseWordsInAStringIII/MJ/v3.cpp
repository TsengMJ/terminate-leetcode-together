class Solution {
public:
    string reverseWords(string s) {
        int length = s.length();
        for(int i=0, j=0; i<=length; ++i){
            if(s[i] == ' ' || i == length){
                reverse(s, j, i-1);
                j = i+1;
            }
        }
        
        return s;

    }
private:
    void reverse(string &str, int s, int e){
        for(;s<e; ++s, --e){
            swap(str[s], str[e]);
        }
    }
};

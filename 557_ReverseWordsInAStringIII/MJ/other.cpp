#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

class Solution{
    public:
        string reverseWords(string s) {
            int i = 0, j = 0; 

            for(; i<s.size(); ++i){
                if(s[i] == ' '){
                    reverse(s.begin()+j, s.begin()+i);
                    j = i + 1;
                }
            }
            reverse(s.begin()+j, s.begin()+i);

            return s;
        }
};

int main(){
    string s = "Let's take LeetCode contest";
    Solution sol;

    cout << sol.reverseWords(s) << endl;

    return 0;
}

#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

class Solution{
    public:
        string reverseWords(string s) {
            reverse(s.begin(), s.end());
            stringstream ss(s);
            stack<string> st;
            string tmp = "";
            string ans = "";

            while(ss>>tmp){
                st.push(tmp + " ");
            }

            while(!st.empty()){
                ans.append(st.top());
                st.pop();
            }

            ans.pop_back();

            return ans;
        }
};

int main(){
    string s = "Let's take LeetCode contest";
    Solution sol;

    cout << sol.reverseWords(s) << endl;

    return 0;
}

#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

class Solution{
    public:
        string reverseWords(string s) {
            stringstream ss(s);
            string tmp = "";
            string ans = "";

            while(ss>>tmp){
                reverse(tmp.begin(), tmp.end());
                ans += tmp + " ";
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

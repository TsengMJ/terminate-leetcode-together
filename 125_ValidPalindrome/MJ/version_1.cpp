#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length();

        for(; i<j; ++i, --j){
            
            // Step1. Get a valid char from head
            while(i<=j){
                if(48 <= s[i] && s[i] <= 57)
                    break;
                else if(97 <= s[i] && s[i] <= 122)
                    break;
                else if(65 <= s[i] && s[i] <= 90){
                    s[i] += 32;
                    break;
                }
                ++i;
            }
            
            // Step2. Get a valid char from tail
            while(i<=j){
                if(48 <= s[j] && s[j] <= 57)
                    break;
                else if(97 <= s[j] && s[j] <= 122)
                    break;
                else if(65 <= s[j] && s[j] <= 90){
                    s[j] += 32;
                    break;
                }
                --j;
            }
            
            // Step3. Compare the tow chars we choosed before
            if(i<=j && s[i] != s[j])
                return false;
            
        }
        
        return true;
    }

};

int main(){
    Solution sol;
    // string str = "A man, a plan, a canal: Panama";
    string str = "0p";
    
    if (sol.isPalindrome(str))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
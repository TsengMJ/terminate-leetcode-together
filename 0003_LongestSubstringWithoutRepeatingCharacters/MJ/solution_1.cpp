#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0; 
        int maxLength = 0;
        int tmp;
        int i = 0, j;
            
        for(; i<s.length(); i++){
            for(j=start; j<i; j++){
                if(s[i] == s[j]){
                    tmp = i - start;
                    start = j +1;
                    
                    if(tmp > maxLength)
                        maxLength = tmp;
                }
            }
        }
        
        tmp = s.length() - start;
        if(tmp > maxLength)
            maxLength = tmp;
        
        return maxLength;
    }
};

int main(){
    string test_data = "abcabcbb";
    Solution sol;

    cout << sol.lengthOfLongestSubstring(test_data) << endl;
	
    return 0;
}

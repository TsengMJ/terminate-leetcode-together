#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        for (int i=0; i<A.size(); i++){
            A[i] = A[i]*A[i];
        }
        
        sort(A.begin(), A.end());
        
        return A;
    }
};

int main(){
    Solution sol;
    vector<int> testData{-4,-1,0,3,10};
    vector<int> ans = sol.sortedSquares(testData);

    for (int i=0; i<ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}
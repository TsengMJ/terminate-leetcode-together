#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> bucket = {0,0};
        
        for(int i=0; i<bills.size(); ++i){
            if(bills[i] == 5){
                bucket[0] += 1;
            }else if(bills[i] == 10){
                bucket[0] -= 1;
                bucket[1] += 1;
            }else{
                if(bucket[1]){
                    bucket[0] -= 1;
                    bucket[1] -= 1;
                }else{
                    bucket[0] -= 3;
                }    
            }
            
            if (bucket[0] < 0 || bucket[1] < 0)
                return false;
        }
        
        return true;
    }
};

int main(){
    vector<int> test_data = {5,5,5,10,20};
    Solution sol;
    
    if (sol.lemonadeChange(test_data))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}

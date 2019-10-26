#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> dir;
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int part = target - nums[i];
        if (dir.find(part) != dir.end()) {
            result.push_back(dir[part]);
            result.push_back(i);
            return result;
        }
        
        dir[nums[i]] = i;
    }
    
    return result;
}

int main() {
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;    
    }
}
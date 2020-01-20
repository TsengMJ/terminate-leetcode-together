class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int > table;
        int maxTimes = 0;
        int ans;
        int cur;
        
        for(int i=0; i<nums.size(); ++i){
            cur = nums[i];
            if (table.find(cur) != table.end())
                table[cur] += 1;
            else
                table[cur] = 1;
            
            if (table[cur] > maxTimes){
                maxTimes = table[cur];
                ans = cur;
            }
        }
        
        return ans;
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> hash_table;
        map<int,int>::iterator loc;
        for(int i=0; i<nums.size(); ++i){
            loc = hash_table.find(nums[i]);
            if(loc != hash_table.end())
                hash_table.erase(loc);
            else
                hash_table.insert({nums[i], nums[i]});
        }
        loc = hash_table.begin();
        return loc->second;
    }
};

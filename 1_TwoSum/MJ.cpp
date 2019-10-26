class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> umap;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            if( umap.find(nums[i]) == umap.end() ){
                umap[target - nums[i]] = i;
            }
            else{
                ans.push_back(umap[nums[i]] );
                ans.push_back(i);
                break;
            }
        }
        
        return ans;
    }
};

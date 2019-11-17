class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map <int, int> nums;
        vector <int> ans;
        int tmp;
        
        // Go through nums1
        for (int i=0; i<nums1.size(); i++){
            tmp = nums1[i];
            if (nums.find(tmp) == nums.end())
                nums[tmp] = tmp;
        }
        
        // Find same elements
        for (int i=0; i<nums2.size(); i++){
            tmp = nums2[i];
            if(nums.find(tmp) != nums.end()){
                ans.push_back(tmp);
                nums.erase(tmp);
            }
        }
        
        return ans;
    }
};

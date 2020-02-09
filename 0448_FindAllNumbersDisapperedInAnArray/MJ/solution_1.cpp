class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == i+1)
                continue;
            
            while(true){
                if(nums[nums[i]-1] == nums[i] || nums[i] == 0)
                    break;
                swap(nums[i], nums[nums[i]-1]);
            }
        }
        
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] != i+1)
                ans.push_back(i+1);
        }
        
        return ans;
    }
    
    void swap(int& a, int& b){
        int tmp = a;
        a = b;
        b = tmp;
    }
};

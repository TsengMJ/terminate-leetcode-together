class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int size = 0;
        int length = 0;
        vector<int> lists_length;
        vector<ListNode*> ans;
        ListNode* tmp = root;
        
        while(tmp){
            ++size;
            tmp = tmp->next;
        }
        
        for (int i=k; i>0; --i){
            length = (size%i)? size/i + 1: size/i;
            lists_length.push_back(length);
            size -= length;
        }
        
        int step = 0;
        for (int i=0; i<k; ++i){
            tmp = root;
            ans.push_back(tmp);
            step = lists_length[i];
            
            while(--step > 0)
                tmp = tmp->next;
            
            if (tmp){
                root = tmp->next;
                tmp->next = NULL;
            }
        }
        
        
        
        return ans;
    }
};

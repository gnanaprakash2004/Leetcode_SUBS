class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        vector<int>ans;
        int x=nums.size();
        for(int i=0;i<x;i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }
            else{
                n.push_back(nums[i]);
            }
        }

        for(int i=0;i<p.size();i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int t=0;
        int flag=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
    }
    int c=0;
    for(auto i:mp){
        if(i.second==1){
            return -1;
        }
        else{
            c+=ceil((i.second)/(3.0));
        }
    }
    return c;
    }
};
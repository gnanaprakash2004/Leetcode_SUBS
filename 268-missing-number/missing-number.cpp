class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long s=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        int z=(n)*(n+1)/2;
        return(abs(z-s));
    }
};
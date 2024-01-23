class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<20;j++){
                if(((1<<j)&i)>0){
                    c+=1;
                }
            }
            if(c==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};
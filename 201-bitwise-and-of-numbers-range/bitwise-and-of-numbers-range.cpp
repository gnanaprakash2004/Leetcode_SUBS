class Solution {
public:
    int rangeBitwiseAnd(long long  left, long long right) {
        // if(left==1073741824)return 1073741824;
        // long long ans=left;
        // for(long long  i=left+1;i<=right;i++){
        //     if(ans==0 or (i&(i-1))==0){
        //         return 0;
        //         break;
        //     }
        //     else{
        //         ans=ans&i;
        //     }
        // }
        // return ans;
        long long c=0;

        for(int i=31;i>=0;i--){
            if(((1<<i)&left)==((1<<i)&right)){
                c=c|((1<<i)&left);
                
            }
            else{
                break;
            }
        }
         return c;
    }
};
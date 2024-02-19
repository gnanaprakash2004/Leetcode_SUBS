class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        // if(n<)
        n=abs(n);
       if(n&(n-1)){
           return false;
       } 
       return true;
    }
};
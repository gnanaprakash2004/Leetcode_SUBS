class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int r=0,l=0;
        string ans=word1+word2;
        string max=word1;
        string min=word2;
        if(word2.size()>word1.size()) {
            max=word2;
            min=word1;
        }
        int t=min.size(); 
        int i;
        for(i=0;i<2*t;i++) {
            if(i%2==0) {
                ans[i]=word1[r];
                r++;
            }
            else {
                ans[i]=word2[l];
                l++;
            }
        }
        for(;l<max.size();l++) {
            ans[i]=max[l];
            i++;
        }
        return ans;
    }
};
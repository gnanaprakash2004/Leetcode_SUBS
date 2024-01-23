class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx=0;
        for(auto i:sentences){
            int c=0;
            for(auto j:i){
                if(j==' '){
                    c+=1;
                }
            }
            maxx=max(c,maxx);
        }
        return maxx+1;
    }
};
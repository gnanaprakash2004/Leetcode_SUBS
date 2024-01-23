class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int maxx=0;
        for(auto i:candies){
            maxx=max(maxx,i);
        }
        for(int i=0;i<candies.size();i++){
            if(extraCandies+candies[i]>=maxx){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;
    }
};
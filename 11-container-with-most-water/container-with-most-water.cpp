class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,h=height.size()-1;
        priority_queue<int>p;
        while(l<h){
            p.push(min(height[l],height[h])*(h-l));
            if(height[l]>=height[h]){
                h--;
            }
            else{
                l++;
            }
        }
        return (p.top());
    }
};
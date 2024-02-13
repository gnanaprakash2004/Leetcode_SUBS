class Solution {
public:
bool cheking(string s){
    int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;

            }
            else{
                return false;
            }
        }
            return true;
}
    string firstPalindrome(vector<string>& s) {
        for(int i=0;i<s.size();i++){
            if(cheking(s[i]))
            {
                return s[i];
            }
        }
        return "";
    }
};
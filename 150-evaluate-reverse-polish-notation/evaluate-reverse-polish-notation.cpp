class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                long a;
                a=s.top();
                s.pop();
                long b;
                b=s.top();
                s.pop();
                if(tokens[i]=="+"){
                    s.push(a+b);
                }
                if(tokens[i]=="/"){
                    s.push(b/a);
                }
                if(tokens[i]=="*"){
                    s.push(a*b);
                }
                if(tokens[i]=="-"){
                    s.push(b-a);
                }
            }
            else{
                s.push(stol(tokens[i]));
            }
        }
        return (s.top());
    }
};
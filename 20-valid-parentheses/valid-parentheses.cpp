class Solution {
public:
    bool isValid(string s) {
        stack<char> g;
        for(char a:s){
            if(a=='('||a=='{'||a=='['){
                g.push(a);
            }
            else{
                 if(g.empty())return false;
            
            char t=g.top();
                 g.pop();
            if(a==')'&&t!='(')return false;
            if(a==']'&&t!='[')return false;
            if(a=='}'&&t!='{')return false;
            }
            

        }

        return g.empty();

    }
};
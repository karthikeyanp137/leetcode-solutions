class Solution {
public:
    bool isValid(string s) {
        stack<char>c;
        if(s[0]==')'||s[0]==']'||s[0]=='}') return false;
        
        for(char s:s){
              if(s=='('||s=='['||s=='{'){
                c.push(s);
              }
              if(c.empty()) return false;
              else if(s==')' && c.top()=='(') c.pop();
              else if(s==']' && c.top()=='[') c.pop();
              else if(s=='}' && c.top()== '{') c.pop();
              else if(s==']'||s=='}'||s==')') return false;
        }
        return c.empty();
        
    }
};
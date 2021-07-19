//question on balanced paranthesis
//valid and unvalid string
//a given paran is compared to stack
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool isvalid(string s){
    int n = s.size();
    stack <char> st;
    bool ans = true;
    for(int i=0;i<n;i++){
        if(s[i] == '{' or s[i] =='(' or s[i] == '[' ){
            st.push(s[i]);
        }
        if(st.top() == '('){
            if(st.top() == ')'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }

        }
        
        if(st.top() == '['){
            if(st.top() == ']'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }

        }
        
        if(st.top() == '{'){
            if(st.top() == '}'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }

        }
    }
    return 0;
}

int main() {
    string s = "{[()]}";
    return 0;
    if(isvalid(s)){
        cout << "valid string" << endl;
    }
    else{
        cout << "invalid" << endl;
    }
    

return 0;
}

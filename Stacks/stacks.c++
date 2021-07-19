//implemention of stacks
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define n 100

class Stack
{

int* arr; // pointer array
int top;

public:
stack(){
    arr = new int[n];
    top =-1;
}
void push(int x){
    if(top==n-1){
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    arr[top] =x;
}
void pop(){
    if(top==-1){
        cout << "No element to pop " << endl;
        return;
    }
    top--;
    
}
int Top(){
    if(top==-1){
      cout << "No element in stack" << endl;
      return -1;
    }
    return arr[top];
}
bool empty(){
    return top==-1;
}
};

int main(){
Stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout << st.Top()<< endl;

st.pop();
cout << st.Top()<< endl;
st.pop();
cout << st.Top()<< endl;
st.pop();
cout << st.Top()<< endl;
st.pop();


return 0;
}

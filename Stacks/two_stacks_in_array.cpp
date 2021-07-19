#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class twoStacks{
    int* arr;
    int size;
    int top1,top2;
    public:
    twoStacks(int n)
    {
        size=n;
        arr = new int[n];
        top1 = n/2+1;
        top2 = n/2;

    }
    void push1(int x)
    {
        if (top1 >0){
            top1--;
            arr[top1] =x;
        }
        else {
            cout << "Stack Overflow" << "By element : " << x << endl;
            return;
        }
    }
        void push2(int x) 
        {
        if (top2 <size-1){
            top2++;
            arr[top2] =x;
        }
        else {
            cout << "Stack Overflow" << "By element : " << x << endl;
            return;
        }
    }
    int pop1()
    {
        if (top1 <=size/2){
            int x = arr[top1];
            top1++;
            arr[top1] =x;
            return x;
        }
        else {
            cout << "Stack Underflow" << endl;
            exit(1);
        }
    }
        int pop2(){
        if (top2 >=size/2 +1){
            int x = arr[top2];
            top2++;
            arr[top2] =x;
            return x;
        }
        else {
            cout << "Stack Underflow" << endl;
            exit(1);
        }

    }

};

int main() {
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(15);
    ts.push1(11);
    ts.push1(50);
    ts.push2(67);
    cout << "Popped element from stack 1 is:" << ts.pop1() <<  endl;
    ts.push2(49);
    cout << "Popped element from stack 1 is:" << ts.pop2() <<  endl;
    return 0;
    
}
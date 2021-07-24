// here we have to prove a == b without using == opearator  
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b= 10;
    if(!a^b){
        cout << " a is equals to b";
    }
    else
    cout << "a is not equal to b";
}
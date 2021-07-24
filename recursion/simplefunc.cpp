#include <iostream>
using namespace std;
void mainFuct(int test){
    if(test < 1)// base case
    return ;
    else{

        cout << test ;
        // calling out the fuction {recursive approach}
        mainFuct(test-1 );
        cout << test ;
    }
}
int main(){
  int test;
  cin >> test;
  mainFuct(test);
}
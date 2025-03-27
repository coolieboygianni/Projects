#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1); // add 1 to stack bottom
    s.push(2); //add another to stack
    s.push(3); // add another top
    //cout << s.empty()<< endl; //if empty or not
    s.pop(); //remove top
    cout << s.size() << endl; //size of stack
    return 0;
} 
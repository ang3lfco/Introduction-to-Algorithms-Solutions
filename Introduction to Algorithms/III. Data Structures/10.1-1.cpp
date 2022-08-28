#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> pS){
    stack<int> s = pS;
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> S;
    S.push(4);  printStack(S);
    S.push(1);  printStack(S);
    S.push(3);  printStack(S);
    S.pop();    printStack(S);
    S.push(8);  printStack(S);
    S.pop();    printStack(S);
    return 0;
}
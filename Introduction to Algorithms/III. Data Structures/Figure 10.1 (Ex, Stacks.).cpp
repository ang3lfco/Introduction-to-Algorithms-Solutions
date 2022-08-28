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
    S.push(15);
    S.push(6);
    S.push(2);
    S.push(9);
    printStack(S);
    S.push(17);
    S.push(3);
    printStack(S);
    S.pop();
    printStack(S);
    return 0;
}
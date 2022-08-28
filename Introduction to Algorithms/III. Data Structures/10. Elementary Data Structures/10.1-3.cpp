#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> pQ){
    queue<int> q = pQ;
    while(!q.empty()){
        cout << q.front() << ' ';
        q.pop();
    }
    cout << endl;
}

int main(){
    queue<int> Q;
    Q.push(4);  printQueue(Q);
    Q.push(1);  printQueue(Q);
    Q.push(3);  printQueue(Q);
    Q.pop();    printQueue(Q);
    Q.push(8);  printQueue(Q);
    Q.pop();    printQueue(Q);
    return 0;
}
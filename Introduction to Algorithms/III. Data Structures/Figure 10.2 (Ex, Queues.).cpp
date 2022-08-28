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
    Q.push(15);
    Q.push(6);
    Q.push(9);
    Q.push(8);
    Q.push(4);
    printQueue(Q);
    Q.push(17);
    printQueue(Q);
    Q.push(3);
    Q.push(5);
    printQueue(Q);
    return 0;
}
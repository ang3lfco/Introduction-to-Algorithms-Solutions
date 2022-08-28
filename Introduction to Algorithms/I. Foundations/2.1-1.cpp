#include <iostream>
#include <vector>
using namespace std;

//INSERTION SORT
int main(){
    vector<int> b = {31,42,59,26,41,58};
    for(int y = 0 ; y < b.size() ; y++){
        int key = b[y];
        int a = y-1;
        
        while(a >= 0 && b[a] > key){
            b[a+1] = b[a];
            a = a-1;
        }
        b[a+1] = key;
    }
    for(int y = 0 ; y < b.size() ; y++){
        cout << b[y] << " ";
    }
    return 0;
}
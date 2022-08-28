#include <iostream>
#include <vector>
using namespace std;

//INSERTION SORT
int main(){
    vector<int> a = {5,2,4,6,1,3};
    for(int x = 0 ; x < a.size() ; x++){
        int key = a[x];
        int b = x-1;
        
        while(b >= 0 && a[b] > key ){
            a[b+1] = a[b];
            b = b-1;
        }
        a[b+1]=key;
    }
    for(int g = 0 ; g < a.size() ; g++){
        cout << a[g] << " ";
    }
    return 0;
}
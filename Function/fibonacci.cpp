#include <iostream>
using namespace std;

void fibonacci(int n){
    if( n <= 0){
        return;
    }
    int a = 0;
    cout << a;
    int b = 1;
    if(n > 1){  
    cout << b;
    }
    for(int i = 2; i < n; i++){
        int next = a + b;
        cout << next;

    a = b;
    b = next;
    }
}

int main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    fibonacci(n);


    return 0;
}
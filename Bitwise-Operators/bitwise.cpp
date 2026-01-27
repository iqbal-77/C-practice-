#include <iostream>
using namespace std;
// bitwise
int main(){
    int a = 10, b = 1;
    cout << ((5 - 2) * 6) << endl;
    cout << (a >>  b) << endl;
    cout << (8 >> 2) << endl;
    cout << (4 << 1) << endl;
    cout << (a ^ b) << endl;
    cout << (a | b) << endl;
    cout << (a&b )<< endl;
    return 0;
}


//scope

#include <iostream>
using namespace std;

//check function if a number is a power of 2??

bool isPower(int n){
    if(n == 0){
        return false;
    }
    if(n & (n - 1)){
        return true;
    }
    else{
        return false;
    }
}

// reverse function
int reverse(int n){
    int ans = 0;
    while(n > 0){
        int rem = n % 10;
        n /= 10;
        ans = ans * 10 + rem;
    }
    return ans;
}

int main(){
    int n;
    cout << "enter number: ";
    cin >> n; 
    cout << reverse(n) << endl;
    cout << isPower(n) << endl;
    if(n == 0){
        cout << "false";
    } 
    if((n & (n - 1)) == 0){
        cout << "true";
    }
    else{
        cout << "false";
    }
   
    bool isPower = false;
    while(n > 1){
        if(n % 2 != 0){
            isPower = false;
            break;
        }
        n /= 2;
    }
       if(isPower == true){
            cout << "Power of 2";
        }
        else{
            cout << "Not a power of 2";
        }

    unsigned int x = 10;
    cout << x;
    cout << sizeof(int) << endl;
    cout <<  sizeof(long long)  << endl;
    cout << sizeof(short int);
    if( 3 > 1){
        int x = 10;
    }
    cout << x;

      return 0;
}
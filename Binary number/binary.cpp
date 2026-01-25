#include <iostream>
using namespace std;

int binNum(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n % 2;
        n = n / 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int binToDec(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n % 10;
        n = n / 10;
        ans += ( rem * pow);
        pow *= 2;
    }
    return ans;
}
int sumNum(int n){
    int ans = 0;
    while(n > 0){
    int rem = n % 10;
    n /= 10;
    ans += rem;
    }
    return ans;
}

int decToBin(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n % 10;
        n = n / 10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << decToBin(n) << endl;
    cout <<  "sum = " << sumNum(n) << endl;
    cout << "Binary to decimal: " << binToDec(n) << endl;
    cout << "Decimal to Binary: " << binNum(n) << endl;
    for(int i = 2; i <= n; i++){

    cout << binNum(n) << endl;
    }
    int binary = binNum(n);
    cout << binary << endl;
    return 0;
}
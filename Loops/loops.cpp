#include <iostream>
using namespace std;

int main () {
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n){
    cout << i << " ";
    i++;
    }
    cout << endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i = i+2) {
        cout << i << " ";

    } 
    cout << endl;

    int n;
    int sum = 0, i = 1;
   
    cout << "enter a number: ";
    cin >> n;
    for (int i = 1;  i <= n;   i++){
        sum += i;
        if (i == 5){
            break;
        }
    }
    cout << sum <<  endl;
    while (i <= n){
        sum +=i;
        i++;
        
    }
    cout << sum << endl;

    int n, sum = 0;
    int i = 1;
    
    cout <<"enter a number: ";
    cin >> n;
    while (i <= n) {
        if (i % 2 != 0){
        sum += i;
        i++;
        }
    }
    cout << sum << endl;

    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            sum += i;
        }
    }
    cout << sum << endl;

    int n, sum = 0, i = 1;
    cout << "enter number: ";
    cin >> n;
    while (i <= n){
        if(i % 2 != 0){
            sum += i;
            
        } i++;
    }cout << sum << endl;


    int n, sum =0;
    cout << "enter number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if( i % 2 == 0){
            sum += i;
        }
        
    }cout << sum << endl;

    int n = 10, i = 1;
    do {
        cout << i << " ";
        i ++;
    } while (i <= n);

    int n;
    bool isPrime = true;
    cout << "enter  number: ";
    cin >> n;
    for(int i = 2; i <= (n - 1); i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    } 
    if (isPrime == true){
        cout << "Prime" << endl;
    }
    else{
        cout << "not a prime" << endl;
    }

    int n;

    cout << "enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }

    }

    int n;
    bool isPrime = true;
    cout << "enter number: ";
    cin >> n;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isPrime = false;
        }
    }
    if(isPrime == true){
        cout << "prime\n";
    }
    else{
        cout << "not a prime\n";
    }

    int n = 5;
    for(int i = 1; i <= n; i++){
         int m = 9;
        for (int i = 1; i <= m; i++){
            cout << "*";
        }
        cout << endl;
    }

   
    return  0;
    
}
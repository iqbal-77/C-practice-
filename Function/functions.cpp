#include <iostream>
using namespace std;

//function definition
int printHello(){
    cout << "hello\n";
    return 3;
}

int sum(int a, int b){
    int s = a+b;
    return s;
}

double sum (double a, double b){
    double s = a + b;
    return s;
}

int minOfTwo(int a, int b)//-> parameters
 {
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int sumN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int factN(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

void fun(){
    int x =25;
    cout << "x = " << x << endl;
}

int sum(int a, int b){
    a = a+10;
    b = b+10;
    return a+b;
}

int sum(int n){
    int sum = 0;
    while(n > 0){
        
        int digit = n % 10;
        n = n / 10;
        sum += digit;
        
    } 
    return sum;
}

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }  
    return fact;
}
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}

int sumDig(int n){
    int sum = 0;
    while(n > 0){
        int dig = n % 10;
        n = n / 10;
        sum += dig;
    }
    return sum;
}

bool findPrime(int n){

    bool isPrime = true;
    if(n <= 1){
        isPrime = false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    
    if(isPrime){
        return true;
    }
    else{
        return false;
    }
}
void printPrime(int n){
    for(int i = 2 ; i <= n; i++){

        if(findPrime(i)){
            cout << i << " ";
        }
    }
}

void fib(int n){
    if(n == 0)
    return;
    int a = 0;
    int b = 1;
    cout << a << " ";
    if(n > 1){
    cout << b << " ";
    }

    for(int i = 2; i < n; i++){
        int next = a+b;
        cout << next << " ";

        a = b;
        b = next;
    }
}


bool findPrime(int n){
    bool isPrime = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        return true;
    }
    else{
        return false;
    }
}

void printPrime(int n){
    for(int i = 1; i<= n; i++){
        if(findPrime(i)){
            cout << i << " ";
        }
    }
}

int main() {
// function call , invoke
    int n;
    cout << "enter number: ";
    cin >> n;
    bool x = findPrime(n);
    cout << x << endl;
    printPrime(n);

    switch(n){
        case 1:
        cout << "monday";
        break;
        case 2:
        cout << "tuesday";
        break;
        case 3:
        cout << "wednesday";
        break;
        default:
        cout << "invalid number!";
    }


    printPrime(n);
    
     bool x = findPrime(n);
    cout << x << endl;
    
   
    

    int num = 145;
    cout << "sum = " << sumDig(num) << endl;
   int n = 4, r = 2;
   cout << "fact = " <<  nCr(n, r) << endl;



    cout << "sum = "<< sum(134145)<< endl;

    int x = 10, y = 5;
    cout << "sum = " << sum(x, y) << endl;
    cout << x << endl;
    cout << y << endl;
    
    cout << "fact = " << factN(2) << endl;
    cout << "sum = " << sumN(9) << endl;

    cout << "min = " << minOfTwo(193, 89)  << endl;  // //-> arguments

    int val = printHello();
    cout << "val = " << val << endl;
    cout << printHello() << endl;

    cout << "sum = " << sum(10, 5) << endl;

    cout << "sum = " << sum(10.09, 8.44) << endl;
   
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    cout << "Iqbal\nAther"<<endl;
    int age = 25;
    char grade = 'A';
    float pi = 3.14f;
    bool isSafe = true;
    double price = 100.99;


    char grade = 'A';
    int value = grade;

    double price = 100.99;
    float value = (float)price;
    cout << sizeof(value) << endl;
    cout << sizeof(price) << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age <<endl;

    int price;
    cout << "Enter the price: ";
    cin >> price;
    cout << "Your given price is " << price << endl;

    int a = 10, b = 5;
    int sum = a + b;
    cout << "sum = "<< (a + b) << endl;
    cout << "difference = " << (a - b) << endl;
    cout << "product = " << (a * b) << endl;
    cout << "Division = " << (a / b) << endl;
    cout << "Modulo = " << (a % b) << endl;

    int a = 5, b = 2;
    cout << "division = " << (a / b) << endl;  
    // in math the answe is 2.5 but in C++ it only give int value withou rounding off.So, that's why the answe is 2.

    // if we want answer in decimal value.
    int a = 5;
    double b = 2;
    cout << "Division = " << (a / b) << endl;
    

    int a = 5, b = 2;
    cout << "Division = " << (a / (double) b) << endl;

    cout << "Retaional operator " << (a > b)<< endl; // true -> 1
    cout   << (a < b) << endl; // false -> 0
    cout   << (a <= b) << endl; // false -> 0
    cout   << (a >= b) << endl; 
    cout   << (a == b) << endl; 
    cout   << (a != b) << endl; 

    int a = 5, b = 2, c = 6, d = 9;
    cout << !(a > b) << endl; // Because of !(not) logical operator becomes false -> 0
    cout << ( (a > b) || (c > d) ) << endl;

    cout << ( (a > c) && (b > d) ) << endl;


    int a = 5, b = 8;
    int sum = a + b;
    cout << "Sum = " << sum << endl;

    int a, b;
    cout << "Enter a = ";
    cin >> a;

    cout << "Enter b = ";
    cin >> b;
    int sum = a + b;
    cout << "Sum = " << sum << endl;

    int a = 5;
    int b = a++;
    cout << "b = " << b << endl; // 5
    cout << "a = " << a << endl; //6

    int b = ++a;
    cout << "b = " << b << endl; // 6
    cout << "a = " << a << endl; // 6

    int a = 10;
    int b = --a;
    cout << "b = " << b << endl; // 9
    int b = a--;
    cout << "b = " << b << endl; // 10


    cout << "b = " << b << endl; // 11
    cout << "a = " << a << endl; // 11


    return 0;
}

// boilerplate -comment
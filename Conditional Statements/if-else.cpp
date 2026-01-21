#include <iostream>
using namespace std;

int main () {
    int n = -45;

    if (n >= 45) {
        cout << "n is positive"<< endl;
    } else {
        cout << "n is negative\n";
    }

    int age = 1;
    if (age >= 18) {
        cout << "Can Vote"<< endl;
    } else {
        cout << "Cannot Vote" << endl;
    }

    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "n is even" << endl;
    } else {
        cout << "n is odd\n";
    }

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90 && marks <= 100) {
        cout << "A" << endl;
    } else if (marks < 90 && marks >= 80 ) {
        cout << "B" << endl;
    } else {
        cout << "C"<< endl;
    }

    char ch;
    cout << "enter a char: ";
    cin >> ch;
    if ('a' <= ch && ch <= 'z') {
        cout << "Lowercase\n";
    } else {
        cout << "Upper-Case" << endl;
    }

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << (n >= 18 ? "can vote" : "Cannot vote")<< endl;
}
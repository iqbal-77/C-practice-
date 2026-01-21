// // Question 1

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    printf("Hello, World!");
    return 0;
}

// question 2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;
    int sum = a + b + c;
    cout <<"Sum = " << sum << endl;
       
    return 0;
}

// question 3

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
   int a;
    long long b;
    char c;
    float d;
    double e;
    cin >> a  >> b >> c >> d >> e;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;
    return 0;
}
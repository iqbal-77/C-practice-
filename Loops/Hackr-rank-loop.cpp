#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int n = 2;
    if (n == 1){
        cout << "one" << endl;   
    } else if (n == 2){
        cout << "two" << endl;
    } else if (n == 3){
        cout << "three" << endl;
    }else if (n == 4){
        cout << "four" << endl;
    }else if (n == 5){
        cout << "five" << endl;
    }else if (n == 6){
        cout << "six" << endl;
    }else if (n == 7){
        cout << "seven" << endl;
    }else if (n == 8){
        cout << "eight" << endl;
    }else if (n == 9){
        cout << "nine" << endl;
    }else if (n > 9){
        cout << "Greater then 9" << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a , b;
    cout << "enter a: "<< endl;
    cout << "Enter b : " << endl;
    cin >> a >> b;
    
    for(int i = a; i <= b; i++){
        if(i >= 1 && i <= 9){
                 if(i == 1){cout << "one\n";}
            else if(i == 2){ cout << "two\n";}
            else if(i == 3){ cout << "three\n";}
            else if(i == 4){ cout << "four\n";}
            else if(i == 5){ cout << "five\n";}
            else if(i == 6){ cout << "six\n";}
            else if(i == 7){ cout << "seven\n";}
            else if(i == 8){ cout << "eight\n";}
            else if(i == 9){ cout << "nine\n";}
        }else if(i > 9){
            if(i % 2 == 0){ cout << "even" << endl;}
            else {cout << "odd" << endl;}
        }
    }


    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "enter number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    cout << "Sum = " << sum << endl;

    int n;
    long long fact = 1;
    cout << "enter number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    cout << "Fact = " << fact << endl;



    return 0;
}
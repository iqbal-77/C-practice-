#include <iostream>
#include <vector>
using namespace std;

// pass by reference through pointers
void change(int *ptr){
    *ptr = 20;
}

// Pass by references through Alias
void change(int &b){
    b = 20;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
  
    int *ptr = arr;
    cout << ptr << endl;    // arr(address)
    cout << *(ptr+1) << endl; // 2
    cout << *(ptr+3) << endl; // 4
    ptr++;
    cout << *ptr << endl;  // 2
    cout << *(ptr +1) << endl; // +4 in arr(address)
    cout << *(ptr + 3) << endl; // +12 in arr(address)
    ptr++;
    cout << *ptr << endl;   // +4 in ptr(address)

    int *ptr;
    int *ptr2;
    
    cout << (ptr2 > ptr) << endl;  // 1

    int *ptr;                // 100
    int *ptr2 = ptr + 3;    //  112    

    cout << ptr2 - ptr << endl;   // ans => 3



    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *arr+4 << endl;

    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;  // => +8

    ptr++;
    cout << ptr << endl; // +4
    ptr--;
    cout << ptr << endl;


    cout << *arr << endl;   // => it gives the 0th indexed value 

    cout << arr << endl; // array name is also a pointer so it gives the memory address

   // arr = &a  // we n't do this bcz array is a contant value.


   // int a = 10;
    change(a);
    cout << "inside main fun: " << a << endl; // 20


// QUESTION 
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;  // 5
    cout << **q << endl; // 5
    cout << p << endl;    // a(address)
    cout << *q << endl;  // a(address)




   // NULL POINTER
    int** ptr = NULL;
    cout << ptr << endl;




    // pointer to pointer
    int price = 10;
    int* ptr = &price;

    int** ptr2 = &ptr; 

    cout << *ptr << endl;
    cout << *(&price) << endl;

// DEREFRENCE OPERATOR
    cout << *&price << endl; // 10
    cout << *ptr << endl;  // 10
    cout << *ptr2 << endl; // 10



    // variable to pointer

    int price = 10.99f;
    int* ptr = &price;
     
    cout << &price << endl;
    cout << ptr << endl;
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl;
    cout << &a << endl;


    return 0;
}
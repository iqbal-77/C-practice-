#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(100);
    vec.push_back(90);
    vec.push_back(50);
    vec.push_back(20);
    vec.push_back(10);
    cout << vec.size() << endl; // 5
    cout << vec.capacity() << endl;  // 8
    vec.pop_back();
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(0) << endl;
    for(int val: vec){
        cout << val << endl;
    }
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(65);
    vec.pop_back();
    cout << "at index " << vec.at(0) << endl;
    cout << vec.back() << endl;
    cout << "size = " << vec.size() << endl;
    for(int val: vec){
        cout << val << endl;
    }
    vec.push_back(25);
    for(int val: vec){
        cout << val << endl;
    }
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(5);
    vec.push_back(15);
    cout << "size = " << vec.size() << endl;

    vec.pop_back();
    vec.push_back(100);

    cout << vec.front() << endl;    // front()

    cout << vec.back() << endl;     // back()
     
    cout << vec.at(1) << endl;          // at()

    for(int val: vec){
        cout << val << endl;;
    }
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "size = " << vec.size() << endl;
    for(char val: vec){
        cout << val << endl;
    }
    vector<int> vec(5, 0);
    for(int i: vec){
        cout << i << endl;
    }
    vector<int> vec;
    vector<int> vec = {1, 2, 3};
    vector<int> vec(3, 0);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;

    return 0;
}
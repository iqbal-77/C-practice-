#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& vec, int target){
    int index = 0;
    for(int val: vec){
        if((val ^ target) == 0){
            return index;
        }
        index++;
    }
    return -1;
}

void reverse(vector<int>& vec){
    int start = 0;
    int end = vec.size() - 1;
    while(start < end){
        swap(vec[start], vec[end]);
    start++;
    end--;
    }
   

}



int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    reverse(vec);
    for(int val: vec){
        cout << val << " ";
    }
    int target = 5;
    cout << linearSearch(vec, target);
    return 0;
}
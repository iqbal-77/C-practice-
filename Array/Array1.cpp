#include <iostream>
using namespace std;

// Reverse an Array function
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    for(int i = 0; i < size; i++){
        if(start < end){
            swap(arr[start], arr[end]); 
        }
        start++;
        end--;
    }
}

// unique Values

void uniqueValue(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        bool isUnique = true;
        for(int j = 0; j < size; j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
}

void interValue(int arr1[], int arr2[], int size1, int size2){
    for(int i = 0; i < size1; i++){
        bool found = false;
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                found = true;
            }
        }
        if(found){
            cout << arr1[i] << " ";
        }
    }
}

void foundValue(int arr[], int size, int target){
    int idx = 0;
    
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            target = arr[i];
            idx = i;
        }      
    }
    cout << idx << endl;
}

// largest value find
int largest(int arr[], int size){
        // code here
        int largest = INT_MIN;
        for(int i = 0; i < size; i++){
            if(arr[i] > largest){
                largest = arr[i];
                
            }
        }
        return largest;
    }

int main(){
    int size = 4;
    int target = 9;
    int arr[] = {1, 5, 8, 9};
    cout << largest(arr, size);
    // foundValue(arr, size, target);
    // int size1 = 4;
    // int size2 = 2;
    // int arr1[] = {1, 1, 2, 3};
    // int arr2[] = {2, 3};
    // interValue(arr1, arr2, size1, size2);

    // uniqueValue(arr, size);
    // reverseArray(arr, size);
    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }
    return 0;
}
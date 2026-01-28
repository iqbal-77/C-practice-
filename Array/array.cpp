#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int sum = 1;
    for(int i = 0; i < size; i++){
        sum *= arr[i];
       
    }
    return sum;
}

void swapValue(int arr[], int size){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int start = 0;
    int end = 0;
    
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            start = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            end = i;
        }
        
    }
    // cout << end;
    swap(arr[start], arr[end]);
}

void uniqueValue(int arr[], int size){
    
    for(int i = 0; i < size; i++){
       bool found = true; 
            for(int j = 0; j < size; j++){
                if(i != j && arr[i] == arr[j]){
                    found = false;
                    break;
                }
            }
             if(found){
        cout << arr[i] << " ";
    }
    }
    
}

void findInter(int arr1[],int arr2[], int size1, int size2){
    for(int i = 0; i < size1; i++){
        bool found = false;

        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                found = true; 
                break;    
            }
        }
        if(found){
            cout << arr1[i] << " ";
        }
    }
}
int main(){
    int size = 5;
    int arr[] = {1, 2, 1, 3, 4};
    uniqueValue(arr, size);

    int size1 = 4;
    int size2 = 2;
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 4};
    findInter(arr1, arr2, size1, size2);
    cout << uniqueValue(arr, size)<< endl;

   
    
    
    for(int i = 0; i < size; i++){
        bool isUnique = true;
        for(int j = 0; j  < size; j++){
            if(j != i && arr[i] == arr[j]){
                 isUnique = false;
                 break;
            }  
        }
         if(isUnique){
        cout << arr[i] << " ";
        }
      
      
    }
   
    return 0;
}
swapValue(arr, size);
    for(int i = 0; i< size; i++){
        cout << arr[i] << " ";
    }
void changeArr(int arr[], int size){
    cout << "in func\n";
    for(int i = 0; i < size; i++){
        arr[i] *= 2;
        cout << arr[i] << endl;
    }
    
}
void changeX(int n){
    n += 10;
    cout << "in function\n";
    cout << n << endl;

}

int findIdx(int arr[], int target, int size){
   
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
        
    }
   return -1;
   
}
void reverseArr(int arr[], int size){
   int start = 0, end = size - 1;
   while(start < end){
    swap(arr[start], arr[end]);
   start++;
   end--;
   }
}
int sumArray(int arr[], int size){
    int sum = 1;
    for(int i = 0; i < size; i++){
        sum *= arr[i];
    }
    return sum;
}
void swapValue(int arr[], int size){
    int start = 0;
    int end = 0;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            start = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            end = i;
        }
    }
    // cout << smallest << largest << endl;
    swap(arr[start], arr[end]);
}

void uniqueValue(int arr[], int size){
    int x = 0;
    int idx = 0;
    for(int i = 0; i < size; i++){
        
        for(int j = 1; j = i; j++){
            arr[idx] != arr[j];
            x = idx;
           break;
        }
        idx += 1;
       cout << arr[x] << " ";
        
    }
    
     
}

int main(){
    int size = 3;
    int arr[] = {1, 1, 2, 3, 4};
    uniqueValue(arr, size);
    
    reverseArr(arr, size);
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int target = 8;
    cout << findIdx(arr, target, size);
    int x = 10;
    changeX(x);
    // here X is change is not change in main function because it is primitive data type.
    cout << "in main\n";
    cout << x << endl;
    int arr[] = {1, 2, 3};
    changeArr(arr, 3);

    cout << "main\n";
    for(int i = 0; i < 3; i++){
        cout << arr[i]<< endl;
    }




    int size = 6;
    int nums[] = {100, 19, 98, -13, 21, 78};
    // // find largest, smallest value
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int idx = 0;
    int idx2 = 0;

    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            idx = i;
        }
        if(nums[i] > largest){
            largest = nums[i];
            idx2 = i;
        }
    }
    cout << idx<< endl;
    cout << idx2;

    for(int i = 0; i < size; i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
        if(nums[i] == smallest){
            idx = i;
        }
        if(nums[i] == largest){
            idx2  = i;
        }
    }
    cout << "smallest value index = " << idx << endl;
    cout << "largest value index = "  << idx2 << endl;
    for(int i = 0; i < size; i++){
        smallest = min(nums[i], smallest);
        idx = nums[i];
        largest = max(nums[i], largest);
    }
    


    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;


    int smallest = INT_MAX;
    for(int i = 0; i < size ; i++){
    smallest = min(nums[i], smallest);
    }

    // find smallest through loop
    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    cout << "smallest = "  << smallest << endl;



    int marks[size];
    for(int i = 0; i < size; i++){
        
        cin >> marks[i];
    }



    // loop 0 to size-1
    for(int i = 0; i < size; i++){
        cout << marks[i] << endl;
    }


    // calculate the size of array
    cout << sizeof(marks) / sizeof(int) << endl;


    // access the index
    marks[0] = 100;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    
    // 0 to size -1

    // if we write index which is not exist it will through garbge value.
    cout << marks[5] << endl;

    double price[] = {99.99 , 105.99, 67.99};

    return 0;
}
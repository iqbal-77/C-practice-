#include <iostream>
#include <climits> // INT_MIN ke liye
using namespace std;

void findInter(int arr1[], int arr2[], int size1, int size2){
    
    cout << "Intersection values: ";
    
    for(int i = 0; i < size1; i++){
        
        for(int j = 0; j < size2; j++){
            
            // Step 1: Match Dhoondo
            if(arr1[i] == arr2[j]){
                
                // Mil gaya! Print karo
                cout << arr1[i] << " ";
                
                // Step 2: "Mark" kar do (Taake dobara count na ho)
                arr2[j] = INT_MIN; 
                
                // Step 3: Break karo (Ek number ek hi baar match hoga)
                break; 
            }
        }
    }
}

int main(){
    int size1 = 6;
    int size2 = 4;
    // Thora example change kiya taake intersection dikhay
    int arr1[] = {1, 1, 2, 2, 3, 5}; 
    int arr2[] = {1, 2, 2, 3};
    
    // Logic:
    // arr1 ka pehla '1' -> arr2 ke '1' se match karega. (arr2 ka 1 ab khatam)
    // arr1 ka dusra '1' -> arr2 mn ab koi 1 nahi bacha. Skip hoga.
    
    findInter(arr1, arr2, size1, size2);
    return 0;
}
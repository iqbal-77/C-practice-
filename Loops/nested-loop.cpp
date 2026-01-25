// #include <iostream>
// using namespace std;

// int main (){

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     char ch = 'A';

//     for(int i = 0; i < n; i++){

//         for(int j = 0; j < n; j++){
//             cout << ch << " ";
//             ch += 1;
//         }
//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//    int num = 1;

//     for(int i = 0; i < n; i++){
         
//         for(int j = 0; j < num; j++){
//             cout << '*' << " ";
                        
//         }
//         num += 1;
//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
   
//     for(int i = 0; i < n; i++){

//         for(int j = 0; j < i+1 ; j++){
//             cout << '*' << " ";
//         }
        
//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     char ch = 'A';

//     for(int i = 0; i < n; i++){

//         for(int j = 0; j < i+1 ; j++){
//             cout << ch << " ";
           
//         }
//         ch += 1;
//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
    
//     for(int i = 0; i < n; i++){
//         int num = 1;
//         for (int j = 1; j <= i+1 ; j++){
//             cout << num << " ";
//             num++;

//         }
//         cout << endl;

//     }

//     int n;
//     cout << "enter number : ";
//     cin >> n;
//     for(int i = 0; i< n; i++){

//         for(int j =1; j <= i+1 ; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
    
//     // reverse loop

//     int n;
//     cout << "enter number: ";
//     cin >> n;
    
//     for(int i = 0; i < n; i++){

//         for(int j = i+1 ; j > 0 ; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         char ch = 'A'+i ;
//         for(int j = i+1; j >0; j--){
//             cout << ch <<" ";
//             ch--;
        
//         }
//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int num = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }


//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int num = 1;
//     for (int i = 0; i < n; i++){

//         for(int j = 0; j < i+1; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     int n = 5;
//     char ch = 'A';
//     for(int i = 0; i < n ; i++){

//         for(int j = 0; j < i+1; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     int m = 5;
   

//     for(int i = 0; i < m; i++){
//         char ch = 'A' + i;
//         for(int j = 0;   j < i+1; j++){
//             cout << ch << " ";
//             ch--;
//         }
//         cout << endl;
//     }
// // for(int j = 0;   j < i+1; j++)
// // for(int j = i+1; j > 0;   j--)

//     int n;
//     cout << "enter number: ";
//     cin >> n;
    
//     for(int i = 0; i < n; i++){
//         //spaces
//         for(int k = 0; k < i; k++){

//             cout << " ";
//         // numbers
//         }
//         for(int j = 0; j < n - i; j++){
//             cout << i+1;
//         }
        
//         cout << endl;
//     }
    
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     char ch = 'A';
//     for(int i = 0; i < n; i++){
        
//         // spaces 
//         for(int j = 0; j < i; j++){
//             cout << " ";

//         }
        
//         // numbers
//         for(int j = 0; j < n - i; j++){
//             cout << ch;
            
//         }
//         ch++;
//         cout << endl;
//     }


//     int n;
//     cout << "enter number :";
//     cin >> n;
    
//     for(int i = 0; i < n; i++){
//         // spaces

//         for(int j = 0; j < n-i-1; j++){

//             cout << " ";
//         }
       
//         // num
//         for(int j = 1; j <= i+1 ; j++){
//             cout << j;
           
//         }
//         // reverse num loop
        
//         for(int j = i ; j > 0; j--){
//             cout << j;
            
//         }
//         cout << endl;
//     }

//      int n;
//     cout << "enter number: ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         /// spaces
//         for(int j = 0; j < n-i-1; j++){
//             cout << "-";
//         }
//         // star1
//         cout << '*';
        
//         if(i != 0){
//             for(int j = 0; j < 2*i-1; j++){
//                 cout << "-";
//             }
//             cout << '*';
//         }

       
//         for(int i = 0; i < n-1; i++){

//             for(int j = 0; j < i; j++){
//             cout << "-";

//             }
//         // cout << "*";

//         }
        
        
//         //below part

        

//         for(int j = 0; j < 1; j++){
            
//         }


//         cout << endl;

//     }

 

//      int n;
//     cout << "enter number: ";
//     cin >> n;

//     // upper part
//     // outer loop
//     for(int i = 0; i < n; i++){
//         // spaces
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         cout << '*';

//         // spaces
        
//         for(int j= 0; j < 2*i-1; j++){
//                 cout << " ";
//             }
//         if(i != 0){
//             cout << '*';
//         }

//         cout << endl;
//     }

//     // below part
//     //outer loop
//     for(int i = n-2; i >= 0; i--){
//         //spaces
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         cout << '*';

//         // spaces
        
//         for(int j= 0; j < 2*i-1; j++){
//                 cout << " ";
//             }
//         if(i != 0){
//             cout << '*';
//         }

//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     //upper part
//     //outer loop
//     for(int i = 0; i < n; i++){
//         //stars
//         for(int j = 0; j < i+1; j++){
//             cout << '*';
//         }
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         for(int j =0; j < n-i-1; j++){
//             cout << " ";
//         }
//         for(int j= 0; j < i+1; j++){
//             cout << "*";
//         }
        
//         cout << endl;
//     }
//     // bottom part
//     // outer loop
//     for(int i = n-1; i >= 0; i--){
//         for(int j = 0; j < i+1; j++){
//             cout << '*';
//         }
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         for(int j =0; j < n-i-1; j++){
//             cout << " ";
//         }
//         for(int j= 0; j < i+1; j++){
//             cout << "*";
//         }
        
//         cout << endl;
//     }

//     int n = 4;
//     for(int i = 0; i < n; i++){
//         for (int j =1; j < n+1; j++ ){
//             cout<< j ;
//         }
//         cout << endl;
//     }    

//     int n;
//     cout << "enter number";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         char ch ='A';
//         for(int j = 0; j < n; j++){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int num = 1;
//     for(int i =0; i < n; i++){

//         for(int j =0; j < n; j++){
//             cout << num;
//             num++;
//         }
//         cout << endl;
//     }

//     int n;
//     cout << "enter number:";
//     cin >> n;
 
//     for(int i = 0; i < n; i++){
//         char ch = 'A'+i;
//         for(int j = i+1; j > 0; j--){
//             cout << ch;
//             ch--;
//         }
        
//         cout << endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int num = 1;
//     for(int i = 0; i < n; i++){
//         //spaces
//         for(int j = 0; j < i; j++){
//             cout << "-";
//         }
//         //numbers
//         for(int j = 1; j <= n-i; j++){
//             cout << num;
//         }
//         num++;
//         cout << endl;
//     }


//     int n;
//     cout << "enter number:";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         //spaces
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         //numbers1
//         for(int j = 1; j <= i+1; j++){
//             cout << j;
//         }
//         //numbers2
//         for(int j = i; j > 0; j--){
//             cout << j;
//         }

//         cout<< endl;
//     }

//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         //spaces
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         cout << '*';
//         //spaces 
//         if(i != 0){
//             for(int j = 0 ; j < 2*i-1; j++){
//                 cout << " ";
//             }
//             cout << '*';
//         }
//         cout << endl;
//     }
//     // bottom part 
//     // outer loop
//     for(int i = 0; i < n-1; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << " ";
//         }
//         cout << '*';
//         //spaces 
        
//             for(int j = 0 ; j < 2*(n-2-i)-1; j++){
//                 cout << " ";
//             }
//         if(i != n-2){
//             cout << '*';
//         }
//         cout << endl;
//     }

//     int n;
//     cout<< "enter number: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
       
//         for(int j = 0; j < i+1; j++){
//             cout << "*";
//         }
//         //spaces
//         for(int j = 0; j < 2*(n-i-1); j++){
//             cout << " ";
//         }
//         for(int j =0; j < i+1; j++){
//             cout <<'*';
//         }
//         cout << endl;
//     }
//     for(int i = n-1; i >= 0; i--){
        
//         for(int j = 0; j < i+1; j++){
//             cout << "*";
//         }
//         //spaces
//         for(int j = 0; j < 2*(n-i-1); j++){
//             cout << " ";
//         }
//         for(int j =0; j < i+1; j++){
//             cout <<'*';
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    // outer loop
    // upper part
    for(int i = 0; i < n; i++){
        // spaces
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        //stars
        cout << "*";
       if(i != 0){
         //spaces
        for(int j = 0; j < 2*i-1; j++){
            cout << " ";
        }
        // star
        cout << '*';
       }
        cout << endl;
    }

    for(int i = n - 2; i >=0; i--){
          // spaces
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        //stars
        cout << "*";
       if(i != 0){
         //spaces
        for(int j = 0; j < 2*i-1; j++){
            cout << " ";
        }
        // star
        cout << '*';
       }
        cout << endl;
    }
    return 0;
}
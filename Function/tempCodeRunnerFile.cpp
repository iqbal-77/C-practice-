
void fib(int n){
    int a = 0;
    int b = 1;
    cout << a << " ";
    cout << b << " ";

    for(int i = 2; i < n; i++){
        int next = a+b;
        cout << next << " ";

        a = b;
        b = next;
    }
}


int main() {
// // function call , invoke
    int n;
    cout << "enter number: ";
    cin >> n;
    fib(n);
#include<iostream>
using namespace std;

void pattern5(int n){

    for ( int i=0 ; i<n ; i++){
        for( int j=0 ; j<=i ; j++ )
            cout << " ";
        for( int j=0 ; j<n-i ; j++ )
            cout << "*";
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter number of rows:";
    cin >> n;

    pattern5(n);

    return 0;
}
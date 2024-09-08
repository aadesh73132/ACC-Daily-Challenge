#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of rows for the pattern: ";
    cin >> N;

    for (int i = 0; i < N/2; i++) {
        for (int j = 0; j < N/2 - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < N/2 - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

for (int i = 0; i < N/2; i++)
{
    for(int j = 0; j < N/2 - (N/2 - (i+1)) ; j++){
        cout<<"*";
    }

    for (int j = 0; j < 2*N/2 - (2*i+1); j++)
    {
        cout<<" ";
    }

    for (int j = 0; j < N/2 - (N/2 - (i+1)); j++)
    {
        cout<<"*";
    }
    cout<<endl;
    

}















/*
    for (int i = N/2 ; i >= 0; i--) {
        for (int j = 0; j < N/2 - i + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i/2 - 1 ; j++) {
            cout << " ";
        }
        for (int j = 0; j < N/2 - i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    */

    return 0;
}
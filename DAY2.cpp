/*
printing this below star pattern
  *  
 *** 
*****   
*/


#include<iostream>
using namespace std;

void nStarTriangle(int n) {

  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    // star between spaces
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }

    // last spaces
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    cout << endl;
  }
}

int main(){
    int n = 3;
    nStarTriangle(n);

return 0;
}
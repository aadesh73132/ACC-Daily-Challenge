#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int missingNumber(int n, vector<int> &arr)
{

 //   sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != (i + 1))
        {
            return i + 1;
        }
    }

    return n;
}

int main()
{
    vector<int> arr = {1,2,3,5};

    cout<<missingNumber(5,arr);


    return 0;
}

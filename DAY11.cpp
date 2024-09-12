#include <iostream>
#include <bits\stdc++.h>
#include <vector>
using namespace std;

int thirdLargest(vector<int> &arr)
{

    if (arr.size() < 3)
        return -1;

    sort(arr.begin(), arr.end());
    return arr[arr.size() - 3];
}
int main()
{
    vector<int> v = {2, 4, 1, 3, 5};

    int res = thirdLargest(v);
    cout << "the third largest element in the array is:" << res << endl;

    return 0;
}
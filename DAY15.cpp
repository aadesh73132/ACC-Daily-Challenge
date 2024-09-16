#include<iostream>
using namespace std;

int product(int arr[], int n)
    {
        int mul=1;
        for(int i=0;i<n;i++){
            mul=mul*arr[i];
        }
        return mul;
        
    }

int main()
{
    int size;
    cin>>size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int res = product(arr,size);

    cout<<"the multiplication of array element is: "<<res<<endl;
    



return 0;
}
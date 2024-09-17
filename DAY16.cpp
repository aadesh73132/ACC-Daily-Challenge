#include<iostream>
#include<vector>
using namespace std;

int findFrequency(vector<int> Arr, int X){
    
    int n = Arr.size();
    
    int count=0;
    for(int i=0;i<n;i++){
        if(Arr[i]==X){
            count++;
        }
    }
    return count;
    
}

int main()
{
    int N;
    cout<<"enter the size of vector :"<<endl;
    cin>>N;

    vector<int> v(N);
    
    for (int i = 0; i < N; i++)
    {
        cin>>v[i];
    }

    int x;
    cout<<"enter the element you wan't to find frequency of:"<<endl;
    cin>>x;

    int res=findFrequency(v,x);

    cout<<"the frequency of element x is:"<<res<<endl;
    

return 0;
}
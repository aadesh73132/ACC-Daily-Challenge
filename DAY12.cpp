#include <iostream>
#include<vector>
using namespace std;
    
    bool arraySortedOrNot(vector<int>& arr) {
        
        
        int n=arr.size();
        
        for(int i=0;i<n-1;i++){
            
            if(arr[i]<=arr[i+1]){
                continue;
            }
            else{
                return false;
            }
        }           
    
        return true;
    }

    int main()
    {
    vector<int> arr = {90,20,20,30,40,50};

    bool ans=arraySortedOrNot(arr);
    if(ans==0){
        cout<<"array is not sorted"<<endl;
    }
    else{
        cout<<"array is sorted"<<endl;
    }

    return 0;
    }
#include<iostream>
using namespace std;

int peakelementindex(int *arr,int n)
{
    if(n==1){
        return 0;
    }

    for(int i=0;i<n;i++){
        //checking for 1st elemnt of array
        if (i==0)
        {
            if (arr[i]>=arr[i+1])
            {
                return i;
            } 
        }
        
        //checking for last element of the array that it is peak or not
        else if(i==n-1){
            if(arr[i]>=arr[i-1]){
                return i;
            }
        }

        //checking the middle one's
        else{
            if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
                return i;
            }
        }

        
    }
    //there is no peak element in the array
    return -1;

}

int main(){
    int arr[5]={1,3,5,10,2};
    
   cout<<peakelementindex( arr, 5);
   

    return 0;

return 0;
}
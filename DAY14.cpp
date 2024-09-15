    #include<iostream>
    #include<vector>
    using namespace std;
    
    void segregateElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> newArr(n);
        int k=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                newArr[k++]=arr[i];
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                newArr[k++]=arr[i];
            }
        }
        
        for(int i=0;i<n;i++){
        arr[i]=newArr[i];
        }
        
    }

int main(){
    vector<int> v={1,-7,2,-5,8,9};
    segregateElements(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}
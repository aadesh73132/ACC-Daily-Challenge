#include<iostream>
#include<bits\stdc++.h>
#include<vector>
using namespace std;

    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        
        //step1 sort the array
        sort(arr.begin(),arr.end());
        
        int left=0;
        int right=arr.size()-1;
        
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==0){
                ans.push_back({arr[left],arr[right]});
                
                //skip over duplicates for left pointer
                while(left<right && arr[left]==arr[left+1]){
                    left++;
                }
                //skip over duplicates for right pointer
                while(left <right && arr[right]==arr[right-1]){
                    right--;
                }
                left++;
                right--;
            }
            
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
     
    }  
int main(){
    vector<int> v={-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res =  getPairs(v);
    
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res.size();j++){
        cout<<res[i][j];
    }}
    


return 0;
}
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<set>
using namespace std;

    vector<int> duplicates(vector<int> arr) {
        // code here
        set<int> v;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    v.insert(arr[i]);
                    break;
                }
            }
        }
        
        if(v.empty()){
            return {-1};
        }
        
        vector<int> ans(v.begin(),v.end());
        sort(ans.begin(),ans.end());
        return ans;
    }

int main(){
    vector<int> arr = {2,3,1,2,3};
    vector<int> res = duplicates(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    


return 0;
}
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

#include<iostream>
#include <utility>
using namespace std;

pair<int,int> getsumpair(int *arr,int t,int n)
{
    pair<int,int> ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+arr[i+1]==t)
        {
            ans.first = i;
            ans.second=i+1;
            break;
        }

    }
    return ans;
}


 
int main()
{
    int size;
    cin>> size;
    int *arr=new int[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter the value of the target :"<<endl;
    cin>>target;

    pair<int,int> res=getsumpair(arr,target,size);

    cout<<res.first<<","<<res.second<<endl;

return 0;
}
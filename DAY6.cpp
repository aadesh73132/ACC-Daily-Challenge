#include<iostream>
#include<string>
#include<bits\stdc++.h>
using namespace std;

int LengthOfString(string s)
{
    int count = 0;
    for (int i = 0; i < s[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    string str;
    cout<<"enter the string :"<<endl;
    cin>>str;

    int len = LengthOfString(str);
    cout<<"the length of string without using strlen function is :"<<len<<endl;

return 0;
}
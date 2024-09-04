#include<iostream>
using namespace std;

//below is the function to find HCF AND GCD of two numbers
int gcd(int a,int b)
{
    if(a == 0){
        return b;
    }

    return gcd(b%a,a);
}

//below is the function to find lcm of two number or we can say relation between lcm and hcf
int lcm(int a, int b)
{
    int ans = (a / gcd(a, b)) * b;
    return ans;
}

int main(){
    int a,b;
    cout<<"enter the value of a and b :"<<endl;
    cin>>a>>b;

    int ans = gcd(a,b);
    cout<<"gcd of two numbers a and b is :"<<ans<<endl;

    int c = 15, d = 20; 
    cout<<" lcm of c and d is :"<<lcm(c,d)<<endl;

return 0;
}
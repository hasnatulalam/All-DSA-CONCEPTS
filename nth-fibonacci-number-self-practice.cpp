#include<iostream>
using namespace std;

int nthfibonacci(int n)
{

    if(n<=1)
    {
       return n;
    }
    else{
        return nthfibonacci(n-1)+nthfibonacci(n-2);
    }

}
int main()
{

    int a;
    cin>>a;
    int ans=nthfibonacci(a);
    cout<<ans<<endl;
}

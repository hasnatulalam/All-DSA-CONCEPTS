#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
        else
        {
           return 0;
        }
    }
}
int main()
{

    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"not  a prime number"<<endl;
    }
    else{
        cout<<"is a prime number"<<endl;
    }
}

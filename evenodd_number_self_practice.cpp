#include<iostream>
using namespace std;

bool isEvanOdd(int n)
{

    if(n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }




}
int main()
{

    int number;
    cin>>number;
    if(isEvanOdd(number))
    {
        cout<<"number is Evan"<<endl;
    }
    else
    {
        cout<<"number is odd"<<endl;
    }
}

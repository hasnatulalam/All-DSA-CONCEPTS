#include<iostream>
using namespace std;
int fibonnaciSeries(int n){

 int a =0;
 int b =1;
 int i=1;
 while(i<n){
    int c=a+b;
    i++;
    a=b;
    b=c;


 }
 return a;
}
int main(){
int n;
cin>>n;
cout<<(fibonnaciSeries(n));

}

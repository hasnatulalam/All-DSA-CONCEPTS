#include<iostream>
using namespace std;
bool isEvan(int a){
    if(a&1){
      //(a&1==true) then it odd;
        return 0;
    }
    else{
        return 1;
    }
}
int main(){

int b;
cin>>b;
if(isEvan(b)){
    cout<<b<<" is even Number"<<endl;
}
else{
    cout<<b<<" is odd Number"<<endl;
}


}

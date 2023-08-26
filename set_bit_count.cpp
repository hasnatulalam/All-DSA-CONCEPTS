#include<iostream>
using namespace std;
int AsetBits(int A){
    int count =0;

while(A!=0){

    if(A&1){
         count++;
    }
    A=A>>1;



}
return count;
}
int BsetBits(int B){
int counting =0;
while(B!=0){

    if(B&1){
        counting++;
    }
    B=B>>1;


}

return counting;
}
int main(){

int a,b;
cin>>a>>b;
int ans1 =AsetBits(a);
int ans2 =BsetBits(b);
int totalSetBits =ans1+ans2;
cout<<totalSetBits<<endl;

}







#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,next,n;
    next =n1+n2;
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<"Fibonacci: "<<n1<<" "<<n2 <<" ";
   for(int i=3;i<=n; i++){
    cout<<next<<" ";
    n1=n2;
    n2=next;
    next=n1+n2;
   }
   return 0;
}


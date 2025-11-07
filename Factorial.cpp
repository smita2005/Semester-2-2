#include<iostream>
using namespace std;
int main(){
    int num,i;
    long long fact = 1;
    cout<<"Enter a number:";
    cin>>num;
    for(i=1; i<=num; i++){
        fact= fact*i;
    }
    cout<<"Factorial is:"<<fact<<endl;
    return 0;
}

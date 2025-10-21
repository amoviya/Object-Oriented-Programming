#include<iostream>
using namespace std;

int main(){
    int a=5;
    double b=6.6 ,c= 5.5;
    cout<<"value of b"<<b<<endl;
    b=a;
    b=(double)a;
    cout<<"value of b: "<<b<<endl;
    a=c;
    a =(int)c;
    cout<<"value of a"<<a<<endl;
    return 0;
}
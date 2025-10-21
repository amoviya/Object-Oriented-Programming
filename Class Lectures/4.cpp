#include<iostream>//8oct25
using namespace std;
class A{
    public:
      int a;
};
class B{
    public:
    int b;
};
//casting of unrelated class wont work
int main(){
    A* oa;
    B* ob;
    //oa=ob;//pointers do not support implicit casting
    oa=(A*)ob;
    oa->a=4;
    cout<<"value of a is "<<oa->a<<endl;
    return 0;
}
#include<iostream>
using namespace std;
template <typename T >
void fun(T *a,T *b)
{
    T x;
    x=*a;
    *a=*b;
    *b=x;
}
int main()
{
    int a=9,b=8;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    fun<int>(&a,&b);
    cout<<"After swapping the valus: "<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl; 
    return 0;
}
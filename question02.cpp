#include<iostream>
using namespace std;
template <typename T >
T fun(T a,T b)
{
    return a>b?a:b;
}
int main()
{
    cout<<fun<int>(6,8);
    return 0;
}
#include<iostream>
using namespace std;
template <typename T >
T fun(T a,T b,T c)
{
    return a>b?a>c?a:c:b>c?b:c;
}
int main()
{
    cout<<fun<int>(6,8,10);
    return 0;
}
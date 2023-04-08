#include<iostream>
using namespace std;
template <typename T >
T fun(T a,T b)
{
    return a+b;
}
int main()
{
  cout<<fun<int>(3,4)<<endl;
  cout<<fun<float>(3.5,6.98)<<endl;
  cout<<fun<double>(7.88888,9.9999991)<<endl;
  cout<<fun<char>(60,5)<<endl;
    return 0;
}
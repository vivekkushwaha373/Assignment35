#include<iostream>
using namespace std;
template <typename T >
T fun(T *arr,int size)
{
    T s=0;
    for(int i=0;i<size;i++)
    {
    
      s=s+arr[i];
    }
    return s;
}
int main()
{
    int arr[]={1,3,8,9,1,4,1,8,4};
    int size=sizeof(arr)/sizeof(int);
  
    cout<<fun<int>(arr,size);
    return 0;
}
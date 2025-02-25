#include<iostream>
using namespace std;

int main()
{
    int n,sum;cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
    cin>>array[i];
    sum+=array[i];}
    cout<<sum<<endl;
    return 0;
}
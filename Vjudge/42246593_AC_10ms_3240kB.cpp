#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int arr[5];
    unordered_set<int>ar;
    for(int i=0;i<5;i++){
    cin>>arr[i];
    ar.insert(arr[i]);
    }
    cout<<ar.size();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr1[n], arr2[n];
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr1[i];
    for (int i=0; i<n; i++) arr2[i]=arr1[i];
    cout<<endl<<"The elements of the Array are: ";

    for (int i=0; i<n; i++) cout<<arr2[i]<<" ";
    cout<<endl;

    return 0;
}

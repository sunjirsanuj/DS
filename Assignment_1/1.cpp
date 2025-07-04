#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr[i];
    cout<<endl<<"The elements of the Array are: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}

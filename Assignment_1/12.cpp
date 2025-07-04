#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr[i];

    int index;
    cout<<endl<<"In which position's value you want to remove?: ";
    cin>>index;
    index--;

    for (int i=index; i<n; i++) arr[i] = arr[i+1];
    n--;

    cout<<endl<<"New Array elements are: ";
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

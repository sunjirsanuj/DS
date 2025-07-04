#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr[i];

    int index, value;
    cout<<endl<<"In which position you want to insert value?: ";
    cin>>index;
    index--;
    n++;
    cout<<endl<<"What value you want to insert: ";
    cin>>value;

    for (int i=n-1; i>=index; i--) arr[i] = arr[i-1];
    arr[index] = value;
    cout<<endl<<"New Array elements are: ";
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

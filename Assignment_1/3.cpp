#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum = 0;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr[i];
    int i=0;

    while(i<n){
        sum += arr[i];
        i++;
    }
    cout<<endl<<"Summation of the Array's elements is: "<<sum<<endl;

    return 0;
}

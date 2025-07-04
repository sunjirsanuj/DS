#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    vector<int> odd_arr, even_arr;
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr[i];

    for (int i=0; i<n; i++){
        if (arr[i]%2==0) even_arr.push_back(arr[i]);
        else odd_arr.push_back(arr[i]);
    }

    cout<<endl<<"Odd elements of the Array are: ";
    for (int o:odd_arr) cout<<o<<" ";
    cout<<endl<<"Even elements of the Array are: ";
    for (int e:even_arr) cout<<e<<" ";
    cout<<endl;

    return 0;
}

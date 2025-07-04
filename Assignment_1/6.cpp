#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the Array: ";
    vector<int>uniqe_element;
    for (int i=0; i<n; i++) cin>>arr[i];

    for (int i=0; i<n; i++){
        int c = 0;
        for (int j=0; j<n; j++){
            if (arr[i] == arr[j]) c++;
        }
        if (c == 1) uniqe_element.push_back(arr[i]);
    }

    cout<<endl<<"Unique elements are: ";
    for (int num:uniqe_element) cout<<num<<" ";
    return 0;
}

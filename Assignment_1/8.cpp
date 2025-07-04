#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr[i];

    int max_v = arr[0], min_v = arr[0];
    for (int i=1; i<n; i++){
        if (max_v < arr[i]) max_v = arr[i];
        if (min_v > arr[i]) min_v = arr[i];
    }

    cout<<endl<<"Maximum element of the Array is: "<<max_v<<endl;
    cout<<"Minimum element of the Array is: "<<min_v;
    cout<<endl;

    return 0;
}

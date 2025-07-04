 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr[i];

    bool isP[n] = {false};
    int d = 0;

    for (int i=0; i<n; i++){
        int c = 0;
        if (isP[i]) continue;

        for (int j=0; j<n; j++){
            if (arr[i] == arr[j]){
              c++;
              isP[j] = true;
            }
        }
        if (c > 1) d++;
    }

    cout<<endl<<"Total duplicate elements are: "<<d<<endl;
    return 0;
}

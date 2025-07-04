#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element of the Array: ";
    cin>>n;
    int arr[n];
    vector<int> element, frq;
    cout<<endl<<"Enter the elements of the Array: ";

    for (int i=0; i<n; i++) cin>>arr[i];
    bool isP[n] = {false};
    for (int i=0; i<n; i++){
        int c = 0;
        if (isP[i]) continue;
        for(int j=0; j<n; j++){
            if (arr[i] == arr[j]){
                c++;
                isP[j] = true;
            }
        }
        element.push_back(arr[i]);
        frq.push_back(c);
    }

    cout<<endl<<"Frequencys of the elements: "<<endl<<endl;
    for (int i=0; i<element.size(); i++) cout<<"Frequency of "<<element[i]<<" is: "<<frq[i]<<endl;

    return 0;
}

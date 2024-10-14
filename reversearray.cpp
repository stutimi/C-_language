#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int brr[t];
    for(int i = 0; i<t; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<t; i++){
        brr[i] = arr[t-i];
    }
    for(int i = 0; i<t; i++){
        arr[i]=brr[i];
    }
    for(int i = 0; i<t; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}



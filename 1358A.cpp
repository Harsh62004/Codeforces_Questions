#include <iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    int arr[t][2];
    for(int i=0;i<t;i++){
        cin>>arr[i][0]>>arr[i][1];
    }

    for(int j=0;j<t;j++){
        int p=arr[j][0] * arr[j][1];
        if(p%2==0){
            cout<<p/2<<endl;
        }
        else{
            cout<<(p+1)/2<<endl;
        }
    }

    return 0;
}
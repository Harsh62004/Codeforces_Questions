#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    cout<<endl;

    while(t--){
        string s;
        cin>>s;
        int len;
        len=s.length();
        if(len>10){
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    


    return 0;
}
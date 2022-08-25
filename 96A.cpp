#include <iostream>
using namespace std;
int main (){
    string s;
    cin>>s;
    int c=0;
    int len=s.length();
    if (s.find("0000000") != string::npos){
        cout<<"YES";
    }
   else if (s.find("1111111") != string::npos){
        cout<<"YES";
   }
   else{
        cout<<"NO";
   }
    
    return 0;
}
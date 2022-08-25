#include <iostream>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    int len=str.size();
    int sum =0;
    int flag[26]={0};
    for(int i=0;i<len;i++){
        int temp = str[i]-'a';
        flag[temp]=1;
    }
    for(int j=0;j<26;j++){
        sum+=flag[j];
    }
    if(sum%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
    
}
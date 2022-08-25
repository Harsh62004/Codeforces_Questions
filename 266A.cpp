#include<iostream>

using namespace std;

int main(){

    int n;
       cin>>n;
       string s;
       cin>>s;
       
       int cnt=0;
       int i;
       for(i=0;i<s.length()-1;++i)
         {
             if(s[i]==s[i+1])
                 cnt++;
         }
         
        cout<<cnt; 
	return 0;
    /*string s;
    int q,a,b,c;
    cin >> q;
    cin >> s;
    a = s.length();
    for(int i=0;i<q;i++){
        if((s[i]=='R'&&s[i+1]=='R')||(s[i]=='G'&&s[i+1]=='G')||(s[i]=='B'&&s[i+1]=='B')){
            s.erase(i+1,i+1);
        }
    }
    b = s.length();
    c = a - b;
    if((s[0]=='R'&&s[1]=='R')||(s[0]=='G'&&s[1]=='G')||(s[0]=='B'&&s[1]=='B')){
        cout << c+1;
       }
    else{ 
        cout << c;
       }

       return 0;string s;
    int q,a,b,c;
    cin >> q;
    cin >> s;
    a = s.length();
    for(int i=0;i<q;i++){
        if((s[i]=='R'&&s[i+1]=='R')||(s[i]=='G'&&s[i+1]=='G')||(s[i]=='B'&&s[i+1]=='B')){
            s.erase(i+1,i+1);
        }
    }
    b = s.length();
    c = a - b;
    if((s[0]=='R'&&s[1]=='R')||(s[0]=='G'&&s[1]=='G')||(s[0]=='B'&&s[1]=='B')){
        cout << c+1;
       }
    else{ 
        cout << c;
       }

       return 0;*/
}

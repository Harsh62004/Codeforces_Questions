#include <iostream>
using namespace std;
string a;
int lo = 0, up = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 97) up++;
        else lo++;
    }
    if (lo >= up) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] < 97) {
                a[i] = (char) (a[i] + 32);
            }
        }
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] > 96) {
                a[i] = (char) (a[i] - 32);
            }
        }
    }
    cout << a;
}

/*#include <iostream>
using namespace std;
int main (){
    string a;
    cin>>a;
    int len=a.length();
    for(int i=0;i<len;i++){
        if (a[i]<=90){
                a[i] = (char) (a[i] + 32);
        }
        else if(a[i]>=97){
            a[i] = (char) (a[i] - 32);
            
        }
        else{
            continue;
        }
    } 
    
    cout<<a;

    return 0;
}
*/
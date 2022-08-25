#include <iostream>
using namespace std;

int mas[16] = {
        2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
        31,
        37,
        41,
        43,
        47
};
int main() {
    int a, b, h = 0;
    cin >> a >> b;
    for (int i = 0; i < 15; i++) {
        if (a == mas[i] && b == mas[i + 1]) {
            h++;
            break;
        }
    }
    if (h == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}

/*#include <iostream>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    int p=0;
    if(a>=2){
        if(a<b){
            for(int i=2;i<b;i++){
                if(b%i==0){
                    p=0;
                    break;
                }
                else{
                    for(int j=a+1;j<b;j++){
                        if((j%2==0) || (j%3==0) ||(j%5==0)){
                            p=0;
                            continue;
                        }   
                        else{
                            if(j==b){
                                p=1;
                                break;
                            }
                            else{
                                p=0;
                            }
                        }
                    }
                }
            }
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }

    if(p==1){
        cout<<"YES";
   
    }
    else if(p==0){
        cout<<"NO";


    }

    return 0;
}*/

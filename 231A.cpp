#include <iostream>
using namespace std;
int main ()
{
    int n,s,ans,a[4],i;
    while (cin>>n)
    {
        s=0;
        while (n--)
        {
            ans=0;
            for (i=0;i<3;i++)
            {
                cin>>a[i];
                if (a[i]==1)
                    ans++;
            }
            if (ans>=2)
                s++;
        }
        cout<<s<<endl;
    }
    return 0;
}

/*#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    int c;
    int count;
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                c++;
            }
            else{
                continue;
            }
        }
        if(c>=2){
            count++;
            
        }
        else{
            continue;
        }
    }

    cout<<count;

    return 0;
}*/
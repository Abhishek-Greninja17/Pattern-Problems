/*
4
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int g1=n-1;
    int g2=0;
    for(i=1; i<=n; i++){
        for(j=1; j<=g1; j++){
            cout<<" ";
        }
        cout<<"*";
        for(j=g2; j>0; j--){
            cout<<" ";
        }
        if(g2!=0){
            cout<<"*";
            g2+=2;
        }
        else{
            g2++;
        }
        g1--;
        cout<<endl;
    }
    g1=1;
    g2-=4;
    for(i=1;i<n;i++){
        for(j=1; j<=g1; j++){
            cout<<" ";
        }
        cout<<"*";
        for(j=g2; j>0; j--){
            cout<<" ";
        }
        if(g2>0){
            cout<<"*";
        }
        g2-=2;
        g1++;
        cout<<endl;
    }

    return 0;
}

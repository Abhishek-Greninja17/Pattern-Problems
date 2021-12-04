/*
4
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int g1=n-1;
    int k=1;
    for(i=1; i<=n; i++){
        for(j=1; j<=g1; j++){
            cout<<" ";
        }
        for(j=1;j<=k;j++){
            cout<<"*";
        }
        g1--;
        k+=2;
        cout<<endl;
    }
    g1=1;
    k-=4;
    for(i=1;i<n;i++){
        for(j=1; j<=g1; j++){
            cout<<" ";
        }
        for(j=1;j<=k;j++){
            cout<<"*";
        }
        g1++;
        k-=2;
        cout<<endl;
    }

    return 0;
}

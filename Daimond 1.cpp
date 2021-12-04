/* 
5
    1
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int k=1;
    int g1=n-1;
    int g2=0;
    for(i=1; i<=n; i++){
        for(j=1; j<=g1; j++){
            cout<<" ";
        }
        cout<<k;
        for(j=g2; j>0; j--){
            cout<<" ";
        }
        if(g2!=0){
            cout<<k;
            g2+=2;
        }
        else{
            g2++;
        }
        k++;
        g1--;
        cout<<endl;
    }
    k=n-1;
    g1=1;
    g2-=4;
    for(i=1;i<n;i++){
        for(j=1; j<=g1; j++){
            cout<<" ";
        }
        cout<<k;
        for(j=g2; j>0; j--){
            cout<<" ";
        }
        if(g2>0){
            cout<<k;
        }
        g2-=2;
        g1++;
        k--;
        cout<<endl;
    }

    return 0;
}

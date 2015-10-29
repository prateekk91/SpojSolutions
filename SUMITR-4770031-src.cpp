#include<iostream>
using namespace std;
int main(){
int i,j,t,a[100][100],n;cin>>t;while(t--){cin>>n;for(i=0;i<n;i++)for(j=0;j<=i;j++)cin>>a[i][j];for(i=n-2;i>=0;i--)for(j=i;j>=0;j--)a[i][j]+=max(a[i+1][j],a[i+1][j+1]);cout<<**a<<'\n';}
return 0;}

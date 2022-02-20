#include <bits/stdc++.h>

using namespace std;
int dp[1001][1001];
int LIS(int a[],int b[],int n,int m){
    int len=0;

     for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
             if(i==0||j==0)
        return 0;

            if(a[i-1]==b[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    return dp[n][m];
}
int main()
{
    int n=5;int m=5;
    int a[]={5,4,3,2,33};
    int b[]={5,4,3,2,1};


    cout<<LIS(a,b,n,m);
    cout << "Hello world!" << endl;
    return 0;
}

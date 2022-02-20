#include <bits/stdc++.h>

using namespace std;



// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,b,i,j,k=0,w,count=0,pos=0,flag=0;
        string s,p,m;
        cin>>s>>p;
        n=s.length();
        b=p.length();
        char c;
        for(i=0;i<b;i++){
        for(j=0;j<n;j++)
             if(p[i]==s[j]){
             w=j;

             s.erase(s.begin()+w);
             break;
             }
             cout<<s.length()<<endl;
              cout<<s<<endl;
        }

        int d=s.length();
        sort(s.begin(),s.end());
        cout<<s<<endl;
        for(i=0;i<d;i++){
             if(s[i]>p[0]){
                pos=i;
                break;
                }
                else if(s[i]<p[0]) {count++;
                pos=count;}
    }
        s.insert(pos,p);
        cout<<s<<endl;
    }


    return 0;
}
/*
3
akramkeeanany
aka
supahotboy
bohoty
daehabshatorawy
badawy
*/

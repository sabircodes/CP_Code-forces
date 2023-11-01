#include<bits/stdc++.h>
using namespace std;



void solve()
{
    string s ;
    cin>>s;
    int n = s.size();
    int N = 2*n;


    string s1 = "", s2="";

    for(int i=0;i<n;i++)
          {
            s1+="()";

          }

  for(int i=0;i<n;i++)
  {
    
    s2+="(";
   
  }

  for(int i=n;i<N;i++)
  {
    
    s2+=")";
   
  }

 
   string ans="";

   if(s1.find(s)==string::npos)
       ans = s1;
   if(s2.find(s)==string::npos)
       ans =s2;

   if(ans!="")
      {
        cout<<"YES\n";
        cout<<ans<<"\n";
      }
      else
      {
        cout<<"NO\n";
      }
}

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    #endif

     int t;
     cin>>t;
     while(t--)
          solve();
    
}

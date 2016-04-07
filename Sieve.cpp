#include<bits/stdc++.h>

using namespace std;

vector<int> sieve(int A) {
    A=10000;
    vector<int> v(A+1);
    vector<int> ans;
    int n=A;

    for(int i=0;i<=n;i++) //sieve
    {
        v[i]=0;

    }

    for(int i=2;i<=n;i++)
    {
        int j=2;
     if(v[i]==0)
     {
        while(i*j<=n)
        {
        v[i*j]=1;
        j++;
        }
    }
    else{}

    }   //sieve


   int k=0;
  for(int i=2;i<=A;i++)
   {
     if(v[i]==0)
     ans.push_back(i);
    //cout << i << "  ";
   }

   for(int i=0;i<ans.size();i++)
   {
   cout << ans[i] << " "; // cout << "FDSfsfsd" <<endl ;
   }
   int p=ans.size();
   return (ans);


}


int main()
{
    int A=10000;
    vector<int> a = sieve(A);
   // cout << a.size();
}

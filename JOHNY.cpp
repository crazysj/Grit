//#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll int n,k,temp;
        cin >> n;
        vector <ll int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin >> temp;
           v[i]=temp;
        }
        cin >> k;
        ll int temp1=0,temp2;
        temp2=v[k];

        sort(v.begin()+1,v.end());

        int i=1;
            while(v[i]<=temp2)
               {
                // cout << v[i] << " " ;
                 temp1++;
                 i++;
               }

        cout << temp1 << endl;


    }

    return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll int n,k,temp;
        cin >> n;
        vector <ll int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin >> temp;
           v[i]=temp;
        }
        cin >> k;
        ll int temp1=0,temp2;
        temp2=v[k];

        sort(v.begin()+1,v.end());

        int i=1;
            while(v[i]<=temp2)
               {
                // cout << v[i] << " " ;
                 temp1++;
                 i++;
               }

        cout << temp1 << endl;


    }

    return 0;
}

//https://www.codechef.com/problems/TWTCLOSE
// C++14
#include<bits/stdc++.h>
using namespace std;
vector <bool> v(1001);
int n;
int initialize()
{
        for(int r=0; r<1001; r++)
              v[r]=0;

}
int counttweet()
{
    int cnt=0;
    for(int j=1;j<1001;j++)
        {
            if(v[j] == 1)
              cnt++;
        }
    cout << cnt  << endl;
    return 0;
}

int main()
{
        initialize();
 //       vector<bool>::iterator it ;

        int k,aa;

        cin >> n;
        cin >> k;
        cin.ignore();

        for(aa=0; aa<k; aa++)
        {
        string s;
        cin >> s;
        //getline(cin,s);

        //int as;
        //cin >> as;
        if( s == "CLOSEALL" )
        {
            v.clear();
            cout << "0" << endl;
            initialize();
        }

        else
        {
            string s2;
            cin >> s2;
            int i;
            i = stoi(s2); //c++11


            if( v[i]==1 )
                v[i] = 0;

            else
                v[i] = 1;

            counttweet();
        }


        }
    return 0;
}

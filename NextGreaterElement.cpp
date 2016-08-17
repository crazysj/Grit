#include<iostream>
#include<cstdlib>  // rand()
#include<stack>
#include<map>
#include<cstring>  //memset
using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
     a[i]=rand()%100;
     cout << a[i] <<" ";
    }
    cout <<"\n";
    stack<int> s;
   // map<int,int> next;
    for(int i=0;i<10;i++)
    {
        while( (!s.empty()) && s.top() < a[i] )     // if stack is not empty pop out all elements
        {                                           // and mark their next as a[i]
           //next[s.top()]=a[i];
           cout << s.top() <<" " << a[i] << endl;
           s.pop();
        }
        s.push(a[i]);                              // push a[i] to find its next

    }
    while(!s.empty())                             // at the end pop all the elements and mark their next as -1
        {
            //next[s.top()]=-1;
            cout << s.top() <<" " << "-1" << endl;
            s.pop();
        }

      //Uncomment all to store all next and print at the end of program
    /* map<int,int>::iterator it=next.begin();
       for(it;it!=next.end();it++)
       cout << it->first << " " << it->second << "\n";*/

    return 0;
}

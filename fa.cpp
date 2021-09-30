//bishow
/**Code will be ac once!!!**/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define Bishwo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define kaj_shesh return 0

int main()
{
    Bishwo();
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;

        int a=0,b=0,c=0;
        for(auto i:s)
        {
            if(i=='A')
                a++;
            else if(i=='B')
                b++;
            else
                c++;
        }

        if(b==a+c)
            yes;
        else
            no;
    }

    kaj_shesh;
}
               /* Ho Ja Bhai */
/*


*/

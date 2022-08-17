#include <iostream>
using namespace std;
void fun1(int z)
{
    while(z%2==0)
    {
        z=z/2;
    }
    if(z==1) cout<<"Yes"<<endl;
    if(z>1  ) cout<<"No"<<endl;
}
void fun(int t)
{
    if(t>0)
    {
        int a,b;
        cin>>a>>b;
        if(a,b>=1 && a,b<=50)
        {
            if(a==b) cout<<"YES"<<endl;
            else if(a>b && (a%b==0)) fun1(a/b);
            else if(b>a && (b%a==0)) fun1(b/a);
            else
            {
                cout<<"NO"<<endl;
            }
        }
        fun(t-1);
    }
}
int main() {
    int t;
    cin>>t;
    if(t>=1 && t<=2500)
    {
        fun(t);
    }
	return 0;
}

#include <iostream>
using namespace std;
void fun(int t)
{
    if(t>0)
    {
        int x=0;
        cin>>x;
        if(x>=1 && x<=30)
        {
            cout<<(2*x)<<endl;
            fun(t-1);
        }
    }
}
int main() {
    int t;
    cin>>t;
    if(t>=1 && t<=30)
    {
        fun(t);
    }
	return 0;
}

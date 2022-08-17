#include <iostream>
using namespace std;
void fun(int t)
{
    if(t>0)
    {
        int x;
        cin>>x;
        if(x>=1 && x<=10000)
        {
            if(x<=100) cout<<(x)<<endl;
            if(x>100 && x<=1000) cout<<(x-25)<<endl;
            if(x>1000 && x<=5000) cout<<(x-100)<<endl;
            if(x>5000) cout<<(x-500)<<endl;
            fun(t-1);
        }
        
    }
}
int main() {
    int t;
    cin>>t;
    if(t>=1 && t<=100)
    {
        fun(t);
    }
	return 0;
}

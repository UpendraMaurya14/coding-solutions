#include <iostream>
using namespace std;
void fun(int t)
{
    if(t>0)
    {
	        int a,b,c;
	        cin>>a>>b>>c;
	        if(a<=b && c<=b) cout<<"Yes"<<endl;
	        else cout<<"No"<<endl;
	        fun(t-1);
	    
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

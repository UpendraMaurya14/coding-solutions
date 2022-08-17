#include <iostream>
using namespace std;
void fun(int t)
{
    if (t>0)
    {
        int n;
        cin>>n;
        cout<<100-n<<endl;
        fun(t-1);
    }
}

int main() {
    int t;
	cin>>t;
	fun(t);
	return 0;
}

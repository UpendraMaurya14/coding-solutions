#include <iostream>
using namespace std;

int main() {
    int c;
    cin>>c;
    if(c>=1 && c<=10000)
    {
        if(c<=1000) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
	return 0;
}

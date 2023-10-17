#include <iostream>
#include <string>
using namespace std;
string str,str2;
string a;
int main(){
	freopen("mr-lang.txt","w",stdout);
	while(true){
		cin>>a;
		cin>>str>>str2;
		cout<<a<<endl<<str<<endl<<str2<<endl;
		if(str=="END"){
			break;
		}
	}
	return 0;
}

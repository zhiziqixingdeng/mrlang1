#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string str,str2,a,w;
int n;
char x='"';//因为直接cout会出现十分尴尬的情况
int main(){
	freopen("mr-lang.txt","r",stdin);
  freopen("mr-lang.cpp","w",stdout);
	cout<<"#include <iostream>"<<endl<<"#include <cstdlib>"<<endl<<"#include <unistd.h>"<<endl<<"using namespace std;"<<endl<<"int main(){"<<endl;
	while(true){
	cin>>a;
	cin>>str;
	cin>>str2;
	if(a!="1"){
		cout<<"for(int i=1;i<="<<a<<";i++) ";
	}
	if(str=="out"){
		cout<<"cout<<"<<str2<<";"<<endl;
	}
	if(str=="pause"){
		cout<<"system("<<str2<<")"<<endl;
	}
	if(str=="CLS"){
		cout<<"system("<<str2<<");"<<endl;
	}
	if(str=="if"){
		cout<<"if("<<str2<<") ";
	}
	if(str=="new"){
		cout<<"int "<<str2<<";"<<endl;
	}
	if(str=="strnew"){
		cout<<"string "<<str2<<";"<<endl;
	}
	if(str=="+-"){
		cout<<str2<<";"<<endl;
	}
	if(str=="END"){
		cout<<"return 0;"<<endl;
		break;
	}
	}
	cout<<"}"<<endl;
	return 0;
}

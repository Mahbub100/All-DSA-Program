//print integer in deacring order
#include<iostream>
using namespace std;

int main(){
	int i,n;
	cout<<"enter the number"<<endl;
	cin>>n;
	
	//using forloop
	for(i=n; i>=1; i=i-1) //for(initialize,condition ,increment)
	{
		cout<<i<<endl;
	}
}

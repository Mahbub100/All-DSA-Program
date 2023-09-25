//table print user input
#include<iostream>
using namespace std;

int main(){
	int i,n;// variable declaration
	cout<<"enter the table: ";
	cin>>n; //user input
	
	//using forloop
	for(i=1; i<=10; i++) //for(initialize,condition ,increment)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
}

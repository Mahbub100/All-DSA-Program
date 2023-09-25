//print a string n times using user input
#include<iostream>
using namespace std;

int main(){
	int i,n;
	cout<<"enter the number of times you want prints "<<endl;
	cin>>n;
	
	//using forloop
	for(i=1; i<=n; i=i+1) //for(initialize,condition ,increment)
	{
		cout<<i<<"  welcome to DSA course"<<endl;
	}
}

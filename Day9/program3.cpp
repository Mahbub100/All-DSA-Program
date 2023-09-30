#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1 ;j<=i; j++){
			cout<<i<<" ";
		}
		
		cout<<endl;
	}
}


//output
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5
//6 6 6 6 6 6
//7 7 7 7 7 7 7
//8 8 8 8 8 8 8 8

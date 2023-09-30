#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=i;j>=1;j--)
		{
			cout<<j<<"  ";
		}
		cout<<endl;
	}
}
 
//1
//2  1
//3  2  1
//4  3  2  1
//5  4  3  2  1
//6  5  4  3  2  1
//7  6  5  4  3  2  1
//8  7  6  5  4  3  2  1


#include<iostream>
using namespace std;
int main(){

int row,col,n;
cout<<"enter the number : ";
cin>>n;

for(row=1; row<=n ; row++)
{
	for(col=1; col<=n-row; col++)
	{
//		print space
		cout<<"  ";
	}
		 for(col=1; col<=row; col++)
		 {
//		 	print row/number
		 	cout<<col<<" ";
		 }
		 
	cout<<endl; 
};
			};
//output
//enter the number : 5
//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5

			

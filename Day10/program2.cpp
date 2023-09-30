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
		 	cout<<row<<" ";
		 }
		 
	cout<<endl; 
};
			};
			
//output
//
//enter the number8
//       1
//      22
//     333
//    4444
//   55555
//  666666
// 7777777
//88888888


#include<iostream>
using namespace std;
int main(){
int row,col,n;

cout<<"enter the number : ";
cin>>n;
		for(row=1;row<=n;row++){
			
			 //space print
			for(col=1;col<=n-row;col++){
				cout<<"  ";
			};
			
			//number print 
			for(col=row;col>=1;col--)
			{
			
				cout<<col<<" ";
			}
			
			cout<<endl<<" ";
		};
	
}
//enter the number : 8
//              1
//             2 1
//           3 2 1
//         4 3 2 1
//       5 4 3 2 1
//     6 5 4 3 2 1
//   7 6 5 4 3 2 1
// 8 7 6 5 4 3 2 1

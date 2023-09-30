#include<iostream>
using namespace std;
int main(){
int row,col,n;
char name;
cout<<"enter the number : ";
cin>>n;
		for(row=1;row<=n;row++){
			
			 //space print
			for(col=1;col<=n-row;col++){
				cout<<"  ";
			};
			
			//charecter print 
			for(col=1;col<=row;col++)
			{
				name='A'+col-1;
				cout<<name<<" ";
			}
			cout<<endl;
		};
	
}
//enter the number : 8
//              A
//            A B
//          A B C
//        A B C D
//      A B C D E
//    A B C D E F
//  A B C D E F G
//A B C D E F G H


//c++ pattern printing
#include<iostream>
using namespace std;
int main(){
	int row, col;
	
	for(row=0;row<=8; row++){
		
		for(col=1;col<=6;col++)
		{
			cout<<col*col<<"  ";
		}
		cout<<endl;
	}
	 
};

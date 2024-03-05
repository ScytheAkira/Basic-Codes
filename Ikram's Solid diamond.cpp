/* This diamond is printed in such a way that if user enters dimension as 15, it will print a diamond with 15 rows from top to bottom
   --> if the dimension is an odd number the program would first make an iscosceles triangle of (dimension/2)+1 number of rows
in this case it will be 15/2 + 1= 8 rows in first triangle, the 8th row would be the middle line
   --> then the program would make an inversed iscosceles triangle of (dimension/2)-1 rows, which in this case will be 7
   --> if dimension is even then program would creat two iscosceles triangles, one inversed and one straight, both with dimension/2 number 
of rows and there would be no middle line in this case but two middle lines one as the base of each triangle. */

#include<iostream>
using namespace std;
int main(){
	int dimen;
	cin >> dimen;
	
//-->uneven dimension	
	if( dimen%2 != 0){
		
	int n= (dimen/2) + 1;
	for(int i=1 ; i<=(dimen/2) + 1 ; i++){
		
		//spaces
		for(int j=1; j <= n; j++){
			
			cout<<" ";
			
		}
		n--;
		// first triangle-->
		for(int k=1 ; k<=i ; k++){
			
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	int m=1;
	for(int i=1; i<=(dimen/2) + 1 ; i++){
		
		cout<<" ";
		//spaces
		for(int j=1; j<=m ;j++){
			cout<<" ";
		}
		m++;
		//Second Triangle-->
		for(int k = (dimen/2); k>=i ; k--){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}


//-->even dimension
	if(dimen%2 == 0){
		
	int n= (dimen/2);
	for(int i=1; i<=( dimen/2 ) ; i++){
		cout<<" ";
		//spaces
		for(int j=1; j <= n ; j++){
			
			cout<<" ";
			
		}
		n--;
		// first triangle-->
		for(int k=1 ; k<=i ; k++){
			
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	int m=1;
	for(int i=1; i<=(dimen/2) ; i++){
		
		cout<<" ";
		//spaces
		for(int j=1; j<=m ;j++){
			cout<<" ";
		}
		m++;
		//Second Triangle-->
		for(int k = (dimen/2); k>=i ; k--){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
	return 0;
}



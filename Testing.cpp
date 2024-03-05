#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	//rows 
	
	//SQUARE-->
	/*for(int i=1; i<=5 ; i++){
		
		for(int j=1 ; j<=5 ; j++){
			
			cout<<"*"<<" ";  //--> We can also use a sign like "*'
		}
		cout<<endl;
	}*/
	//RIGHT ANGLE TRIANGLE-->
	for(int i=1; i<=10 ; i++){
		
		for(int j=1 ; j<=i ; j++){
			
			cout<<j<<" ";	//--> We can also use a sign like "*'
		}
		cout<<endl;
	}
	//INVERSED RIGHT ANGLE TRIANGLE-->
	/*for(int i=1; i<=10 ; i++){
		
		for(int j=10 ; j>=i ; j--){
			
			cout<<j;	//--> We can also use a sign like "*'
		}
		cout<<endl;
	}*/
	/*
	//SPACED RIGHT TRIANGLE-->
	for(int i=1; i<=10 ; i++){
		cout<<setw(10);
		for(int j=1 ; j<=i ; j++){
			
			cout<<j;	//--> We can also use a sign like "*'
		}
		cout<<setw(10)<<endl;
	}*/
	// INVERTED RIGHT TRINANGLE -->
	/*for(int i=1;i<=10 ; i++){
		for(int j=1 ; j<=i ; j++){
			
			cout<<" ";
		}
		int j=1; //if we use "*" , we do not need to do this.
			for(int k=i; k<=10 ; k++){
			
			cout<<j; // j can be replaced by "*" or any other symbol
			j++;// we also do not need to do this if we use "*" or any symbol
			}
		cout<<endl;
		
	}*/
	//EQUILATERAL TRIANGLE-->
	/*for(int i=10;i>=1 ; i--){
		for(int j=1 ; j<=i ; j++){
			
			cout<<" ";
		}
		int j=1; //if we use "*" , we do not need to do this.
			for(int k=i; k<=10 ; k++){
			
			cout<<j; // j can be replaced by "*" or any other symbol
			j++;// we also do not need to do this if we use "*" or any symbol
			}
		cout<<endl;
		
	}*/
	//Iscosceles Triangle-->
	/*for(int i=1;i<=3 ; i++){
		for(int j=1 ; j<=3-i ; j++){
			
			cout<<" ";
		}
		int j=1; //if we use "*" , we do not need to do this.
			for(int k=1 ; k<=i ; k++){
			
			cout<<"*"; // j can be replaced by "*" or any other symbol
			//j++; // we also do not need to do this if we use "*" or any symbol
			}
				for(int l=1; l<i ; l++){
					cout<<"*";
				}
		cout<<endl;
		
	}*/
	//Rectangle-->
	/*for(int i=1; i<=6 ; i++){
		
		for(int j=1 ; j<=10 ; j++){
			
			cout<<"*"<<" ";  //--> We can also use a sign like "*'
		}
		cout<<endl;
	}*/
	//PARALLELOGRAM-->
	/*for(int i=1; i<=6 ; i++){
		for(int k=6; k>=i; k--){
			cout<<" ";
		}
		for(int j=1 ; j<=13 ; j++){
			
			cout<<"*"<<" ";  //--> We can also use a sign like "*'
		}
		cout<<endl;
	}*/
		//Diamond
	/*int dimen;
	cin>>dimen;
	
//-->uneven dimension	
	if(dimen%2 != 0){
		
	int n= (dimen/2)+1;
	for(int i=1; i<=(dimen/2)+1 ;i++){
		
		//spaces
		for(int j=1; j<=n; j++){
			
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
	for(int i=1; i<=(dimen/2)+1 ; i++){
		
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
	for(int i=1; i<=(dimen/2) ;i++){
		cout<<" ";
		//spaces
		for(int j=1; j<=n; j++){
			
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
}*/

//hollow square
/*for(int i=1; i<=5 ; i++){
		
		for(int j=1 ; j<=5 ; j++){
			if( j==1 || j== 5 || i==1 || i==5){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		
		}
		cout<<endl;
	}*/
//hollow rectangle
	/*for(int i=1; i<=6 ; i++){
		
		for(int j=1 ; j<=10 ; j++){
			if( j==1 || j== 10 || i==1 || i==6){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		
		}
		cout<<endl;
	}*/

//Hollow parallelogram
	/*for(int i=1; i<=6 ; i++){
		for(int k=6; k>=i; k--){
			cout<<" ";
		}
		for(int j=1 ; j<=10 ; j++){
			if( j==1 || j== 10 || i==1 || i==6){
			cout<<"*";
			}
			else{
			cout<<" ";
			}
		}
		cout<<endl;
	}*/
//Hollow Right Triangle
	/*for(int i=1; i<=10 ; i++){
		
		for(int j=1 ; j<=i ; j++){
			if( j==1 || j==i || i==1 || i==10){
			cout<<"*";
			}
			else{
			cout<<" ";
			}
		}
		cout<<endl;
	}*/
//Hollow iscosceles triangle
	/*for(int i=1;i<=10 ; i++){
		for(int j=1 ; j<=10-i ; j++){
			
			cout<<" ";
		}
			for(int k=1 ; k<=i ; k++){
			if( k==1 ||i==1 || i==10){
			cout<<"*";
			}
			else{
				cout<<" ";
			}
			}
				for(int l=1; l<i ; l++){
					if(l==(i-1) || i==1 || i==10){
					cout<<"*";
					}
					else{
					cout<<" ";
					}
				
				}
		cout<<endl;
		
	}*/
	
	//Hollow Diamond
	/*int dimen;
	cin>>dimen;
	
//-->uneven dimension	
	if(dimen%2 != 0){
		
	int n= (dimen/2)+1;
	for(int i=1; i<=(dimen/2)+1 ;i++){
		
		//spaces
		for(int j=1; j<=n; j++){
			
			cout<<" ";
			
		}
		n--;
		// first triangle-->
		for(int k=1 ; k<=i ; k++){
			if(k == 1 || k == i){
			cout<<"*"<<" ";
		}
		else{
			cout<<" ";
		}
		}
		cout<<endl;
	}
	int m=1;
	for(int i=1; i<=(dimen/2)+1 ; i++){
		
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
	for(int i=1; i<=(dimen/2) ;i++){
		cout<<" ";
		//spaces
		for(int j=1; j<=n; j++){
			
			cout<<" ";
			
		}
		n--;
		// first triangle-->
		for(int k=1 ; k<=i ; k++){
			if(k == 1 || k == i){
			cout<<"*"<<" ";
		}
		else{
			cout<<" ";
		}
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
}*/
	/*for(int i=10;i>=1 ; i--){
		for(int j=1 ; j<=i ; j++){
			if (j==1 || j==i || i==1){
			cout<<" ";
		}else{
			cout<<" ";
		}
		}
		int j=1; //if we use "*" , we do not need to do this.
			for(int k=i; k<=10 ; k++){
			if( k == i|| k ==2*i-1){
			cout<<j<<" "; // j can be replaced by "*" or any other symbol
			j++;
			}
			else{
			cout<<" ";
			}
			}
		cout<<endl;
		
	}*/
	return 0;
}

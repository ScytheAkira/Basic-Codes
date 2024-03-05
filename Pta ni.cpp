#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	/*int i=0;
	int array[]={1,12,123,1234,12345,123456,1234567};

		while(i<7){
		cout<<setw(10);
		cout<<array[i]<<endl;
		i++;
	}*/	
	//Diamond
	int dimen;
	cin>>dimen;
	
//uneven dimension	
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


//even dimension
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
}

	return 0;
}

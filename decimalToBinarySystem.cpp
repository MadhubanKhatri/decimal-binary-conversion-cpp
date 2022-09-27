#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	int rem=n%2;
	while(true){
		
		if(rem==0){
			n=n/2;
			int rem=n%2;
			cout<<rem;
		}
		else{
			int rem=n%2;
			n=n/2;
			cout<<rem;
		}
		
		if(n==0){
			break;
		}
	}
}

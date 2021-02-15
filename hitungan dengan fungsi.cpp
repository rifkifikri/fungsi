#include<iostream>
#include <conio.h>//library untuk getch
using namespace std;
int tambah(int x,int input){
	int y;
	y=x+input;
	return y;
}
int kali(int x,int input2){
	int y;
	y=x*input2;
	return y;
}
int main(){
	int input,hasil=1,input2,hasil2=1;
	
	cout<<"masukkan input	;";
	cin>>input;
	for(int x=1;x<=input;x++){
		
		hasil=tambah(x,input);
		cout<<hasil<<" ";
	}
	getch();
	cout<<"\nmasukkan input	2;";
	cin>>input2;
	for(int x=1;x<=input2;x++){
		
		hasil2=kali(x,input2);
		cout<<hasil2<<" ";
	}
}

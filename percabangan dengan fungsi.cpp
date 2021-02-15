#include <iostream>
using namespace std;
int pilihanPertama(int input){
		for (int x=0;x<input;x++)
		{
			for (int y=input;y>x;y--)
			{
				cout<<" ";
			}
			for (int y=1;y<=(2*x-1);y++)
			{
				cout<<"*";
			}
		cout<<"\n";
		}
		for (int x=0;x<input;x++)
		{
			for (int y=0;y<x;y++)
			{
				cout<<"1";
			}
			for (int y=input;y>(2*x-1);y--)
			{
				cout<<"*";
			}
		cout<<"\n";
		}
	}
int pilihanKedua(int input){
	for (int x=0;x<input;x++)
		{
			for (int y=0;y<=x;y++)
			{
				cout<<"*";
			}
		cout<<"\n";
		}
}

int main(){
	int input,fSegitiga,fketiga;
	
	cout<<"Masukkan Angka Inputan	:";
	cin >> input;
	if (input%2==0)
	{
	fSegitiga=pilihanPertama(input);
	
	cout<<endl<<fSegitiga;
	}else{
		fketiga=pilihanKedua(input);
		cout<<fketiga;
	}
	
	return 0;
}

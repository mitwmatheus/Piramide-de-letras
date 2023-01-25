#include<iostream>
using namespace std;



int main(){
	int linha;
	int cont = 97;
	char cont2=97;
	cin>>linha;
	linha=cont+linha;
	while(cont<linha){
		cont2=97;
		while (cont2<=cont){
			cout<<cont2<<" ";
			cont2++;
		}
		cout<<endl;
		cont++;
	}
	return 0;
}



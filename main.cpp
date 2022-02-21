#include <iostream>
#include "funcs.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	
	do{
		cout << "Escolha um exercicio (1-12, 0 para sair): ";
		cin >> x;
		
		switch(x){
		case 1:
			int n1;
			cout << "Insira um numero: ";
			cin >> n1;
			sqrty(n1);
			cout<<endl;
			system("pause");
			break;
		case 2:
			int n2;
			cout << "Insira um numero: ";
			cin >> n2;
			parimpar(n2);
			cout<<endl;
			system("pause");
			break;
		case 3:
			int tt;
			cout << "Insira a temperatura em Celcius: ";
			cin >> tt;
			tempe(tt);
			cout<<endl;
			system("pause");
			break;
		case 4:
			int yy;
			cout << "Insira um numero: ";
			cin >> yy;
			big(yy);
			cout<<endl;
			system("pause");
			break;
		case 5:
			int hh;
			cout << "Insira um numero: ";
			cin >> hh;
			nums(hh);
			cout<<endl;
			system("pause");
			break;
		case 6:
			float oo;
			cout << "Insira um numero: ";
			cin >> oo;
			desc(oo);
			cout<<endl;
			system("pause");
			break;
		case 7:
			char bb;
			cout << "Insira uma letra: ";
			cin >> bb;
			charc(bb);
			cout<<endl;
			system("pause");
			break;
		case 8:
			int kk, gg;
			cout << "Insira 2 numeros: ";
			cin >> kk >> gg;
			sumWhat(kk, gg);
			cout<<endl;
			system("pause");
			break;
		case 9:
			int aa;
			cout << "Insira o seu ano de nascimento: ";
			cin >> aa;
			age(aa);
			cout<<endl;
			system("pause");
			break;
		case 10:
			{
				string nome;
				int idade;
				cout << "Insira o seu nome e idade: ";
				cin >> nome >> idade;
				person(nome, idade);
			}
			cout<<endl;
			system("pause");
			break;
		case 11:
			{
				float n3, n4;
				int oc;
				cout << "Insira dois numeros: ";
				cin >> n3 >> n4;
				do{
					cout << "1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Ao Quadrado\n";
					cout << "Escolha uma operacao: ";
					cin >> oc;
					menu(n3, n4, oc);	
				}
				while (oc != 0);
			}
			cout<<endl;
			system("pause");
			break;
		case 12:
			{
				string name;
				int idad;
				cout << "Insira o seu nome e idade: ";
				cin >> name >> idad;
				nome(name, idad);	
			}
			cout<<endl;
			system("pause");
			break;
		}
	}
	while(x != 0);
	
	
	
	return 0;
}
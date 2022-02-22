#include <iostream>
#include "funcs.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	
	do{
		cout << "01 - Quadrado de um numero;\n" 
			 <<	"02 - Numero par ou Impar;\n" 
			 << "03 - Convertor Celcius para Fahrenheit;\n" 
			 << "04 - Mostra a metade de um numero for maior que 20;\n" 
			 << "05 - Mostra o antecessor e sucessor de um numero;\n" 
			 << "06 - Aplica um desconto de 10% a um preco;\n" 
			 << "07 - Verifica se um caracter e igual a 'a' ou a 'A';\n" 
			 << "08 - Soma de 2 valores com um twist;\n" 
			 << "09 - Mostra a idade da pessoa;\n" 
			 << "10 - Mostra o escalao de idade que uma pessoa pertence;\n" 
			 << "11 - Calculadora;\n" 
			 << "12 - Imprima o nome de uma pessoa tantas vezes como a sua idade;\n";
		cout << "Escolha uma opcao (0 para sair): ";
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
#define FUNCS_H

#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

int sqrty(int x){
	int tot;
	
	tot = pow(x, 2);
	
	cout << x << " ao quadrado e: " << tot;
	
	return 0; // return true
}

void parimpar(int z){
	if (z % 2 == 0){
		cout << "Numero Par!\nAdicionando mais 2: ";
		z += 2;
	} 
	else{
		cout << "Numero Impar!\nRemovendo 4: ";
		z -= 4;
	}
	
	cout << z;
}

void tempe(int t){
	int tot;
	
	tot = (9 * t + 160) / 5;
	
	cout << t << "C em fahrenheit e " << tot << "F";
}

void big(int y){
	int tot;
	
	if(y > 20){
		tot = y / 2;	
		cout << tot;
	}
	else{
		cout << y;
	}
	
}

void nums(int h){
	cout << h - 1 << " > " << h << " > " << h + 1;
}

void desc(float o){
	int tot;
	
	tot = o + (o * 0.10);
	
	cout << tot;
}

void charc(char b){
	
	if(b == 'a' || b == 'A'){
		cout << "Parabens!! Acertaste!!!";
	}
	else{
		cout << "Oh... Fica para a proxima...";
	}
	
}

void sumWhat(int k, int g){
	int kg;
	kg = k + g;
	
	if(kg > 20){
		cout << kg << " + 8 e: " << kg + 8;
	}
	else {
		cout << kg << " - 5 e: " << kg - 5;
	}
}

void age(int a){
	int tot;
	int f;
	
	time_t current_time;
	current_time = time(NULL);
	f = 1970 + current_time / 31537970; 
	
	tot = f - a;
	
	cout << "A sua idade atual: " << tot;
}

void person(string n, int i){
	if(i < 5){
		cout << n << " e um bebe";
	}
	else if (i > 5 && i < 7){
		cout << n << " pertence ao escalao Infatil A";
	}
	else if (i > 8 && i < 11){
		cout << n << " pertence ao escalao Infatil B";
	}
	else if  (i > 12 && i < 13){
		cout << n << " pertence ao escalao Juvenil A";
	}
	else if (i > 14 && i < 17){
		cout << n << " pertence ao escalao Juvenil B";
	}
	else if (i > 18){
		cout << n << " e um Adulto";
	}
	else{
		cout << "erro";
	}
	
}

void menu(float a, float b, int op){
	float tt;
	
	switch(op){
		case 1: // soma
			tt = a + b;
			cout << "O resultado da soma sera: " << tt << endl;
			break;			
		case 2: // subtração
			tt = a - b;
			cout << "O resultado da subtracao sera: " << tt << endl;
			break;
		case 3: // multiplicação
			tt = a * b;
			cout << "O resultado da multiplicacao sera: " << tt << endl;
			break;
		case 4: // divisão
			tt = a / b;
			cout << "O resultado da divisao sera: " << tt << endl;
			break;
		case 5: // ao quadrado
			cout << a << " ao quadrado sera: " << pow(a, 2) << "; " << b << " ao quadrado sera: " << pow(b, 2) << endl;
			break;	
	}
	
}

void nome(string n, int i){
	for(int x = 1; x <= i; x++){
		cout << x << " - " << n << "; ";
	}
}

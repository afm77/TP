#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;
using std::cout;
using std::cin;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, operacao, resultado, numExponencial;
	int opcao, expEscolhido;
	
	cout<<"Digite o primeiro n�mero: "<<endl;
	cin>>num1;
	cout<<"\nDigite o segundo n�mero: "<<endl;
	cin>>num2;
	
	cout<<"\nSelecione a opera��o matem�tica que deseja realizar: \n1- Soma \n2- Subtra��o \n3- Multiplica��o \n4- Divis�o \n5- Potencia��o \n6- Exponencial "<<endl;
	cin>>opcao;
	
	switch(opcao){
		case 1:
			resultado = num1 + num2;
			cout<< "\nVoc� selecionou a opera��o de Soma. O resultado de sua opera��o �: " <<resultado <<endl;
			break;
		case 2: 
			resultado = num1 - num2;
			cout<<"\nVoc� selecionou a opera��o de Subtra��o. O resultado de sua opera��o �: " <<resultado <<endl;
			break;
		case 3:
			resultado = num1 * num2;
			cout<<"\nVoc� selecionou a opera��o de Multiplica��o. O resultado de sua opera��o �: "<<resultado <<endl;
			break;
		case 4:
			resultado = num1 / num2;
			cout<<"\nVoc� selecionou a opera��o de Divis�o. O resultado de sua opera��o �: "<<resultado <<endl;
			break;
		case 5:
			resultado = pow(num1, num2);
			cout<<"\nVoc� selecionou a opera��o de Potencia��o. O resultado de sua opera��o �: "<<resultado <<endl;
			break;	
		case 6:
			cout<<"\nSelecione um dos n�meros digitados anteriormente: 1- " << num1 << " ou 2- " << num2 << "?" <<endl;
			cin>> expEscolhido;
			
			if (expEscolhido == 1) {
			resultado = exp (num1);
			cout<<"\nVoc� selecionou a opera��o de Exponenci��o. O resultado de sua opera��o para o n�mero escolhido �: "<<resultado <<endl;
			} else if (expEscolhido == 2){
			resultado = exp (num2);
			cout<<"\nVoc� selecionou a opera��o de Exponenci��o. O resultado de sua opera��o para o n�mero escolhido �: "<<resultado <<endl;
			} else if (expEscolhido < 1 || expEscolhido > 2){
				cout<<"\nDigite uma op��o v�lida"<<endl;			
			}
			break;
					
			
		default:
			cout<<"\nSelecione uma op��o v�lida "<<endl;
			break;	
	}
	
	system("pause");	
	return 0;
}

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
	
	cout<<"Digite o primeiro número: "<<endl;
	cin>>num1;
	cout<<"\nDigite o segundo número: "<<endl;
	cin>>num2;
	
	cout<<"\nSelecione a operação matemática que deseja realizar: \n1- Soma \n2- Subtração \n3- Multiplicação \n4- Divisão \n5- Potenciação \n6- Exponencial "<<endl;
	cin>>opcao;
	
	switch(opcao){
		case 1:
			resultado = num1 + num2;
			cout<< "\nVocê selecionou a operação de Soma. O resultado de sua operação é: " <<resultado <<endl;
			break;
		case 2: 
			resultado = num1 - num2;
			cout<<"\nVocê selecionou a operação de Subtração. O resultado de sua operação é: " <<resultado <<endl;
			break;
		case 3:
			resultado = num1 * num2;
			cout<<"\nVocê selecionou a operação de Multiplicação. O resultado de sua operação é: "<<resultado <<endl;
			break;
		case 4:
			resultado = num1 / num2;
			cout<<"\nVocê selecionou a operação de Divisão. O resultado de sua operação é: "<<resultado <<endl;
			break;
		case 5:
			resultado = pow(num1, num2);
			cout<<"\nVocê selecionou a operação de Potenciação. O resultado de sua operação é: "<<resultado <<endl;
			break;	
		case 6:
			cout<<"\nSelecione um dos números digitados anteriormente: 1- " << num1 << " ou 2- " << num2 << "?" <<endl;
			cin>> expEscolhido;
			
			if (expEscolhido == 1) {
			resultado = exp (num1);
			cout<<"\nVocê selecionou a operação de Exponencição. O resultado de sua operação para o número escolhido é: "<<resultado <<endl;
			} else if (expEscolhido == 2){
			resultado = exp (num2);
			cout<<"\nVocê selecionou a operação de Exponencição. O resultado de sua operação para o número escolhido é: "<<resultado <<endl;
			} else if (expEscolhido < 1 || expEscolhido > 2){
				cout<<"\nDigite uma opção válida"<<endl;			
			}
			break;
					
			
		default:
			cout<<"\nSelecione uma opção válida "<<endl;
			break;	
	}
	
	system("pause");	
	return 0;
}

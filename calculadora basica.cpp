#include <iostream>

using namespace std;

int main()
{
	double num1,num2;
	char operacao;
	
	cout<<"ola"<<endl;
	cout << "Digite a operacao desejada (+, -, *, /): ";
    cin >> operacao;
    
    cout << "digite o primeiro numero:";
    cin >> num1;
    cout << "digite o segundo numero";
    cin >> num2;
	
	switch (operacao)
	{
		case '+':
			cout << "resultado:" << num1 + num2 <<endl;
			break;
		case'-':
			cout <<"resultado:" << num1 - num2 <<endl;
			break;
		case'*':
			cout << "resultado:"<< num1 * num2 <<endl;
			break;
	    case '/':
			if (num2 !=0)cout << "resultado:"<< num1 / num2 <<endl;
			else 
			cout << "erro divisao nao permitida"<< endl;
			break;
		
		default:
			cout << "operaçao invalida"<<endl;
			
	}
	
	return 0;
}

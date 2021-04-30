//o uso de funções foi por motivos pessoais. Não é obrigatorio. 
#include <iostream>
#include <cmath>

using namespace std;



int Operacao(string op, int a, int b) {
	
	int result;
	
	if (op == "+"){
		result = a + b;
	}else if (op == "-") {
		result = a - b;
	}else if (op == "/") {
		result = a / b;
	}else if (op == "x") {
		result = a * b;
	}
	
	return result;
}

void PrintErrou(int result, int c){
	
	cout << "E";
	
	int qtd = fabs(result - c);
	
	for (int i = 0; i < qtd; i++){
		cout << "r";
	}
	
	cout << "ou!\n";
}

int main() {
	
	int C;
	cin >> C;
	
	int a, b, c, result;
	string op, s;
	
	for (int i = 0; i < C; i++){
	
		cin >> a >> op >> b >> s >> c;
	
		result = Operacao(op, a, b);
		PrintErrou(result, c);
}
	
	return 0;
}
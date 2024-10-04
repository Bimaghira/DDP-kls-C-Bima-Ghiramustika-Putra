#include <iostream>
using namespace std;

int main(){
	char op;
	float num1,num2;
	
	cout << "masukkan salah satu simbol perhitungan   (+,-,*,/): ";
	cin >> op;
	cout << "masukkan dua angka :";
	cin >> num1 >> num2 ;
	
	switch (op){
		case '+':
			cout << num1 << " + " << num2 <<" = " << num1 + num2 << endl;
			break;
		case '-':
			cout << num1 << " - " << num2 <<" = " << num1 - num2 << endl;
			break;
		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			break;
		case '/':
			if (num2 !=0)
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		else
			cout <<" error! pembagian dengan nol. " << endl;
		break;
		default:
			cout << " operator tidak valid. " << endl;
			break;
		
	}
	return 0;
	
}

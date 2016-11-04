//Assume all Operands are Single Digits

#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <iomanip>
#include <cstring>
#include <ctype.h>
#include <locale>
#include "Stack.h"

int precendence(char op)
{
	if (op == '*' || op == '/')return 0;
	return 1;
}

bool comparePrecedence(char a, char b)
{
	return precendence(a) < precendence(b);
}

int main()
{
	Stack<int> valstack;
	Stack<char> opstack;
	char infixExp[1000];
	char ch;
	cout << "Enter an infix expression without spaces. Ex: 6+9" << endl;
	cin >> infixExp;
	int len = strlen(infixExp);
	for (int i = 0; i < len; i++)
	{
		ch = infixExp[i];
		switch (ch){
		case('1') :
			valstack.push(atoi(&ch));
			break;
		case('2') :
			valstack.push(atoi(&ch));
			break;
		case('3') :
			valstack.push(atoi(&ch));
			break;
		case('4') :
			valstack.push(atoi(&ch));
			break;
		case('5'):
			valstack.push(atoi(&ch));
			break;
		case('6'):
			valstack.push(atoi(&ch));
			break;
		case('7'):
			valstack.push(atoi(&ch));
			break;
		case('8'):
			valstack.push(atoi(&ch));
			break;
		case('9'):
			valstack.push(atoi(&ch));
			break;
		case('0'):
			valstack.push(atoi(&ch));
			break;
		case('(') :
			opstack.push(ch);
			break;
		//case('+'):
		//	if (opstack.isEmpty){
		//		opstack.push(ch);
		//	}
		//	else if (){
		//
		//	}
		//	else{
		//
		//	}

		}
	
	}
	
	cout << endl;




	system("pause");
	return 0;
}

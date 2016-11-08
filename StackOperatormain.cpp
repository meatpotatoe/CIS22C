#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <iomanip>
#include <cstring>
#include <ctype.h>
#include <locale>
#include "Stack.h"
#include"Calculator.h"
using namespace std;

int precedence(char op)
{
	if (op == '*' || op == '/')
	{
		return 3;
	}
	if (op == '+' || op == '-')
	{
		return 2;
	}
	if (op == '(' || op == ')')
	{
		return 1;
	}
}

int main()
{

	Stack<int> valstack;
	Stack<char> opstack;
	char infixExp[1000];
	char ch;
	char op;
	int operand1;
	int operand2;
	int result;
	int answer;
	//Actual Calculator

	cout << "Enter an infix expression without spaces and with appropriate parentheses \nEx: (6+9)" << endl;
	cin >> infixExp;
	int len = strlen(infixExp);

	for (int i = 0; i < len; i++)
	{
		ch = infixExp[i];
		int ich = ch - '0';
		switch (ch){
		case('1') :
			valstack.push(ich);
			break;
		case('2') :
			valstack.push(ich);
			break;
		case('3') :
			valstack.push(ich);
			break;
		case('4') :
			valstack.push(ich);
			break;
		case('5') :
			valstack.push(ich);
			break;
		case('6') :
			valstack.push(ich);
			break;
		case('7') :
			valstack.push(ich);
			break;
		case('8') :
			valstack.push(ich);
			break;
		case('9') :
			valstack.push(ich);
			break;
		case('0') :
			valstack.push(ich);
			break;
		case('(') :
			opstack.push(ch);
			break;
		case('+') :
			if (opstack.isEmpty())
			{
				opstack.push(ch);
			}
			else if (precedence(ch) > precedence(opstack.getTop()))
			{
				opstack.push(ch);
			}
			else
			{
				while (!opstack.isEmpty() && precedence(ch) <= precedence(opstack.getTop()))
				{
					operand2 = valstack.getTop();
					valstack.pop();
					operand1 = valstack.getTop();
					valstack.pop();
					op = opstack.getTop();
					opstack.pop();
					if (op == '+')
					{
						result = operand1 + operand2;
					}
					else if (op == '-')
					{
						result = operand1 - operand2;
					}
					else if (op == '*')
					{
						result = operand1*operand2;
					}
					else if (op == '/')
					{
						result = operand1 / operand2;
					}
					valstack.push(result);
				}
				opstack.push(ch);
			}
			break;
		case('-'):
			if (opstack.isEmpty())
			{
				opstack.push(ch);
			}
			else if (precedence(ch) > precedence(opstack.getTop()))
			{
				opstack.push(ch);
			}
			else
			{
				while (!opstack.isEmpty() && precedence(ch) <= precedence(opstack.getTop()))
				{
					operand2 = valstack.getTop();
					valstack.pop();
					operand1 = valstack.getTop();
					valstack.pop();
					op = opstack.getTop();
					opstack.pop();
					if (op == '+')
					{
						result = operand1 + operand2;
					}
					else if (op == '-')
					{
						result = operand1 - operand2;
					}
					else if (op == '*')
					{
						result = operand1*operand2;
					}
					else if (op == '/')
					{
						result = operand1 / operand2;
					}
					valstack.push(result);
				}
				opstack.push(ch);
			}
			break;

		case('*'):
			if (opstack.isEmpty())
			{
				opstack.push(ch);
			}
			else if (precedence(ch) > precedence(opstack.getTop()))
			{
				opstack.push(ch);
			}
			else
			{
				while (!opstack.isEmpty() && precedence(ch) <= precedence(opstack.getTop()))
				{
					operand2 = valstack.getTop();
					valstack.pop();
					operand1 = valstack.getTop();
					valstack.pop();
					op = opstack.getTop();
					opstack.pop();
					if (op == '+')
					{
						result = operand1 + operand2;
					}
					else if (op == '-')
					{
						result = operand1 - operand2;
					}
					else if (op == '*')
					{
						result = operand1*operand2;
					}
					else if (op == '/')
					{
						result = operand1 / operand2;
					}
					valstack.push(result);
				}
				opstack.push(ch);
			}
			break;

		case('/'):
			if (opstack.isEmpty())
			{
				opstack.push(ch);
			}
			else if (precedence(ch) > precedence(opstack.getTop()))
			{
				opstack.push(ch);
			}
			else
			{
				while (!opstack.isEmpty() && precedence(ch) <= precedence(opstack.getTop()))
				{
					operand2 = valstack.getTop();
					valstack.pop();
					operand1 = valstack.getTop();
					valstack.pop();
					op = opstack.getTop();
					opstack.pop();
					if (op == '+')
					{
						result = operand1 + operand2;
					}
					else if (op == '-')
					{
						result = operand1 - operand2;
					}
					else if (op == '*')
					{
						result = operand1*operand2;
					}
					else if (op == '/')
					{
						result = operand1 / operand2;
					}
					valstack.push(result);
				}
				opstack.push(ch);
			}

			break;
		}
	}

	while (!opstack.isEmpty())
	{
		operand2 = valstack.getTop();
		valstack.pop();
		operand1 = valstack.getTop();
		valstack.pop();
		op = opstack.getTop();
		opstack.pop();
		if (op == '+')
		{
			result = operand1 + operand2;
		}
		else if (op == '-')
		{
			result = operand1 - operand2;
		}
		else if (op == '*')
		{
			result = operand1*operand2;
		}
		else if (op == '/')
		{
			result = operand1 / operand2;
		}
		valstack.push(result);
	}
	result = valstack.getTop();
	cout << result << endl;

	system("pause");
	return 0;
}

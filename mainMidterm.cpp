include "TemplateArray.h"

using namespace std;
/*
Midterm Problem
Kevin Truong
CIS 22C
*/


int main()
{
	int c1;
	int c2;
	int user_size;
	string user_string;
	int user_int;
	char user_char;
	double user_double;

	cout << "Midterm problem attempted by Kevin Truong." << endl;

	do{
		cout << "Welcome to the Array Program" << endl;
		cout << "1. Allocate the size of the array" << endl;
		cout << "2. Enter the contents of the array" << endl;
		cout << "3. Quit" << endl;
		cin >> c1;
		if (c1 == 1)
		{
			cout << "Hello. Please Enter how many elements do you want in the array." << endl;
			cin >> user_size;
			cout << endl;
		}
		if (c1 == 2)
		{
			cout << endl;
			cout << "What data type do you want to insert?" << endl;
			cout << "1. Integer" << endl;
			cout << "2. String" << endl;
			cout << "3. Character" << endl;
			cout << "4. Double" << endl;
			cin >> c2;
			cout << endl;
		}
		if (c1 == 2 && c2 == 1){
			Array<int> int_arr(user_size);
			for (int i = 0; i < user_size; i++)
			{
				cout << "Enter a value for the Array" << endl;
				cin >> user_int;
				int_arr.setArray(i, user_int);
				cout << endl;
				int_arr.sortArray();
				cout << endl;
			}
			int_arr.getArray();
			cout << endl;
		}
		else if (c1 == 2 && c2 == 2){
			Array<string> string_arr(user_size);
			for (int i = 0; i < user_size; i++)
			{
				cout << "Enter a value for the Array" << endl;
				cin >> user_string;
				string_arr.setArray(i, user_string);
				string_arr.sortArray();
			}
			string_arr.getArray();
			cout << endl;
			cout << endl;
		}
		else if (c1 == 2 && c2 == 3)
		{
			Array<char> char_arr(user_size);
			for (int i = 0; i < user_size; i++)
			{
				cout << "Enter a value for the Array" << endl;
				cin >> user_char;
				char_arr.setArray(i, user_char);
				char_arr.sortArray();
			}
			char_arr.getArray();
			cout << endl;
		}
		else if (c1 == 2 && c2 == 4)
		{
			Array<double> double_arr(user_size);
			for (int i = 0; i < user_size; i++)
			{
				cout << "Enter a value for the Array" << endl;
				cin >> user_double;
				double_arr.setArray(i, user_double);
				double_arr.sortArray();
			}
			double_arr.getArray();
			cout << endl;
		}
		else if (c1 == 3)
		{
			cout << "Goodbye!" << endl;
			cout << endl;
		}
		else{
			cin.clear();
			cin.ignore();
		}

	}while (c1!= 3);

	system("pause");
	return 0;
}

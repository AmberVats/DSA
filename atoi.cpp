#include <bits/stdc++.h>
using namespace std;

int main(){
	int val1;
    int val2;

	char strn1[1000];
    cout << "Enter your string 1 value: ";
    cin >> strn1;
    cout << endl;

    char strn2[1000];
    cout << "Enter yout string 2 value:";
    cin >> strn2;
    cout << endl;

	val1 = atoi(strn1);
	cout << "String value = " << strn1 << endl;
	cout << "Integer value = " << val1 << endl;


	val2 = atoi(strn2);
	cout << "String value = " << strn2 << endl;
	cout << "Integer value = " << val2 << endl;

	return 0;
}
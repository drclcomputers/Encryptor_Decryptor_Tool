#include<iostream>
#include<fstream>
using namespace std;

ofstream fout("textcriptat.txt");
ofstream fout2("textdecriptat.txt");

int main() {
	cout << "Encrypt or Decrypt text\n\nWhat do you want to do:\n1. Encrypt text\n2. Decrypt files\n\nChoice: ";
	short int choice; cin >> choice;
	if (choice == 1) {
		cout << "\nInput text to encrypt (max 200000 characters): ";
		cin.ignore();
		char text[200002]; cin.getline(text, 200000);
		int i;
		i = 0;
		while (text[i] != 0) {
			//if (text[i] <= 99 && text[i] % 10 != 0 && text[i]%10!=1 && text[i] % 10 != 2 && text[i] % 10 != 3) {
			cout << (char)(-(text[i]));
			fout << (char)(-(text[i]));
			
			i++;
		}
	}
	else {
		cout << "\nInput text to decrypt (max 200000 characters): ";
		cin.ignore();
		char text[200002]; cin.getline(text, 200000);
		int i = 0;
		while (text[i] != 0) {
			//if (text[i]<=99 && !(text[i] % 10 == 3 && text[i] % 10 == 4 && text[i] % 10 == 5)) {
			cout << (char)(-(text[i]));
			fout << (char)(-(text[i]));
			
			i++;
		}
	}
	return 0;
}
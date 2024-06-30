#include<iostream>
#include<fstream>
using namespace std;

ofstream fout("textcriptat.txt");
ofstream fout2("textdecriptat.txt");

char text[200002];

int main() {
	cout << "Encrypt or Decrypt text\n\nWhat do you want to do:\n1. Encrypt text\n2. Decrypt files\n\nChoice: ";
	short int choice; cin >> choice;
	if (choice == 1) {
		cout << "\nInput text to encrypt (max 200000 characters): ";
		cin.ignore();
		cin.getline(text, 200000);
		int key; cout << "Input key: "; cin >> key;
		int i = 0;
		while (text[i] != 0) {
			cout << (char)((text[i])+key);
			fout << (char)((text[i])+key);
			i++;
		}
		cout << "Press any key to continue . . .";
		cin.get();
	}
	else if(choice == 2) {
		cout << "\nInput text to decrypt (max 200000 characters): ";
		cin.ignore();
		cin.getline(text, 200000);
		int key; cout << "Input key: "; cin >> key;
		int i = 0;
		while (text[i] != 0) {
			cout << (char)((text[i])-key);
			fout2 << (char)((text[i])-key);
			i++;
		}
		cout << "Press any key to continue . . .";
		cin.get();
	}
	return 0;
}
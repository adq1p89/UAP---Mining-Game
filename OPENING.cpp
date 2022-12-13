#include <iostream>
#include <conio.h>
#include <curses.h>
#include <windows.h>

using namespace std;

void menu();

	int main(){
	
		//Loading Screen
	for(int h=0 ; h<=100 ; h++) {
		
		cout<<endl<<"\t\t\t\t Please Wait a Second . . . "<<"[ "<<h<<"%"<<" ]";
		cout<<endl;
		system ("cls");
		
	} 
	cout<< "\t\t\t\t\t\t\t   _____________________"<<endl;
	cout<< "\t\t\t\t\t\t\t   | Loading Complete! |"<<endl;
	cout<< "\t\t\t\t\t\t\t   |___________________|"<<endl;
	Sleep(1000);
system ("cls");
	
	
	// merupakan fungsi judul yang akan ditampilkan dan dipanggil berkali-kali pada menu
	
	cout << "\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t ~ WELCOME TO LUCKY STOPE ~\n\n";
	cout << "\t --------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\t|         ___       ___   ___  _______   ___  ___  ___   ___    ________  __________  _________  ________  _________       |\n";
	cout << "\t|        /  /      /  /  /  / /  ____/  /  / /  / /  /__/  /   /  _____/ /___   ___/ /  ___   / /  __   / /  ______/       |\n";
	cout << "\t|       /  /      /  /  /  / /  /      /    ___/ /_____   /   /  /____      /  /    /  /  /  / /  _____/ /  /______        |\n";
	cout << "\t|      /  /____  /  /__/  / /  /____  /  /|  |   _____/  /   _____   /     /  /    /  /__/  / /  /      /  /______         |\n";
	cout << "\t|     /_______/ /________/ /_______/ /__/ |__| /________/   /_______/     /__/    /________/ /__/      /_________/         |\n";
	cout << "\t|                                                                                                                          |\n";
	cout << "\t|--------------------------------------------------------------------------------------------------------------------------|\n";
 
menu();
return 0;
}
void menu(){
	
	// MULAI

	
	cout << "\n\t\t\t\t\t\t        [ Klik Enter ]\n\n\n\n\n\n\n\n\n\n\n";
	
	
	system("pause");	// untuk menahan layar pada program yang sedang dijalankan.
	system("cls");
}


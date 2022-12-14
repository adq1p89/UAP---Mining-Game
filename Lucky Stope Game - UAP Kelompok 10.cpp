#include <iostream>
#include <conio.h>
#include <curses.h>
#include <windows.h>

using namespace std;

void menu();
void map();

	int main(){
	
	initscr();
	for (int h=0 ; h <2 ; h++){
		clear();
	
	
	mvprintw(2,20, "Please Wait a Second ");
	refresh();
	Sleep(500);
	
	mvprintw(2,43, "-");
	refresh();
	Sleep(500);
	
	mvprintw(2,45, "-");
	refresh();
	Sleep(500);
	
	mvprintw(2,47, "-");
	refresh();
	Sleep(500);
	
	
}
	clear();
	
	printw("\t\t   _____________________\n");
	printw("\t\t   | Loading Complete! |\n");
	printw("\t\t   |___________________|\n");

	getch();
	clear();
	
	// merupakan fungsi judul yang akan ditampilkan dan dipanggil berkali-kali pada menu
	
	cout << "\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t   * Hello Miners - Welcome to the Game! *\n\n";
	cout << "\t -------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\t         ___       ___   ___  _______   ___  ___  ___   ___    ________  __________  _________  ________  _________       \n";
	cout << "\t        /  /      /  /  /  / /  ____/  /  / /  / /  /__/  /   /  _____/ /___   ___/ /  ___   / /  __   / /  ______/       \n";
	cout << "\t       /  /      /  /  /  / /  /      /    ___/ /_____   /   /  /____      /  /    /  /  /  / /  _____/ /  /______        \n";
	cout << "\t      /  /____  /  /__/  / /  /____  /  /|  |   _____/  /   _____   /     /  /    /  /__/  / /  /      /  /______         \n";
	cout << "\t     /_______/ /________/ /_______/ /__/ |__| /________/   /_______/     /__/    /________/ /__/      /_________/         \n";
	cout << "\t                                                                                                                          \n";
	cout << "\t--------------------------------------------------------------------------------------------------------------------------\n";
 
	menu();
	
	system ("cls");
	
return 0;
}

//void loading(){
//	
//		//Loading Screen
//		
//	initscr();
//	for (int h=0 ; h <2 ; h++){
//		clear();
//	
//	
//	mvprintw(2,20, "Please Wait a Second ");
//	refresh();
//	Sleep(500);
//	
//	mvprintw(2,43, "-");
//	refresh();
//	Sleep(500);
//	
//	mvprintw(2,45, "-");
//	refresh();
//	Sleep(500);
//	
//	mvprintw(2,47, "-");
//	refresh();
//	Sleep(500);
//	
//	
//}
//	clear();
//	
//	printw("\t\t   _____________________\n");
//	printw("\t\t   | Loading Complete! |\n");
//	printw("\t\t   |___________________|\n");
//
//	getch();
//	clear();
//	
//}

void menu(){
	
	// MULAI

	
	cout << "\n\t\t\t\t\t\t        - Press Any Key to Continue -\n\n\n\n\n\n\n\n\n\n\n";
	
	system("pause");	// untuk menahan layar pada program yang sedang dijalankan.
	system("cls");
	
	
	cout<<"\n\n   + Intructions +\n";
	cout<<"   ===============\n";
	
	cout<<"   Selamat datang di game yang bertemakan menambang mineral\n";
	cout<<"   tugas anda sebagai pemain adalah mengumpulkan seluruh\n";
	cout<<"   mineral yang ada diseluruh lantai pada stope.\n\n\n";
	
	cout<<"   + Characters +\n";
	cout<<"   ===============\n";
	
	cout<<"   X = Mineral -> (Dimana kalian bisa mendapatkan Stone, Gold, Cooper)\n\n";
	cout<<"   P = Anda\n\n";
	cout<<"   # = Tangga\n\n\n";
	
	cout<<"   + How To Play +\n";
	cout<<"   ==============\n";
	
	cout<<"   Cara memainkan game ini yaitu dengan mengarahkan P (character player)\n";
	cout<<"   dengan menggunakan shourcut keyboard berikut,\n\n";
	
	cout<<"   W = Atas, S = Bawah, A = Kiri, D = Kanan\n\n\n";
	
	cout<<"   Jika sudah mengerti, let's play the Game!!\n\n";
	
	system ("pause");
	system ("cls");
	
	map();
	
}

void again(){
	
	char pilih;
	
	cout << "\n\n\n\n\n\n\t\t\t\t\tApakah Ingin Bermain Kembali (y/t) ? ";
	cin >> pilih;
	
	if(pilih=='y'||pilih=='Y'){
		main();
	}
	else{
		system("cls");
		cout << "\n\n\n\t\t\t ~~ Terima Kasih Telah Memainkan Game Kami ~~";
		cout << "\n\n\n\t\t\t\t         + Credits +\n"; 
		cout << "\t\t\t\t         ===========\n"; 
		cout << "\t\t\t       M. Abdul Adhim      - 2217051030\n";
		cout << "\t\t\t       M. Zidny Ilmy       - 2217051162\n";
		cout << "\t\t\t       Ngasiroh Nurjayatri - 2257051032\n\n\n\n";
	
	system ("pause");
	}
}

void map(){
	
	string map[15][15];		
	int x,y;				
	int a=13,b=13;			// koordinat awal Chararter Player (p).
	int nilai=0;			// mengembalikan nilai score secara default.
	char move;				// deklarasi variabel move.
	
//Map Dungeon

 	for(x=0;x<15;x++){
		for(y=0;y<15;y++){	
			if(x==0 || x==14){ 
				map[x][y]="-"; 
			}
			
			else{
				// koordinat finish.
				map[3][2]="#";	
				// koordinat titik/makanan.
				map[8][11]="*";	
				map[5][13]="*";
				map[6][12]="*";
				map[3][8]="*";	
				map[9][12]="*";
				map[4][10]="*";
				map[7][5]="*";	
				map[5][11]="*";
				map[6][9]="*";
				map[12][9]="*";
			}
		}		
	}
	
	map[a][b]="p"; //posisi Character Player
	
	cout << "\n";
	cout << "     Dungeon : 1";
	cout << "\n\n";
	
	// menampilkan dungeon
	for(x=0;x<15;x++){
		for(y=0;y<15;y++){
			cout << map [x][y] << " ";	
		}
		cout << endl;
	}
	
	while(true){
		cout << ">>>   Attention! objek bergerak-gerak";
		
		move = getche(); // keyword yang ditekan di proses langsung.
		
		if(move=='s'||move=='S'){
			a++;				 
			if(a>0){			
				map[a-1][b]=" "; 
			}
		}
		else if(move=='w'||move=='W'){
			a--;				 
			if(a>0){			 
				map[a+1][b]=" "; 
			}
		}
		else if(move=='a'||move=='A'){		 
			b--;				 
			if(b>0){			 
				map[a][b+1]=" "; 
			}
		}
		else if(move=='d'||move=='D'){
			b++;				 
			if(b>0){			 
				map[a][b-1]=" "; 
			}
		}
		
		if(map[a][b]=="*"){    	 // maka nilai + 1.
			nilai+=1;
		}
		
		if(map[a][b]=="#" && nilai>=10){  	    //Pemain dinyatakan menang ketika posisi character player pada  #, dan score >= 10.
			system("cls");
			cout << "\n\n\n\n\n\t\t\t\t\t        + Congratulations!! +\n"; 
			cout << "\t\t\t\t\tAnda Telah Menyelesaikan Game Ini :D\n";
			cout << "\t\t\t\t\t   Ditunggu Dungeon Selanjutnya...\n\n\n";
			again(); 
			break;
		}
		else if(map[a][b]=="#" && nilai<10){	//ketika koordinat pacman = 0, tetapi score < 50, maka pemain kalah.
			system("cls");
			cout << "\n\t\t\t\t          Yah, Target Tidak Tercapai  :(";
			cout << "\n\n\t\t\t\t                    Nilai Anda: " << nilai;
			again(); 						
			break;
			
		}
		
		system("cls");
		
		map[a][b]="p";						// menampilkan kembali character player setiap digerakkan.
		
		cout << "\n";
		cout << "     Dungeon : 1";
		cout << "\n\n";
	
		for(x=0;x<15;x++){  				// menampilkan kembali map setiap character player digerakkan.
			for(y=0;y<15;y++){
				cout << map [x][y] << " ";
			}
			cout << endl;
		}
	}
}

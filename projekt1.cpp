#include <iostream>

using namespace std;

int silnia(int a){
	buf = 1;
	for(int i=1; i<a;i++){
		buf=buf*i;
	};
	return buf;
}
bool czyPierwsza(int a){
	
	bool pierwsza = false;
	if(a == 1){
	return true;
	}

	for(int i =2;i<a;i++){
		if(a/i == 1){
		return true;
		}
	};
	return pierwsza;


};

int main() {
    int a;
    cout << "Podaj liczbe calkowita ";
    cin >> a;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
	cout << "2. Czy liczba jest pierwsza" << endl;
       	cin >> wyjscie;
    	
	if(wyjscie == 1){
		cout<<silnia(a)<<endl;
	}else if(wyjscie = 2){
		cout<<czyPierwsza(a)<<endl;
	}

    } while(wyjscie != 0);
    return 0;
}

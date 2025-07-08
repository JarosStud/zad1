#include <iostream>

using namespace std;

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
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}

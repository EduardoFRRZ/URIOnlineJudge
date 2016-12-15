#include <iostream>
using namespace std;

int main(){
	int j = 7;
	for(int i = 1; i <= 9; i = i+2){
		int cont = 0;
		while(cont != 3){
			cout << "I=" << i << " J=" << j << endl;
			j = j -1;
			cont++;
		}
		if(cont == 3){
			j = j + 5;
		}	
	}	
	return 0;
}
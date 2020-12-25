#include <bits/stdc++.h>
using namespace std;

int main(){

    	int N;
    	cin >> N;

    	for (int i = 0; i < N; i++) {

    		long long X;
    		cin >> X;
    		int sequenciaMaxima = 0;
    		int sequenciaAtual = 0;

    		while (X > 0) {
    			

    			if (X % 2 == 1) {

    				sequenciaAtual++;
    			} else {

    				if (sequenciaAtual > sequenciaMaxima) {

    					sequenciaMaxima = sequenciaAtual;
    				}

					sequenciaAtual = 0;
				}
    			X /= 2;
    		}

			if (sequenciaAtual > sequenciaMaxima) {

				sequenciaMaxima = sequenciaAtual;
			}

			cout << sequenciaMaxima << endl;
    	}
	
}

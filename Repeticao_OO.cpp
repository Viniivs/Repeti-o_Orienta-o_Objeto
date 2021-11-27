
#include <iostream>

using namespace std;

class vetores{
int vet[5]; 
int i,j, valor;
  public: 
    int veto(int TAM[5]);
};

int vetores::veto(int TAM[5]){
	 
    //preenche o vetor
    for (i = 0; i < 5; i++) {
        cout << "Digite o " << i+1 << " valor"<< endl;
        cin >> vet[i];
    }

    for (i = 0; i < 5; i++) {
        for (j = i+1 ; j < 5; j++) {
            if (vet[i] == vet[j]) {
                cout << "Valor repetido : " << vet[i] << " nos indices " << i+1 <<" e " << j+1 << endl;
                
            
            }
        }
    }
}


int main(){
    int vet[5];
   vetores repeticao;
   repeticao.veto(vet);
  

    return 0;
}

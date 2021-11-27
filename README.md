# Repeticao_Orienta-o_Objeto
Orientação de Objeto em repetição do valor no vetor;
Ter Windows instalado com o software DEV++; 
Rodar o script em C++;
Ao executar o código o usuário terá que digitar 5 valores aleatórios e entre esses 5 , digitar 2 números repetidos;
O código deve printar na tela para o usuário esses 2 valores repetidos;

Definindo a classe;
 
  class vetores{
  int vet[5]; 
  int i,j, valor;
    public: 
      int veto(int TAM[5]);
  };

Definindo a entrada de valores digitado pelo usuário;

  int vetores::veto(int TAM[5]){
  
      for (i = 0; i < 5; i++) {
         cout << "Digite o " << i+1 << " valor"<< endl;
         cin >> vet[i];
     }
     
Função detectar os valores repetidos e printar na tela os respectivos resultados;

  for (i = 0; i < 5; i++) {
          for (j = i+1 ; j < 5; j++) {
              if (vet[i] == vet[j]) {
                 cout << "Valor repetido : " << vet[i] << " nos indices " << i+1 <<" e " << j+1 << endl;
                
            
             }
           }
         }
       }
       
       
Chamamento da função;

    int main(){
    int vet[5];
   vetores repeticao;
   repeticao.veto(vet);
  

    return 0;
}

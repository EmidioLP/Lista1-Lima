#include <iostream>
#include <math.h>
#include <stdlib.h>


using namespace std;

int *V, n, maior, menor, posicao;
int *GeraVetor(int tam, int *vetor){
    //for(int j=0; j<n; j++)
    vetor= (int*)malloc(tam*sizeof(int));
    return vetor;
}

int *EntraVetor(int tam, int *vetor){
    for(int j=0; j<tam; j++){
    maior = 0;
    do {
    cout<<"Digite o valor da posição "<<j+1<<": ";
    cin>>vetor[j];}
    while (vetor[j] < 0);
    
    if (vetor[j] > maior){
          maior = vetor[j];
          posicao = j+1;
      }}
          
    return vetor;
}

void MostraVetor(int tam, int *vetor){
    for(int j=0; j<tam; j++){
    if (j==0) cout<<"V=["<<vetor[j]<<","; else
        if (j<tam-1) cout<<vetor[j]<<", "; else
          cout<<vetor[j]<<"]"<<endl;
          }
      }
    
    
int main(){ 
cout<<"Qual o tamanho do vetor? ";
cin>>n;


V=GeraVetor(n,V);
V=EntraVetor(n,V);
MostraVetor(n,V);

cout<< "O maior elemento é: "<< maior<<endl;
cout<< "Sua posição é: "<<posicao<<endl;

free(V);
return 0;

}

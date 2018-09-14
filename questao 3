#include <iostream>

using namespace std;

int *V, n, maior;
int *GeraVetor(int tam, int *vetor){
    //for(int j=0; j<n; j++)
    vetor= (int*)malloc(tam*sizeof(int));
    return vetor;
}

int *EntraVetor(int tam, int *vetor){
    for(int j=0; j<tam; j++){
    cout<<"Digite o valor da posição "<<j+1<<": ";
    cin>>vetor[j];}
    return vetor;
}

void MostraVetor(int tam, int *vetor){
    for(int j=0; j<tam; j++){
    if (j==0) cout<<"V=["<<vetor[j]<<","; else
        if (j<tam-1) cout<<vetor[j]<<", "; else
          cout<<vetor[j]<<"]"<<endl;
          }
      }
      
void MostraMaior(int tam, int*vetor){
    for(int j=0; j<tam; j++){
    if (vetor[j] > maior)
          maior = vetor[j]; 
    }
    cout<< "O maior elemento é: "<<maior<<endl;
    }
    
    
int main(){ 
cout<<"Qual o tamanho do vetor? ";
cin>>n;

V=GeraVetor(n,V);
V=EntraVetor(n,V);
MostraVetor(n,V);
MostraMaior(n,V);

free(V);
return 0;

}

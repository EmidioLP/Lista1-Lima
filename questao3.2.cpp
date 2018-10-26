#include <iostream>
#include <math.h>
#include <stdlib.h>


using namespace std;

int *V, n, ma, me;
int *GeraVetor(int tam, int *vetor){
    //for(int j=0; j<n; j++)
    vetor= (int*)malloc(tam*sizeof(int));
    return vetor;
}

int *MostraMaior(int tam, int*vetor){
    for(int j=1; j<tam; j++){
    cout<<"Digite o valor da posição "<<j+1<<": ";
    cin>>vetor[j];
    if (vetor[j] > maior)
          maior = vetor[j]; 
    
int *EntraVetor(int tam, int *vetor){
    
    cout<<"Digite o valor da posição "<<1<<": ";
    cin>>vetor[0];
    ma = vetor[0];
    me = vetor[0];    
    
    for(int j=1; j<tam; j++){
    cout<<"Digite o valor da posição "<<j+1<<": ";
    cin>>vetor[j];
    if (vetor[j] > ma)
          ma = vetor[j]; 
    if (vetor[j] < me)
        me = vetor[j];
        
      }
    
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

cout<<"O maior número do vetor é: "<<ma<<endl;
cout<<"O menor número do vetor é: "<< me<<endl;

free(V);
return 0;

}

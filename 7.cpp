#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int *V, n, posicao=1, v;
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
      
      
void ProcuraVetor(int valor, int tam, int *vetor){

	for(int j=0; j<tam; j++){
	 
        if (vetor[j]==valor){
		
        	cout<<"Valor encontrado!"<<endl;
            cout<<"Valor está localizado na posição: "<<posicao<<endl;}
    	else{
		
        	posicao+=1;
        	
        	if(posicao>tam)
        		cout<<"Valor não encontrado"<<endl;}
}
}
                  
int main(){
cout<<"Qual o tamanho do vetor?";
cin>>n;

V= GeraVetor(n, V);
V= EntraVetor(n,V);

cout<<"Digite o valor a ser encontrado:";
cin>>v;
ProcuraVetor(v, n, V);
free(V);

return 0;
}

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int **M1, l, c, **Mi;

int **GeraMatriz(int linha, int col, int **matriz)
{
	matriz = (int**)malloc(col * sizeof(int));
	
	for(int j = 0; j < linha; j++)
		matriz[j] = (int*)malloc(col * sizeof(int));
	return matriz;
}

int **EntraMatriz (int linha, int coluna, int **matriz){	
	for(int i = 0; i < linha; i++)
		for(int j = 0; j < coluna; j++){
			cout << "digite M[ " << i + 1 << "][" << j + 1 << "]: " ;				
			cin >> matriz[i][j];
	}
	return matriz;
}


void LiberaMatriz(int linha, int **matriz)
{
	for (int i = 0; i < linha; i++)
		free(matriz[i]);
	free(matriz);
}


int **triangularsuperior(int linha, int coluna, int **matriz){

	   for (int i=0; i<linha; i++){ 
      for (int j=0; j<coluna; j++) 
         if (j > i) 
            matriz[i][j] = 0; 
   } 
   cout<<"Resultado: "<<endl;
   for(int i=0; i<linha; i++) { 
      for (int j=0; j<coluna; j++) 
         cout << "\t" << matriz[i][j]; 
      cout << endl;}
return matriz;
   } 	


int main () { 
cout<<"Qual o tamanho da matriz? "<<endl;
cin>>l>>c;

M1 = GeraMatriz(l,c,M1);
M1 = EntraMatriz(l,c,M1);
M1 = triangularsuperior(l,c,M1);

return 0;
   } 

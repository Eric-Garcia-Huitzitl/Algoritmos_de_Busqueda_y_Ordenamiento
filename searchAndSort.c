#include <stdio.h>
#include <stdlib.h>
#define  Tam 5

void BusquedaLinealConMarcador(int *ptr, int elem);
void BubbleSort(int *ptr);
void Mostrar(int *ptr);
int BusquedaBinaria(int *ptr,int elem,int tam); 


int main(){; 
  int arreglo[Tam]={9,7,4,10,12};
  
  BusquedaLinealConMarcador(arreglo,10);
  Mostrar(arreglo); 
  BubbleSort(arreglo); 
  Mostrar(arreglo); 
  BusquedaBinaria(arreglo,12,Tam);
 
 return 0; 
}
void BusquedaLinealConMarcador(int *ptr, int elem){
  int i = 0; 
  while(i<=Tam){
    if (ptr[i]==elem)printf("El elemento %d ha sido encontrado.\n\n", ptr[i]); 
    i++; 
  }
  if(i==Tam){printf("El elemento no ha sido encontrado.\n");}
  
}

void BubbleSort(int *ptr){
  int i=0,aux=0,j=0;
  for(j=0;j<Tam;j++){
    for(i = 0 ; i<Tam; i++){
    if(ptr[i]>ptr[i+1]){
      aux=ptr[i+1];
      ptr[i+1]=ptr[i];
      ptr[i]=aux;

    }
  }
  }
}
void Mostrar(int *ptr){
  int i = 0 ;
  for(i=0; i<Tam; i++){
    printf("%d-",ptr[i]); 
  }
  printf("\n\n"); 
}
int BusquedaBinaria(int *array,int searched,int arraySize){
  int first=0;
  int middle;
  int last = arraySize - 1 ; 
  while (first <= last){
    middle = (first + last) / 2 ;
    if(searched == array[middle]){
      printf("Se encuentra en la posicion: %d\n\n", middle + 1);
      return array[middle];
    }else{
      if(array[middle]>searched){
	last = middle - 1;
      }else{
	first = middle + 1; 
      }
    }
  }
  return -1; 
}


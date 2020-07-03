#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "string.h"

typedef struct{

        int id;
        char nombre[20];
        int infectados;
        int recuperados;
        int muertos;

}ePais;

int main()
{

    /*Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int)
     y muertos(int). Desarrollar una función llamada actualizarRecuperados que reciba
     el país y los recuperados del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada. */

    ePais pais1={1111,"Argentina",40,50,5};
    char cadena[5]={"abcde"};



     printf("%d\n",pais1.recuperados);
    pais1.recuperados=actualizarRecuperados(pais1,5);
    printf("Recuperados actualizados %d\n",pais1.recuperados);


    printf("%s\n",cadena);
    strcpy(cadena,invertirCadena(cadena));
    printf("%s\n",cadena);



    return 0;
}


void actualizarRecuperados(ePais pais, int recuperadosDia){


    ePais auxPais;

    auxPais.recuperados=pais.recuperados+recuperadosDia;

    pais.recuperados=auxPais.recuperados;

}


char invertirCadena(char cadena[]) {

  int TAM = strlen(cadena);
  char auxCadena[TAM];

  char aux;

  strcpy(auxCadena,cadena);

  for (int i = 0 ; i < TAM ;i++)
  {
      for(int j=TAM-1;j>0;j--){

        aux = auxCadena[i];
        auxCadena[i] = auxCadena[j];
        auxCadena[j] = aux;
      }

  }
  return auxCadena;
}

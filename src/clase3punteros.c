/*
 ============================================================================
 Name        : clase3punteros.c
 Author      : martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//PUNTEROS

#include <stdio.h>
#include <stdlib.h>
 int dividir(int operadorUno, int operadorDos,float* direccionDeVariableDeRetorno);
int main(void) {
	setbuf(stdout,NULL);

    int uno=30;
    int dos=2;
    float resultado;
    int siHuboErrorVariableFueraDeFuncionDividir;

    siHuboErrorVariableFueraDeFuncionDividir=dividir(uno,dos,&resultado);

    if(siHuboErrorVariableFueraDeFuncionDividir==1){
    	printf("no se puede dividir por 0 ");
    }else {

    	printf("la divicion da como resultado %f\n ",resultado);
    }
  printf("la direccion de resultado fuera de la funsion es %d\n",&resultado);
    return EXIT_SUCCESS;

 }


    int dividir(int operadorUno, int operadorDos,float* direccionDeVariableDeRetorno){
    	float resultado;
    	int huboError;

     printf("la direccion de resultado en la funcion dividir es : %d \n" ,direccionDeVariableDeRetorno);

       if (operadorDos != 0 ){

    	   resultado = operadorUno / operadorDos;

    	   (*direccionDeVariableDeRetorno)=resultado;

    	   huboError=0;
       }else{
    	   huboError=1;
       }

       return huboError;
       }








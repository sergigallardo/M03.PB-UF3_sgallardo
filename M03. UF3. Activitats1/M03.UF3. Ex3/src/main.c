/*
 * main.c
 *
 *  Created on: 15 abr. 2021
 *      Author: sergi
 */
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
void main(){
	int op;
		printf("Selecciona una acció a realitzar:\n");
		printf("1.Crear un fitxer.\n");
		printf("2.Afegir o escriure un text.\n");
		printf("3.Mostra el contingut de un fitxer.\n");
		printf("4.Sortida.\n");
		printf("Opció:\n");
		scanf("%i",&op); //Input per seleccionar l'acció a realitzar.
		switch(op){
			case 1:
				create();
				break;
			case 2:
				write();
				break;
			case 3:
				read();
				break;
			case 4:
				printf("EXIT....");
				break;
		}
}

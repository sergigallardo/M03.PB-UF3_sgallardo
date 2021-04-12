/*
 * functions.c
 *
 *  Created on: 12 abr. 2021
 *      Author: sergi
 */

#include <stdio.h>
#include "functions.h"

void missatge (){
	FILE *stream;
		char text[100];
		printf("Introdueix el text desitgat:\n");
		scanf("%[^\n]",text); //Input text ("%[^\n]" serveix per escapar espais entre les paraules).
		stream=fopen("/home/sergi/Documentos/ex1/text.txt","a");//Ruta on es creara el arxiu amb el text introduit per el input anterior.
		if (stream == 0) {
			perror("Error: ");
		}
		else{
			fprintf(stream,"%s", text);
		}
		fclose(stream);
}

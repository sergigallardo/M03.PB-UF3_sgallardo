/*
 * functions.c
 *
 *  Created on: 15 abr. 2021
 *      Author: sergi
 */


#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void create(){
	FILE *stream;
	char route[100];
		printf("Introdueix la ruta on vols crear el fitxer:\n");
		scanf(" %[^\n]", &route);
		stream = fopen(("%s",route), "a");
	printf("Arxiu creat correctament | Ruta arxiu --> %s",route);
}

void write(){
	FILE *stream;
	char text[100],route[100];
	printf("Introdueix la ruta del fitxer:\n");
	scanf(" %[^\n]", &route);
	printf("Introdueix el text desitgat:\n");
	scanf(" %[^\n]",text); //Input text ("%[^\n]" serveix per escapar espais entre les paraules).
	stream = fopen(("%s",route), "w");
	if (stream == 0) {
		perror("Error: ");
		}
	else{
		fprintf(stream,"%s", text);
		}
		fclose(stream);
		printf("Dades afegides | Ruta arxiu --> %s",route);
}

void read(){
	 FILE *fp;
	 char str,route;
	 printf("Introdueix la ruta del fitxer:\n");
	 	scanf(" %[^\n]", &route);
	 fp = fopen (("%c",route), "r");
	 if (fp == NULL){
		 printf("El fitxer no existeix o no es pot obrir el document.\n");
		 exit(0);
	 }
	 while (!feof(fp)){
		 	 printf ("%c", str);
		 	 str = fgetc(fp);
	 }
	 fclose(fp);

}

#include <graphics.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <dos.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void MenuCentral();
void MenuDatos();
void MenuOperando();
void MenuOperando1();
int Imprimir(int*, int*, int, int, int);
int SumaCara(int*, int*, int, int, int);
int RestaCara(int*, int*, int, int, int);
int SumaColumna(int*, int*, int, int, int);
int SumaFila(int*, int*, int, int, int);
int RestaFila(int*, int*, int, int, int);
int RestaColumna(int*, int*, int, int, int);

int main(){
	int *ptr, *ptl;
	int caras, columnas, filas, menudatos, lectura, eleccion, operando, operando1, operando2, band=0;
	MenuCentral();
	scanf("%d",&lectura);
	system("cls");
	caras=lectura;
	columnas=lectura;
	filas=lectura;
	int cubo[caras][filas][columnas];
	do{
	MenuDatos();
	scanf("%d",&eleccion);
	switch (eleccion){
		case 1:{
			printf("\nMuy bien, no es como que valga la pena meter los datos manualmente\n");
			int i=0;
		    srand (time(NULL));
		    for (ptr=&cubo[0][0][0];ptr<=&cubo[caras-1][columnas-1][filas-1];ptr++, i++){
			    *ptr = rand()%50;
			    i=i+1;
			    printf("Aleatorio Generado en Cubo posicion No.%d vale: %d\n",i,*ptr);	
			    i=i-1;
				}
			band=1;
			break;
		}
		case 2:{
			int i=0;
			printf("\nExcelente, diviertete llenando el cubo!!!\n");
			for (ptr=&cubo[0][0][0];ptr<=&cubo[caras-1][columnas-1][filas-1];ptr++, i++){
				i=i+1;
				printf("Introduzca el dato correspondiente  No.%d:",i);
				i=i-1;
				scanf("%d",ptr);
			}
			band=1;
			break;
		}
		default:{
			printf("\nOpcion no valida, vuelva a intentar...\n\n");	
		}
	}
	}while (band==0);
	system ("cls");
	ptl=&cubo[0][0][0];
	printf("\nContinuemos, ya hemos creado su cubo, veamos como se ve:\n");
	Imprimir(ptl, ptr, caras, filas, columnas);
	MenuOperando();
	scanf("%d",&operando);
	if (operando==1){
		MenuOperando1();
		scanf("%d",&operando1);
		system("cls");
		if(operando1==1){
			SumaCara(ptl, ptr, caras, filas, columnas);
		}
		else if(operando1==2){
			SumaFila(ptl, ptr, caras, filas, columnas);
		}
		else if(operando1==3){
			SumaColumna(ptl, ptr, caras, filas, columnas);
		}
		else{
		printf("Lo que desea ni esta en el menu\n");
		}
	}
	else if (operando==2){
		MenuOperando1();
		scanf("%d",&operando1);
		system("cls");
		if(operando1==1){
			RestaCara(ptl, ptr, caras, filas, columnas);
		}
		else if(operando1==2){
			RestaFila(ptl, ptr, caras, filas, columnas);	
		}
		else if(operando1==3){
			RestaColumna(ptl, ptr, caras, filas, columnas);
		}
		else{
		     printf("\n\n\t\tUNA DISCULPA PERO NO ELIGIO UNA OPCION VALIDA, VUELVA A INTENTAR...");
		}
	}
	else 
		printf("\n\n\t\tUNA DISCULPA PERO NO ELIGIO UNA OPCION VALIDA, VUELVA A INTENTAR...");
	return 0;
}


void MenuCentral(){
	system("cls");
	printf("\t\t\t\t              CALCULADORA DE CUBO\n");
	printf("\nEste programa le ayudara a sumar, multiplicar o restar, los valores de un cubo generados aleatoriamente\n");
	printf("\nDefina el tamaño de su cubo\n");
		printf("\nElija el numero de caras, columnas y filas [n][n][n], introduzca n:");
	printf("\n\n\n\t\t\t\t               ELIGA SU OPCION:");
}
void MenuDatos(){
	printf("\t\t\t\t         ¿COMO DESEA MANEJAR SUS DATOS?\n");
	printf("\n\nSeleccione la modalidad de insersion de datos\n\n");
	printf("1.Generar Datos Aleatorios del 1 al 50\n");
	printf("2.Yo tengo otros datos, y deseo introducirlos\n\n\n");
	printf("\n\n\n\t\t\t\t               ELIGA SU OPCION:");
}
void MenuOperando(){
	system("cls");
	printf("\t\t\t\t 	¿AHORA COMO PROCEDEMOS?:");
	printf("\n1.Procedamos con Sumas");
	printf("\n2.Procedamos con Restas");
	printf("\n\n\n\t\t\t\t               ELIGA SU OPCION:");
}
void MenuOperando1(){
	system("cls");
	printf("\t\t\t\t 	¿DONDE APLICAR LAS OPERACIONES?:");
	printf("\n1.Caras");
	printf("\n2.Filas");
	printf("\n3.Columnas\n");
	printf("\n\n\n\t\t\t\t               ELIGA SU OPCION:");
}

int Imprimir(int *ptl, int *ptr, int caras, int filas, int columnas){ //aun esta en desarrollo, como veras no es funcional todavia...
	system("cls");
	int gd= DETECT, gm, cont=1, cont1=1, cont2=1, puntx=45, punty=10, Term, term, term1, Term1;
	int *ptt;
	char *ptb;
	char bufer[caras*filas*columnas];
   	term=columnas*25;
   	Term=filas*35;
	ptt=ptl;
	ptb=bufer;
	sprintf(ptb,"%d",*ptt); 
	initwindow(3000,1080,"NOMBRE",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(1);
	Term1=(40+Term);
	setcolor(cont2);
	rectangle(35,5,Term1,(term+10));
	int x1=60+Term1, x2=160+Term1;
	line(x1,80,x2,180);
	line(x2,180,x2,380);
	line(x2,380,x1,280);
	line(x1,280,x1,80);
	for(;ptt<ptr;ptt++,ptb++){	
		sprintf(ptb, "%d",*ptt);
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(puntx,punty,ptb);
		if (cont==columnas){
			punty=punty+25;
			puntx=10;
			cont=0;
		}
		if (cont1==(filas*columnas)){
			punty=punty+45;
			Term1=40+Term;
			term1=(punty)+term+5;
			if (cont2!=caras){
				setcolor(cont2+1);
				rectangle(35,punty-5,Term1,term1);
				x1=x1+30;
				x2=x2+30;
				line(x1,80,x2,180);
				line(x2,180,x2,380);
				line(x2,380,x1,280);
				line(x1,280,x1,80);
			}
			puntx=10;
			cont1=0;
			cont2=cont2+1;
		}
		cont1=cont1+1;
		cont=cont+1;
		puntx=puntx+35;
	}
	delay(9999);
	closegraph();
	return 0;
	}
	

int SumaCara(int *ptl, int *ptr, int caras, int filas, int columnas){
	int sumatoria=0;
	int contador=1;
	int i=0;
	int cara=1;
	for(;ptl<=ptr;ptl++){
		sumatoria=sumatoria+*ptl;
		if(contador==(filas*columnas)){ 
			printf("\nEste es el resultado de la Cara No. %d",cara);
			printf("\n\t%d\n",sumatoria);
			sumatoria=0;
			contador=0;
			cara=cara+1;
		}
		contador=contador+1;
		i=i+1;
	}
	printf("\n\nGracias, hemos finalmente acabado",sumatoria);
}

int SumaFila(int *ptl, int *ptr, int caras, int filas, int columnas){
	int sumatoria=0;
	int contador=1;
	int i=0;
	int cara=1, fila=1;
	for(;ptl<=ptr;ptl++){	
	sumatoria=sumatoria+*ptl;
		if(contador==(filas)){
			printf("\nEste es el resultado de la Fila No. %d",fila); 
			printf("\n\t%d\n",sumatoria);
			sumatoria=0;
			contador=0;
			fila=fila+1;
		}
		contador=contador+1;
	}
	printf("\n\nGracias, hemos finalmente acabado",sumatoria);
}

int SumaColumna(int *ptl, int *ptr, int caras, int filas, int columnas){
	int sumatoria=0;
	int contador=1;
	int i=0;
	int cara=1, columna=1;
	for(;ptl<=ptr;ptl++){	
	sumatoria=sumatoria+*ptl;
		if(contador==(columnas)){
			printf("\nEste es el resultado de la Columna No. %d",columna); 
			printf("\n\t%d\n",sumatoria);
			sumatoria=0;
			contador=0;
			columna=columna+1;
		}
		contador=contador+1;
		i=i+1;
	}
	printf("\n\nGracias, hemos finalmente acabado",sumatoria);	
}

int RestaCara(int *ptl, int *ptr, int caras, int filas, int columnas){
	int sumatoria=0;
	int contador=1;
	int i=0;
	int cara=1;
	for(;ptl<=ptr;ptl++){
		sumatoria=sumatoria-*ptl; 
		if(contador==(filas*columnas)){
			printf("\nEste es el resultado de la Cara No. %d",cara);
			printf("\n\t%d\n",sumatoria);
			sumatoria=0;
			contador=0;
			cara=cara+1;
		}
		contador=contador+1;
		i=i+1;
	}
	printf("\n\nGracias, hemos finalmente acabado",sumatoria);
}

int RestaFila(int *ptl, int *ptr, int caras, int filas, int columnas){
	int sumatoria=0;
	int contador=1;
	int i=0;
	int cara=1, fila=1;
	for(;ptl<=ptr;ptl++){	
	sumatoria=sumatoria-*ptl;
		if(contador==(filas)){
			printf("\nEste es el resultado de la Fila No. %d",fila);
			printf("\n\t%d\n",sumatoria);
			sumatoria=0;
			contador=0;
			fila=fila+1;
		}
		contador=contador+1;
		i=i+1;
	}
	printf("\n\nGracias, hemos finalmente acabado",sumatoria);
}

int RestaColumna(int *ptl, int *ptr, int caras, int filas, int columnas){
	int sumatoria=0;
	int contador=1;
	int i=0;
	int cara=1, columna=1;
	for(;ptl<=ptr;ptl++){	
	sumatoria=sumatoria-*ptl;
		if(contador==(filas)){
			printf("\nEste es el resultado de la Columna No. %d",columna);
			printf("\n\t%d\n",sumatoria);
			sumatoria=0;
			contador=0;
			columna=columna+1;
		}
		contador=contador+1;
		i=i+1;
	}
	printf("\n\nGracias, hemos finalmente acabado",sumatoria);
}

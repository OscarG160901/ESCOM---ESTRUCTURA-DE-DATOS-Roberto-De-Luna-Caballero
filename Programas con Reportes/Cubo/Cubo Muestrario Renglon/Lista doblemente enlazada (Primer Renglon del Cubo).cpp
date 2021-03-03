#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <graphics.h>
#include <time.h>
#include <dos.h>
#include <conio.h>

typedef struct nodo{
	int dato;
	struct nodo* siguiente;
	struct nodo* atras;
}nodo;

nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo(int);
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void desplegarListaPU();
void desplegarListaUP();
int Impresion(int);
int Impresion2(int dim);
void GranMenu();
void Dimensionamiento (int*);
void InsersionInicial(int);

int main(){
	int opcionMenu = 0;
	int dim, cone=0, rer, posicion;
	Dimensionamiento(&dim);
	InsersionInicial(dim);
	system("cls");
	do{
		GranMenu();
		printf("\n\n Escoja una Opcion de las ya presentadas (Elija 7 si desea volver a ver el menu): ");
		scanf("%d", &opcionMenu);
		switch(opcionMenu){
			
			case 1:
				printf("\n\n BUSCAR UN NODO EN LA LISTA \n\n");
				buscarNodo();
				system("cls");
				break;	
			case 2:
				printf("\n\n MODIFICAR UN NODO DE LA LISTA \n\n");
				modificarNodo();
				system("cls");
				break;
			case 3:
				printf("\n\n ELIMINAR UN NODO DE LA LISTA \n\n");
				eliminarNodo();
				system("cls");
				break;
			case 4:
				printf("\n\n DESPLEGAR LISTA DE NODOS DEL PRIMERO AL UTLIMO\n\n");
				Impresion(dim);
				break;
			case 5:
				printf("\n\n DESPLEGAR LISTA DE NODOS DEL Ultimo AL Primero\n\n");
				Impresion2(dim);
				break;
			case 6:
				printf("\n\n Programa finalizado...");
				break;
			case 7:
				printf("Lea de nuevo con atencion");
				system("cls");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");	
		}
	}while(opcionMenu != 6);
	return 0;
}


void insertarNodo(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
	}

	printf("\n Nodo ingresado con exito\n\n");
}

void buscarNodo(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(BLUE);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"El nodo con el dato si fue encontrado y se encuentra en el Cubo");
				delay(4000);
				closegraph();
				encontrado = 1;
			}
			
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void modificarNodo(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar para Modificar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				printf("\n El nodo con el dato ( %d ) Encontrado", nodoBuscado);
				printf("\n Ingrese el nuevo dato para este nodo: ");
				scanf("%d", &actual->dato);
				printf("\n Nodo modificado con exito\n\n");
				encontrado = 1;
			}
			
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
void eliminarNodo(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	nodo* anterior = (nodo*)malloc(sizeof(nodo));
	anterior = NULL;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar para Eliminar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				
				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = NULL;
				}else if(actual==ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(BLUE);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"El nodo con el dato ya ha sido eliminado.");
				delay(4000);
				closegraph();

				encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

int Impresion(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	int i, colorin=1, posx=150, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN EL CUBO SON:");
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(10,100,"Inicio");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(;actual!=NULL;i++,ptb++,ptbb++){
		sprintf(ptb,"%d",actual->dato);
		setcolor(colorin);
		settextstyle(BOLD_FONT, HORIZ_DIR, tam);
		outtextxy(posx,posy,ptb);
		rectangle(posx-2,posy-1,posx+termx,posy+termy);
		sprintf(ptbb,"(%d)",cont2);
		setcolor(WHITE);
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx,posy+termy,ptbb);
		if(cont2==dim){
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(posx+termx,posy+15,posx+termx+50,posy+15);
			line(posx+termx+50,posy+15,posx+termx+35,posy+5);
			line(posx+termx+50,posy+15,posx+termx+35,posy+25);
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			outtextxy(posx+termx+60,posy+5,"Ultimo");
			setcolor(colorin);
		}
		else{
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(posx+termx,posy+15,posx+termx+40,posy+15);
			line(posx+termx+40,posy+15,posx+termx+35,posy+5);
			line(posx+termx+40,posy+15,posx+termx+35,posy+25);
			line(posx+termx,posy+25,posx+termx+40,posy+25);
			line(posx+termx,posy+25,posx+termx+5,posy+15);
			line(posx+termx,posy+25,posx+termx+5,posy+35);
			setcolor(colorin);
		}
		posx=posx+90;
		if(cont==20){
			posy=posy+60;
			posx=150;
			cont=0;
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(90,posy+15,140,posy+15);
			line(140,posy+15,125,posy+5);
			line(140,posy+15,125,posy+25);
			colorin++;
			if(colorin>14)
				colorin=1;
			if(cont2==dim){
			line(150,posy+15,241,posy+15);
			line(170,posy+30,220,posy+30);
			line(190,posy+45,200,posy+45);
			}
		}
		cont++;
		cont2++;
		if(cont2>=100)
			tam=1;
		actual=actual->siguiente;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
 }
int Impresion2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=ultimo;
	int i, colorin=1, posx=150, posy=100, cont=1, cont2=1, cont3=dim, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN EL CUBO SON:");
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(10,100,"Ultimo");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(;actual!=NULL;i++,ptb++,ptbb--){
		sprintf(ptb,"%d",actual->dato);
		setcolor(colorin);
		settextstyle(BOLD_FONT, HORIZ_DIR, tam);
		outtextxy(posx,posy,ptb);
		rectangle(posx-2,posy-1,posx+termx,posy+termy);
		sprintf(ptbb,"(%d)",cont3);
		setcolor(WHITE);
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx,posy+termy,ptbb);
		if(cont2==dim){
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(posx+termx,posy+15,posx+termx+50,posy+15);
			line(posx+termx+50,posy+15,posx+termx+35,posy+5);
			line(posx+termx+50,posy+15,posx+termx+35,posy+25);
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			outtextxy(posx+termx+60,posy+5,"Inicio");
			setcolor(colorin);
		}
		else{
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(posx+termx,posy+15,posx+termx+40,posy+15);
			line(posx+termx+40,posy+15,posx+termx+35,posy+5);
			line(posx+termx+40,posy+15,posx+termx+35,posy+25);
			line(posx+termx,posy+25,posx+termx+40,posy+25);
			line(posx+termx,posy+25,posx+termx+5,posy+15);
			line(posx+termx,posy+25,posx+termx+5,posy+35);
			setcolor(colorin);
		}
		posx=posx+90;
		if(cont==20){
			posy=posy+60;
			posx=150;
			cont=0;
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(90,posy+15,140,posy+15);
			line(140,posy+15,125,posy+5);
			line(140,posy+15,125,posy+25);
			colorin++;
			if(colorin>14)
				colorin=1;
			if(cont2==dim){
			line(150,posy+15,241,posy+15);
			line(170,posy+30,220,posy+30);
			line(190,posy+45,200,posy+45);
			}
		}
		cont++;
		cont2++;
		cont3--;
		if(cont2>=100)
			tam=1;
		actual=actual->atras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
 }
void GranMenu(){
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"Menu Principal del Cubo Magico");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	outtextxy(50,60,"1.Buscar dentro del Cubo (Por ahora primer renglon)");
	outtextxy(50,100,"2.Modificar dentro del cubo (Por ahora primer renglon)");
	outtextxy(50,140,"3.Eliminar algun valor del cubo (Por ahora Primer renglon)");
	outtextxy(50,180,"4.Imprimir Por ahora primer renglon del principio al final");
	outtextxy(50,220,"5.Imprimir por ahora primer renglon del final al principio");
	outtextxy(50,260,"6.Salir del programa");
	delay(4000);
	closegraph();
}
void Dimensionamiento(int*dim){
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR,5);
 	outtextxy(10,10,"Menu Dimensionamiento del Cubo Magico");
 	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
 	outtextxy(50,60,"Este programa le va a permitir manejar los datos de un conjunto, estos se generan a su eleccion podra cambiarlos y eliminarlos");
	outtextxy(50,100,"pero primero elija el tamaño de su conjunto");
	delay(5000);
	closegraph();
	printf("Ingrese el tamaño del conjunto que va a manejar:");
 	scanf("%i",dim);
 	system("cls");
 }
void InsersionInicial(int dim){
	int rer=0, cone, posicion=0;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"Menu de Insersion Inicial");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	outtextxy(50,60,"Elija un metodo de insercion que mejor le convenga");
	outtextxy(50,100,"1.Numeros consecutivos");
	outtextxy(50,140,"2.Numeros al Azar");
	outtextxy(50,180,"3.Insercion Manual (Recomendable si desea darle un uso practico)");
	delay(4000);
	closegraph();
	printf("Elija de acuerdo a la opcion que haya decidido:");
	scanf("%d",&cone);
	do{
		if (cone==1){
			while(rer<dim){
				posicion=posicion+1;
				insertarNodo(posicion);
				rer++;
				cone=4;
			}
		}
		else if(cone==2){
			srand (time(NULL));
			while(rer<dim){
				posicion=rand()%50;
				insertarNodo(posicion);
				rer++;
				cone=4;
			}
		}
		else if(cone==3){
			system("cls");
			printf("\n Inserte uno por uno y en orden los datos a introducir:\n");
			while(rer<dim){
				printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
				scanf("%d",&posicion);
				insertarNodo(posicion);
				rer++;
				cone=4;
			}
		}
		else
			printf("\nNo eligio bien, seleccione una opcion valida...");
			cone=4;
	}while(cone!=4&&cone>0);
}

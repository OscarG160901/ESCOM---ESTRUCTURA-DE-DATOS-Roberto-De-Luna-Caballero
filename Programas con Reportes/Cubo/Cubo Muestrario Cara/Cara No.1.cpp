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
	struct nodo* arriba;
	struct nodo* abajo;
	struct nodo* caraAdelante;
	struct nodo* caraAtras;
}nodo;

nodo* primero = NULL;
nodo* ultimo = NULL;


nodo* primero2 = NULL;
nodo* ultimo2 = NULL;


nodo* primero3 = NULL;
nodo* ultimo3 = NULL;


nodo* primero4 = NULL;
nodo* ultimo4 = NULL;


nodo* primero5 = NULL;
nodo* ultimo5 = NULL;

void insertarNodo(int);
void insertarNodoR2(int);
void insertarNodoR3(int);
void insertarNodoR4(int);
void insertarNodoR5(int);
void EnlazarColumna();
void modificarNodos();
void modificarNodoC11();
void modificarNodoC12();
void modificarNodoC13();
void modificarNodoC14();
void modificarNodoC15();
int ImpresionFilas(int);
int ImprimirC1R1(int);
int ImprimirC1R2(int);
int ImprimirC1R3(int);
int ImprimirC1R4(int);
int ImprimirC1R5(int);
int ImpresionColumna(int);
int ImprimirC1C1(int);
int ImprimirC1C2(int);
int ImprimirC1C3(int);
int ImprimirC1C4(int);
int ImprimirC1C5(int);
int ImpresionCara(int);
int Suma ();
int Resta();
int Multiplicacion();
void GranMenu();
void Dimensionamiento (int*);
void InsersionInicial(int);

int main(){
	int opcionMenu = 0;
	int dim=5, cone=0, rer, posicion;
	Dimensionamiento(&dim);
	InsersionInicial(dim);
	EnlazarColumna();
	system("cls");
	do{
		GranMenu();
		printf("\n\n Escoja una Opcion de las ya presentadas (Elija 9 si desea volver a ver el menu): ");
		scanf("%d", &opcionMenu);
		switch(opcionMenu){
			
			case 1:
				modificarNodos();
				system("cls");
				break;
				
			case 2:
				ImpresionFilas(dim);
				system("cls");
				break;
			case 3:
				ImpresionColumna(dim);
				system("cls");
				break;
			case 4:
				ImpresionCara(dim);
				system("cls");
				break;
			case 5:
				Suma();
				system("cls");
				break;
			case 6:
				Resta();
				system("cls");
				break;
			case 7:
				Multiplicacion();
				system("cls");
				break;
			case 8:
				opcionMenu=8;
				break;	
			case 9:
				printf("Lea de nuevo con atencion");
				system("cls");
			default:
				printf("\n\n Opcion No Valida \n\n");	
				break;
		}
	}while(opcionMenu != 8);
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

	printf("\n Nodo R1 ingresado con exito\n\n");
}

void insertarNodoR2(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primero2==NULL){
		primero2 = nuevo;
		primero2->siguiente = NULL;
		primero2->atras = NULL;
		ultimo2 = primero2;
	}else{
		ultimo2->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo2;
		ultimo2 = nuevo;
	}

	printf("\n Nodo R2 ingresado con exito\n\n");
}

void insertarNodoR3(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primero3==NULL){
		primero3 = nuevo;
		primero3->siguiente = NULL;
		primero3->atras = NULL;
		ultimo3 = primero3;
	}else{
		ultimo3->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo3;
		ultimo3 = nuevo;
	}

	printf("\n Nodo R3 ingresado con exito\n\n");
}

void insertarNodoR4(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primero4==NULL){
		primero4 = nuevo;
		primero4->siguiente = NULL;
		primero4->atras = NULL;
		ultimo4 = primero4;
	}else{
		ultimo4->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo4;
		ultimo4 = nuevo;
	}

	printf("\n Nodo R4 ingresado con exito\n\n");
}

void insertarNodoR5(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primero5==NULL){
		primero5 = nuevo;
		primero5->siguiente = NULL;
		primero5->atras = NULL;
		ultimo5 = primero5;
	}else{
		ultimo5->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo5;
		ultimo5 = nuevo;
	}

	printf("\n Nodo R5 ingresado con exito\n\n");
}

void EnlazarColumna(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	nodo* actual2 = (nodo*)malloc(sizeof(nodo));
	actual2 = primero2;
	nodo* actual3 = (nodo*)malloc(sizeof(nodo));
	actual3 = primero3;
	nodo* actual4 = (nodo*)malloc(sizeof(nodo));
	actual4 = primero4;
	nodo* actual5 = (nodo*)malloc(sizeof(nodo));
	actual5 = primero5;
	
	
	if(primero!=NULL&&primero2!=NULL&&primero3!=NULL&&primero4!=NULL&&primero5!=NULL){
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			actual->arriba=NULL;
			actual->abajo=actual2;
			actual2->arriba=actual;
			actual2->abajo=actual3;
			actual3->arriba=actual2;
			actual3->abajo=actual4;
			actual4->arriba=actual3;
			actual4->abajo=actual5;
			actual5->arriba=actual4;
			actual5->abajo=NULL;
			
			actual = actual->siguiente;
			actual2 = actual2->siguiente;
			actual3 = actual3->siguiente;
			actual4 = actual4->siguiente;
			actual5 = actual5->siguiente;
			
		}
		
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
	
}
void modificarNodos(){
	int Elec1, Elec2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"Menu de Modificar Nodo");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	outtextxy(50,60,"Elija la cara que quiere trabajar:");
	outtextxy(50,100,"1.Cara No.1");
	outtextxy(50,140,"2.Cara No.2");
	outtextxy(50,180,"3.Cara No.3");
	outtextxy(50,220,"4.Cara No.4");
	outtextxy(50,260,"5.Cara No.5");
	delay(3000);
	closegraph();
	printf("Inserte su opcion:");
	scanf("%d",&Elec1);
	switch(Elec1){
		case 1:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de Modificacion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					modificarNodoC11();
					break;
				case 2:
					modificarNodoC12();
					break;
				case 3:
					modificarNodoC13();
					break;
				case 4:
					modificarNodoC14();
					break;
				case 5:
					modificarNodoC15();
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 2:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC2C1(dim);
					break;
				case 2:
					//ImprimirC2C2(dim);
					break;
				case 3:
					//ImprimirC2C3(dim);
					break;
				case 4:
					//ImprimirC2C4(dim);
					break;
				case 5:
					//ImprimirC2C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 3:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC3C1(dim);
					break;
				case 2:
					//ImprimirC3C2(dim);
					break;
				case 3:
					//ImprimirC3C3(dim);
					break;
				case 4:
					//ImprimirC3C4(dim);
					break;
				case 5:
					//ImprimirC3C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 4:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC4C1(dim);
					break;
				case 2:
					//ImprimirC4C2(dim);
					break;
				case 3:
					//ImprimirC4C3(dim);
					break;
				case 4:
					//ImprimirC4C4(dim);
					break;
				case 5:
					//ImprimirC4C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 5:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de Modificacion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC5C1(dim);
					break;
				case 2:
					//ImprimirC5C2(dim);
					break;
				case 3:
					//ImprimirC5C3(dim);
					break;
				case 4:
					//ImprimirC5C4(dim);
					break;
				case 5:
					//ImprimirC5C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		default:
			printf("No eligo algo valido");
			break;
		}
}
void modificarNodoC11(){
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
void modificarNodoC12(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero2;
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
void modificarNodoC13(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero3;
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
void modificarNodoC14(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero4;
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
void modificarNodoC15(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero5;
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
		actual=actual->abajo;
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
	outtextxy(50,60,"1.Modificar dentro del cubo (Por ahora solo del primer renglon)");
	outtextxy(50,100,"2.Imprimir Renglon Especifico (Por ahora solo de la primera Cara)");
	outtextxy(50,140,"3.Imprimir Columna Especifica (Por ahora solo de la primera Cara)");
	outtextxy(50,180,"4.Imprimir Cara Especifica (Por ahora solo de la primera Cara)");
	outtextxy(50,220,"5.Suma");
	outtextxy(50,260,"6.Resta");
	outtextxy(50,300,"7.Multiplicacion");
	outtextxy(50,340,"8.Salir");
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
	outtextxy(50,100,"pero primero elija el numero de las columnas de su cubo, este cubo simpre tendra 5 filas por cara, y 5 caras, para ser simetrico");
	outtextxy(50,140,"la eleccion debera ser 5. (Se recomienda que sea 5, aunque este cubo puede soportar n filas)");
	delay(5000);
	closegraph();
	printf("Ingrese el tamaño del conjunto que va a manejar:");
 	scanf("%i",dim);
 	system("cls");
 }
void InsersionInicial(int dim){
	int rer=0, cone, posicion=0, cont=dim;
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
			while(rer<5){
				posicion=posicion+1;
				insertarNodo(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
	
			while(rer>=5&&rer<10){
				posicion=posicion+1;
				insertarNodoR2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
	
			while(rer>=10&&rer<15){
				posicion=posicion+1;
				insertarNodoR3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
		
			while(rer>=15&&rer<20){
				posicion=posicion+1;
				insertarNodoR4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
	
			while(rer>=20&&rer<25){
				posicion=posicion+1;
				insertarNodoR5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
		}
		else if(cone==2){
			srand (time(NULL));
			while(rer<5){
				posicion=rand()%50;
				insertarNodo(posicion);
				rer++;
				printf("\nEsta creando nodo %d",posicion);
				cone=4;
			}
			while(rer>=5&&rer<10){
				posicion=rand()%50;
				insertarNodoR2(posicion);
				rer++;
				printf("\nEsta creando nodo %d",posicion);
				cone=4;
			}
			while(rer>=10&&rer<15){
				posicion=rand()%50;
				insertarNodoR3(posicion);
				rer++;
				printf("\nEsta creando nodo %d",posicion);
				cone=4;
			}
			while(rer>=15&&rer<20){
				posicion=rand()%50;
				insertarNodoR4(posicion);
				rer++;
				printf("\nEsta creando nodo %d",posicion);
				cone=4;
			}
			while(rer>=20&&rer<25){
				posicion=rand()%50;
				insertarNodoR5(posicion);
				rer++;
				printf("\nEsta creando nodo %d",posicion);
				cone=4;
			}
		}
		else if(cone==3){
			system("cls");
			printf("\n Inserte uno por uno y en orden los datos a introducir :\n");
				while(rer<5){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodo(posicion);
					rer++;
					printf("\nEsta creando nodo %d",posicion);
					cone=4;
				}
				while(rer>=5&&rer<10){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoR2(posicion);
					rer++;
					printf("\nEsta creando nodo %d",posicion);
					cone=4;
				}
				while(rer>=10&&rer<15){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoR3(posicion);
					rer++;
					printf("K\nEsta creando nodo %d",posicion);
					cone=4;
				}
				while(rer>=15&&rer<20){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoR4(posicion);
					rer++;
					printf("\nEsta creando nodo %d",posicion);
					cone=4;
				}
				while(rer>=20&&rer<25){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoR5(posicion);
					rer++;
					printf("\nEsta creando nodo %d",posicion);
					cone=4;
				}
		}
		else
			printf("\nNo eligio bien, seleccione una opcion valida...");
			cone=4;
	}while(cone!=4&&cone>0);
	system("pause");
}
int Suma (){
	int auxsum=0, aux, auxsum2=0, aux2, auxsum3=0, aux3, auxsum4=0, aux4, auxsum5=0, aux5, auxsum6=0, auxsum7=0, auxsum8=0,auxsum9=0, auxsum10=0, auxsum11=0,dim=100; 
	char bufer1[dim],bufer2[dim],bufer3[dim],bufer4[dim],bufer5[dim],bufer6[dim],bufer7[dim],bufer8[dim],bufer9[dim],bufer10[dim],bufer11[dim];
	
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	nodo* actual2 = (nodo*)malloc(sizeof(nodo));
	actual2 = primero2;
	nodo* actual3 = (nodo*)malloc(sizeof(nodo));
	actual3 = primero3;
	nodo* actual4 = (nodo*)malloc(sizeof(nodo));
	actual4 = primero4;
	nodo* actual5 = (nodo*)malloc(sizeof(nodo));
	actual5 = primero5;
	
	
	if(primero!=NULL&&primero2!=NULL&&primero3!=NULL&&primero4!=NULL&&primero5!=NULL){
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			aux=actual->dato;
			printf("\nEl dato es: %d",aux);
			printf("\nEl dato en registro es: %d",actual->dato);
			aux2=actual2->dato;
			printf("\nEl dato es: %d",aux2);
			printf("\nEl dato en registro es: %d",actual2->dato);
			aux3=actual3->dato;
			printf("\nEl dato es: %d",aux3);
			printf("\nEl dato en registro es: %d",actual3->dato);
			aux4=actual4->dato;
			printf("\nEl dato es: %d",aux4);
			printf("\nEl dato en registro es: %d",actual4->dato);
			aux5=actual5->dato;
			printf("\nEl dato es: %d",aux5);
			printf("\nEl dato en registro es: %d",actual5->dato);
			
			auxsum=auxsum+actual->dato;
			auxsum2=auxsum2+actual2->dato;
			auxsum3=auxsum3+actual3->dato;
			auxsum4=auxsum4+actual4->dato;
			auxsum5=auxsum5+actual5->dato;
			
			actual = actual->siguiente;
			actual2 = actual2->siguiente;
			actual3 = actual3->siguiente;
			actual4 = actual4->siguiente;
			actual5 = actual5->siguiente;
			
		}
		actual = primero;
		actual = actual->siguiente;
		actual2 = actual;
		actual = actual->siguiente;
		actual3 = actual;
		actual = actual->siguiente;
		actual4= actual;
		actual = actual->siguiente;
		actual5=actual;
		actual = primero;
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			aux=actual->dato;
			printf("\nEl dato es: %d",aux);
			printf("\nEl dato en registro es: %d",actual->dato);
			aux2=actual2->dato;
			printf("\nEl dato es: %d",aux2);
			printf("\nEl dato en registro es: %d",actual2->dato);
			aux3=actual3->dato;
			printf("\nEl dato es: %d",aux3);
			printf("\nEl dato en registro es: %d",actual3->dato);
			aux4=actual4->dato;
			printf("\nEl dato es: %d",aux4);
			printf("\nEl dato en registro es: %d",actual4->dato);
			aux5=actual5->dato;
			printf("\nEl dato es: %d",aux5);
			printf("\nEl dato en registro es: %d",actual5->dato);
			
			auxsum6=auxsum6+actual->dato;
			auxsum7=auxsum7+actual2->dato;
			auxsum8=auxsum8+actual3->dato;
			auxsum9=auxsum9+actual4->dato;
			auxsum10=auxsum10+actual5->dato;
			
			actual = actual->abajo;
			actual2 = actual2->abajo;
			actual3 = actual3->abajo;
			actual4 = actual4->abajo;
			actual5 = actual5->abajo;
			
		}
		auxsum11=auxsum+auxsum2+auxsum3+auxsum4+auxsum5;
		sprintf(bufer1," R1 es (%d)",auxsum);
		sprintf(bufer2," R2 es (%d)",auxsum2);
		sprintf(bufer3," R3 es (%d)",auxsum3);
		sprintf(bufer4," R4 es (%d)",auxsum4);
		sprintf(bufer5," R5 es (%d)",auxsum5);
		sprintf(bufer6," C1 es (%d)",auxsum6);
		sprintf(bufer7," C2 es (%d)",auxsum7);
		sprintf(bufer8," C3 es (%d)",auxsum8);
		sprintf(bufer9," C4 es (%d)",auxsum9);
		sprintf(bufer10," C5 es (%d)",auxsum10);
		sprintf(bufer11," La Suma de la cara es (%d)",auxsum11);
		initwindow(1900,1080,"Estructura",0,0,false,true);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,10,"Suma en las filas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,60,"Los resultados son:");
		outtextxy(50,100,bufer1);
		outtextxy(50,140,bufer2);
		outtextxy(50,180,bufer3);
		outtextxy(50,220,bufer4);
		outtextxy(50,260,bufer5);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,300,"Suma en las Columnas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,360,"Los resultados son:");
		outtextxy(50,400,bufer6);
		outtextxy(50,440,bufer7);
		outtextxy(50,480,bufer8);
		outtextxy(50,520,bufer9);
		outtextxy(50,560,bufer10);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,600,"Suma de toda la Cara");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,640,bufer11);
		delay(8000);
		closegraph();
		printf("\nLa suma en R1 es: %d",auxsum);
		printf("\nLa suma en R2 es: %d",auxsum2);
		printf("\nLa suma en R3 es: %d",auxsum3);
		printf("\nLa suma en R4 es: %d",auxsum4);
		printf("\nLa suma en R5 es: %d",auxsum5);
		system("cls");
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
int Resta(){
	int auxsum=0, aux, auxsum2=0, aux2, auxsum3=0, aux3, auxsum4=0, aux4, auxsum5=0, aux5, auxsum6=0, auxsum7=0, auxsum8=0,auxsum9=0, auxsum10=0, auxsum11=0,dim=100; 
	char bufer1[dim],bufer2[dim],bufer3[dim],bufer4[dim],bufer5[dim],bufer6[dim],bufer7[dim],bufer8[dim],bufer9[dim],bufer10[dim],bufer11[dim];
	
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	nodo* actual2 = (nodo*)malloc(sizeof(nodo));
	actual2 = primero2;
	nodo* actual3 = (nodo*)malloc(sizeof(nodo));
	actual3 = primero3;
	nodo* actual4 = (nodo*)malloc(sizeof(nodo));
	actual4 = primero4;
	nodo* actual5 = (nodo*)malloc(sizeof(nodo));
	actual5 = primero5;
	
	
	if(primero!=NULL&&primero2!=NULL&&primero3!=NULL&&primero4!=NULL&&primero5!=NULL){
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			aux=actual->dato;
			printf("\nEl dato es: %d",aux);
			printf("\nEl dato en registro es: %d",actual->dato);
			aux2=actual2->dato;
			printf("\nEl dato es: %d",aux2);
			printf("\nEl dato en registro es: %d",actual2->dato);
			aux3=actual3->dato;
			printf("\nEl dato es: %d",aux3);
			printf("\nEl dato en registro es: %d",actual3->dato);
			aux4=actual4->dato;
			printf("\nEl dato es: %d",aux4);
			printf("\nEl dato en registro es: %d",actual4->dato);
			aux5=actual5->dato;
			printf("\nEl dato es: %d",aux5);
			printf("\nEl dato en registro es: %d",actual5->dato);
			
			auxsum=auxsum-actual->dato;
			auxsum2=auxsum2-actual2->dato;
			auxsum3=auxsum3-actual3->dato;
			auxsum4=auxsum4-actual4->dato;
			auxsum5=auxsum5-actual5->dato;
			
			actual = actual->siguiente;
			actual2 = actual2->siguiente;
			actual3 = actual3->siguiente;
			actual4 = actual4->siguiente;
			actual5 = actual5->siguiente;
			
		}
		actual = primero;
		actual = actual->siguiente;
		actual2 = actual;
		actual = actual->siguiente;
		actual3 = actual;
		actual = actual->siguiente;
		actual4= actual;
		actual = actual->siguiente;
		actual5=actual;
		actual = primero;
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			aux=actual->dato;
			printf("\nEl dato es: %d",aux);
			printf("\nEl dato en registro es: %d",actual->dato);
			aux2=actual2->dato;
			printf("\nEl dato es: %d",aux2);
			printf("\nEl dato en registro es: %d",actual2->dato);
			aux3=actual3->dato;
			printf("\nEl dato es: %d",aux3);
			printf("\nEl dato en registro es: %d",actual3->dato);
			aux4=actual4->dato;
			printf("\nEl dato es: %d",aux4);
			printf("\nEl dato en registro es: %d",actual4->dato);
			aux5=actual5->dato;
			printf("\nEl dato es: %d",aux5);
			printf("\nEl dato en registro es: %d",actual5->dato);
			
			auxsum6=auxsum6-actual->dato;
			auxsum7=auxsum7-actual2->dato;
			auxsum8=auxsum8-actual3->dato;
			auxsum9=auxsum9-actual4->dato;
			auxsum10=auxsum10-actual5->dato;
			
			actual = actual->abajo;
			actual2 = actual2->abajo;
			actual3 = actual3->abajo;
			actual4 = actual4->abajo;
			actual5 = actual5->abajo;
			
		}
		auxsum11=auxsum-auxsum2-auxsum3-auxsum4-auxsum5;
		sprintf(bufer1," R1 es (%d)",auxsum);
		sprintf(bufer2," R2 es (%d)",auxsum2);
		sprintf(bufer3," R3 es (%d)",auxsum3);
		sprintf(bufer4," R4 es (%d)",auxsum4);
		sprintf(bufer5," R5 es (%d)",auxsum5);
		sprintf(bufer6," C1 es (%d)",auxsum6);
		sprintf(bufer7," C2 es (%d)",auxsum7);
		sprintf(bufer8," C3 es (%d)",auxsum8);
		sprintf(bufer9," C4 es (%d)",auxsum9);
		sprintf(bufer10," C5 es (%d)",auxsum10);
		sprintf(bufer11," La Resta de la cara es (%d)",auxsum11);
		initwindow(1900,1080,"Estructura",0,0,false,true);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,10,"Resta en las filas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,60,"Los resultados son:");
		outtextxy(50,100,bufer1);
		outtextxy(50,140,bufer2);
		outtextxy(50,180,bufer3);
		outtextxy(50,220,bufer4);
		outtextxy(50,260,bufer5);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,300,"Resta en las Columnas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,360,"Los resultados son:");
		outtextxy(50,400,bufer6);
		outtextxy(50,440,bufer7);
		outtextxy(50,480,bufer8);
		outtextxy(50,520,bufer9);
		outtextxy(50,560,bufer10);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,600,"Resta de toda la Cara");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,640,bufer11);
		delay(8000);
		closegraph();
		printf("\nLa Resta en R1 es: %d",auxsum);
		printf("\nLa resta en R2 es: %d",auxsum2);
		printf("\nLa Resta en R3 es: %d",auxsum3);
		printf("\nLa Resta en R4 es: %d",auxsum4);
		printf("\nLa Resta en R5 es: %d",auxsum5);
		system("cls");
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
int Multiplicacion(){
		int auxsum=1, aux, auxsum2=1, aux2, auxsum3=1, aux3, auxsum4=1, aux4, auxsum5=1, aux5, auxsum6=1, auxsum7=1, auxsum8=1,auxsum9=1, auxsum10=1, auxsum11=1,dim=100; 
	char bufer1[dim],bufer2[dim],bufer3[dim],bufer4[dim],bufer5[dim],bufer6[dim],bufer7[dim],bufer8[dim],bufer9[dim],bufer10[dim],bufer11[dim];
	
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	nodo* actual2 = (nodo*)malloc(sizeof(nodo));
	actual2 = primero2;
	nodo* actual3 = (nodo*)malloc(sizeof(nodo));
	actual3 = primero3;
	nodo* actual4 = (nodo*)malloc(sizeof(nodo));
	actual4 = primero4;
	nodo* actual5 = (nodo*)malloc(sizeof(nodo));
	actual5 = primero5;
	
	
	if(primero!=NULL&&primero2!=NULL&&primero3!=NULL&&primero4!=NULL&&primero5!=NULL){
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			aux=actual->dato;
			printf("\nEl dato es: %d",aux);
			printf("\nEl dato en registro es: %d",actual->dato);
			aux2=actual2->dato;
			printf("\nEl dato es: %d",aux2);
			printf("\nEl dato en registro es: %d",actual2->dato);
			aux3=actual3->dato;
			printf("\nEl dato es: %d",aux3);
			printf("\nEl dato en registro es: %d",actual3->dato);
			aux4=actual4->dato;
			printf("\nEl dato es: %d",aux4);
			printf("\nEl dato en registro es: %d",actual4->dato);
			aux5=actual5->dato;
			printf("\nEl dato es: %d",aux5);
			printf("\nEl dato en registro es: %d",actual5->dato);
			
			auxsum=auxsum*actual->dato;
			auxsum2=auxsum2*actual2->dato;
			auxsum3=auxsum3*actual3->dato;
			auxsum4=auxsum4*actual4->dato;
			auxsum5=auxsum5*actual5->dato;
			
			actual = actual->siguiente;
			actual2 = actual2->siguiente;
			actual3 = actual3->siguiente;
			actual4 = actual4->siguiente;
			actual5 = actual5->siguiente;
			
		}
		actual = primero;
		actual = actual->siguiente;
		actual2 = actual;
		actual = actual->siguiente;
		actual3 = actual;
		actual = actual->siguiente;
		actual4= actual;
		actual = actual->siguiente;
		actual5=actual;
		actual = primero;
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			aux=actual->dato;
			printf("\nEl dato es: %d",aux);
			printf("\nEl dato en registro es: %d",actual->dato);
			aux2=actual2->dato;
			printf("\nEl dato es: %d",aux2);
			printf("\nEl dato en registro es: %d",actual2->dato);
			aux3=actual3->dato;
			printf("\nEl dato es: %d",aux3);
			printf("\nEl dato en registro es: %d",actual3->dato);
			aux4=actual4->dato;
			printf("\nEl dato es: %d",aux4);
			printf("\nEl dato en registro es: %d",actual4->dato);
			aux5=actual5->dato;
			printf("\nEl dato es: %d",aux5);
			printf("\nEl dato en registro es: %d",actual5->dato);
			
			auxsum6=auxsum6*actual->dato;
			auxsum7=auxsum7*actual2->dato;
			auxsum8=auxsum8*actual3->dato;
			auxsum9=auxsum9*actual4->dato;
			auxsum10=auxsum10*actual5->dato;
			
			actual = actual->abajo;
			actual2 = actual2->abajo;
			actual3 = actual3->abajo;
			actual4 = actual4->abajo;
			actual5 = actual5->abajo;
			
		}
		auxsum11=auxsum+auxsum2+auxsum3+auxsum4+auxsum5;
		sprintf(bufer1," R1 es (%d)",auxsum);
		sprintf(bufer2," R2 es (%d)",auxsum2);
		sprintf(bufer3," R3 es (%d)",auxsum3);
		sprintf(bufer4," R4 es (%d)",auxsum4);
		sprintf(bufer5," R5 es (%d)",auxsum5);
		sprintf(bufer6," C1 es (%d)",auxsum6);
		sprintf(bufer7," C2 es (%d)",auxsum7);
		sprintf(bufer8," C3 es (%d)",auxsum8);
		sprintf(bufer9," C4 es (%d)",auxsum9);
		sprintf(bufer10," C5 es (%d)",auxsum10);
		sprintf(bufer11," La Multiplicacion de la cara es (%d)",auxsum11);
		initwindow(1900,1080,"Estructura",0,0,false,true);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,10,"Multiplicacion en las filas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,60,"Los resultados son:");
		outtextxy(50,100,bufer1);
		outtextxy(50,140,bufer2);
		outtextxy(50,180,bufer3);
		outtextxy(50,220,bufer4);
		outtextxy(50,260,bufer5);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,300,"Multiplicacion en las Columnas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,360,"Los resultados son:");
		outtextxy(50,400,bufer6);
		outtextxy(50,440,bufer7);
		outtextxy(50,480,bufer8);
		outtextxy(50,520,bufer9);
		outtextxy(50,560,bufer10);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,600,"Multiplicacion de toda la Cara");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,640,bufer11);
		delay(8000);
		closegraph();
		system("cls");
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
int ImpresionFilas(int dim){
	int Elec1, Elec2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"Menu de impresion de filas");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	outtextxy(50,60,"Elija la cara que quiere trabajar:");
	outtextxy(50,100,"1.Cara No.1");
	outtextxy(50,140,"2.Cara No.2");
	outtextxy(50,180,"3.Cara No.3");
	outtextxy(50,220,"4.Cara No.4");
	outtextxy(50,260,"5.Cara No.5");
	delay(3000);
	closegraph();
	printf("Inserte su opcion:");
	scanf("%d",&Elec1);
	switch(Elec1){
		case 1:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirC1R1(dim);
					break;
				case 2:
					ImprimirC1R2(dim);
					break;
				case 3:
					ImprimirC1R3(dim);
					break;
				case 4:
					ImprimirC1R4(dim);
					break;
				case 5:
					ImprimirC1R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 2:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC2R1(dim);
					break;
				case 2:
					//ImprimirC2R2(dim);
					break;
				case 3:
					//ImprimirC2R3(dim);
					break;
				case 4:
					//ImprimirC2R4(dim);
					break;
				case 5:
					//ImprimirC2R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 3:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC3R1(dim);
					break;
				case 2:
					//ImprimirC3R2(dim);
					break;
				case 3:
					//ImprimirC3R3(dim);
					break;
				case 4:
					//ImprimirC3R4(dim);
					break;
				case 5:
					//ImprimirC3R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 4:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC4R1(dim);
					break;
				case 2:
					//ImprimirC4R2(dim);
					break;
				case 3:
					//ImprimirC4R3(dim);
					break;
				case 4:
					//ImprimirC4R4(dim);
					break;
				case 5:
					//ImprimirC4R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 5:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC5R1(dim);
					break;
				case 2:
					//ImprimirC5R2(dim);
					break;
				case 3:
					//ImprimirC5R3(dim);
					break;
				case 4:
					//ImprimirC5R4(dim);
					break;
				case 5:
					//ImprimirC5R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		default:
			printf("No eligo algo valido");
			break;
		}
	}
int ImpresionColumna(int dim){
	int Elec1, Elec2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"Menu de impresion de filas");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	outtextxy(50,60,"Elija la cara que quiere trabajar:");
	outtextxy(50,100,"1.Cara No.1");
	outtextxy(50,140,"2.Cara No.2");
	outtextxy(50,180,"3.Cara No.3");
	outtextxy(50,220,"4.Cara No.4");
	outtextxy(50,260,"5.Cara No.5");
	delay(3000);
	closegraph();
	printf("Inserte su opcion:");
	scanf("%d",&Elec1);
	switch(Elec1){
		case 1:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirC1C1(dim);
					break;
				case 2:
					ImprimirC1C2(dim);
					break;
				case 3:
					ImprimirC1C3(dim);
					break;
				case 4:
					ImprimirC1C4(dim);
					break;
				case 5:
					ImprimirC1C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 2:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC2C1(dim);
					break;
				case 2:
					//ImprimirC2C2(dim);
					break;
				case 3:
					//ImprimirC2C3(dim);
					break;
				case 4:
					//ImprimirC2C4(dim);
					break;
				case 5:
					//ImprimirC2C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 3:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC3C1(dim);
					break;
				case 2:
					//ImprimirC3C2(dim);
					break;
				case 3:
					//ImprimirC3C3(dim);
					break;
				case 4:
					//ImprimirC3C4(dim);
					break;
				case 5:
					//ImprimirC3C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 4:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC4C1(dim);
					break;
				case 2:
					//ImprimirC4C2(dim);
					break;
				case 3:
					//ImprimirC4C3(dim);
					break;
				case 4:
					//ImprimirC4C4(dim);
					break;
				case 5:
					//ImprimirC4C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 5:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon No.1");
				outtextxy(50,140,"2.Renglon No.2");
				outtextxy(50,180,"3.Renglon No.3");
				outtextxy(50,220,"4.Renglon No.4");
				outtextxy(50,260,"5.Renglon No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					//ImprimirC5C1(dim);
					break;
				case 2:
					//ImprimirC5C2(dim);
					break;
				case 3:
					//ImprimirC5C3(dim);
					break;
				case 4:
					//ImprimirC5C4(dim);
					break;
				case 5:
					//ImprimirC5C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		default:
			printf("No eligo algo valido");
			break;
		}
}

int ImprimirC1R1(int dim){
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
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
		sprintf(ptb,"%d",actual->dato);
		setcolor(colorin);
		settextstyle(BOLD_FONT, HORIZ_DIR, tam);
		outtextxy(posx,posy,ptb);
		rectangle(posx-2,posy-1,posx+termx,posy+termy);
		sprintf(ptbb,"(%d)",cont2);
		setcolor(WHITE);
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx,posy+termy,ptbb);
		if(cont2==5){
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
int ImprimirC1R2(int dim){
		nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero2;
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
	outtextxy(10,100,"Inicio2");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"Ultimo2");
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

int ImprimirC1R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero3;
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
	outtextxy(10,100,"Inicio3");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"Ultimo3");
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

int ImprimirC1R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero4;
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
	outtextxy(10,100,"Inicio4");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"Ultimo4");
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
int ImprimirC1R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero5;
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
	outtextxy(10,100,"Inicio5");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"Ultimo5");
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
int ImprimirC1C1(int dim){
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
	outtextxy(10,100,"Primero");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"NUll");
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
		actual=actual->abajo;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirC1C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
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
	outtextxy(10,100,"Segundo");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"Null");
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
		actual=actual->abajo;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirC1C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
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
	outtextxy(10,100,"Tercero");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"Null");
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
		actual=actual->abajo;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirC1C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
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
	outtextxy(10,100,"Cuarto");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"Null");
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
		actual=actual->abajo;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirC1C5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=ultimo;
	int i, colorin=1, posx=150, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENE LA CARA NO.1 SON:");
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(10,100,"Quinto");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(int j=0;j<5;i++,ptb++,ptbb++,j++){
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
			outtextxy(posx+termx+60,posy+5,"Null");
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
		actual=actual->abajo;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImpresionCara(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	ultimo->siguiente=primero2;
	ultimo2->siguiente=primero3;
	ultimo3->siguiente=primero4;
	ultimo4->siguiente=primero5;
	int i, colorin=1, posx=200, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN LA CARA NO.1 SON:");
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(10,100,"Primero");
	outtextxy(10,220,"Primero2");
	outtextxy(10,340,"Primero3");
	outtextxy(10,460,"Primero4");
	outtextxy(10,580,"Primero5");
	setlinestyle(3, 3, 2);
	line(140,115,190,115);
	line(190,115,175,105);
	line(190,115,175,125);
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
		if(cont2==25){
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(posx+termx,posy+15,posx+termx+50,posy+15);
			line(posx+termx+50,posy+15,posx+termx+35,posy+5);
			line(posx+termx+50,posy+15,posx+termx+35,posy+25);
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			outtextxy(posx+termx+60,100,"Ultima");
			outtextxy(posx+termx+60,220,"Ultima2");
			outtextxy(posx+termx+60,340,"Ultima3");
			outtextxy(posx+termx+60,460,"Ultima4");
			outtextxy(posx+termx+60,580,"Ultima5");
			
			line(posx+14,posy-2,posx+14,posy-60);
			line(posx+14,posy-2,posx+19,posy-15);
			line(posx+14,posy-2,posx+9,posy-15);
			
			line(posx+28,posy-60,posx+28,posy-2);
			line(posx+28,posy-60,posx+33,posy-55);
			line(posx+28,posy-60,posx+23,posy-55);
			setcolor(colorin);
		}
		else{
			setlinestyle(3, 3, 2);
			setcolor(RED);
			if(cont2!=5&cont2!=10&&cont2!=15&cont2!=20&cont2!=25){
			line(posx+termx,posy+15,posx+termx+40,posy+15);
			line(posx+termx+40,posy+15,posx+termx+35,posy+5);
			line(posx+termx+40,posy+15,posx+termx+35,posy+25);	
			line(posx+termx,posy+25,posx+termx+40,posy+25);
			line(posx+termx,posy+25,posx+termx+5,posy+15);
			line(posx+termx,posy+25,posx+termx+5,posy+35);
				if(cont2<5){
					setcolor(0);
				}
				else{
					setcolor(RED);
				}
			line(posx+14,posy-2,posx+14,posy-60);
			line(posx+14,posy-2,posx+19,posy-15);
			line(posx+14,posy-2,posx+9,posy-15);
			
			line(posx+28,posy-60,posx+28,posy-2);
			line(posx+28,posy-60,posx+33,posy-55);
			line(posx+28,posy-60,posx+23,posy-55);
			}
			else{
			line(posx+termx,posy+15,posx+termx+40,posy+15);
			line(posx+termx+40,posy+15,posx+termx+35,posy+5);
			line(posx+termx+40,posy+15,posx+termx+35,posy+25);	
			if(cont2==5){
					setcolor(0);
				}
				else{
					setcolor(RED);
				}
			line(posx+14,posy-2,posx+14,posy-60);
			line(posx+14,posy-2,posx+19,posy-15);
			line(posx+14,posy-2,posx+9,posy-15);
			
			line(posx+28,posy-60,posx+28,posy-2);
			line(posx+28,posy-60,posx+33,posy-55);
			line(posx+28,posy-60,posx+23,posy-55);
			}
			setcolor(colorin);
		}
		posx=posx+90;
		if(cont==5){
			posy=posy+120;
			posx=200;
			cont=0;
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(140,posy+15,190,posy+15);
			line(190,posy+15,175,posy+5);
			line(190,posy+15,175,posy+25);
			colorin++;
			if(colorin>14)
				colorin=1;
		}
		cont++;
		cont2++;
		if(cont2>=100)
			tam=1;
		actual=actual->siguiente;
 	}
 	
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	setcolor(BLACK);
 	setfillstyle(SOLID_FILL,BLACK); 
 	setcolor(GREEN);
 	setlinestyle(3, 3, 3);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN LA CARA NO.1 SON:");
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 ultimo->siguiente=NULL;
	 ultimo2->siguiente=NULL;
	 ultimo3->siguiente=NULL;
	 ultimo4->siguiente=NULL;
	 ultimo5->siguiente=NULL;
	 return 0; 
}


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
nodo* primeroC2 = NULL;
nodo* ultimoC2 = NULL;
nodo* primeroC22 = NULL;
nodo* ultimoC22 = NULL;
nodo* primeroC23 = NULL;
nodo* ultimoC23 = NULL;
nodo* primeroC24 = NULL;
nodo* ultimoC24 = NULL;
nodo* primeroC25 = NULL;
nodo* ultimoC25 = NULL;
nodo* primeroC3 = NULL;
nodo* ultimoC3 = NULL;
nodo* primeroC32 = NULL;
nodo* ultimoC32 = NULL;
nodo* primeroC33 = NULL;
nodo* ultimoC33 = NULL;
nodo* primeroC34 = NULL;
nodo* ultimoC34 = NULL;
nodo* primeroC35 = NULL;
nodo* ultimoC35 = NULL;
nodo* primeroC4 = NULL;
nodo* ultimoC4 = NULL;
nodo* primeroC42 = NULL;
nodo* ultimoC42 = NULL;
nodo* primeroC43 = NULL;
nodo* ultimoC43 = NULL;
nodo* primeroC44 = NULL;
nodo* ultimoC44 = NULL;
nodo* primeroC45 = NULL;
nodo* ultimoC45 = NULL;
nodo* primeroC5 = NULL;
nodo* ultimoC5 = NULL;
nodo* primeroC52 = NULL;
nodo* ultimoC52 = NULL;
nodo* primeroC53 = NULL;
nodo* ultimoC53 = NULL;
nodo* primeroC54 = NULL;
nodo* ultimoC54 = NULL;
nodo* primeroC55 = NULL;
nodo* ultimoC55 = NULL;

void insertarNodo(int);
void insertarNodoR2(int);
void insertarNodoR3(int);
void insertarNodoR4(int);
void insertarNodoR5(int);
void insertarNodoC2(int);
void insertarNodoC2R2(int);
void insertarNodoC2R3(int);
void insertarNodoC2R4(int);
void insertarNodoC2R5(int);
void insertarNodoC3(int);
void insertarNodoC3R2(int);
void insertarNodoC3R3(int);
void insertarNodoC3R4(int);
void insertarNodoC3R5(int);
void insertarNodoC4(int);
void insertarNodoC4R2(int);
void insertarNodoC4R3(int);
void insertarNodoC4R4(int);
void insertarNodoC4R5(int);
void insertarNodoC5(int);
void insertarNodoC5R2(int);
void insertarNodoC5R3(int);
void insertarNodoC5R4(int);
void insertarNodoC5R5(int);

void EnlazarColumna();
void EnlazarColumna2();
void EnlazarColumna3();
void EnlazarColumna4();
void EnlazarColumna5();

void EnlazarCaras();
void modificarNodos();
void modificarNodoC11();
void modificarNodoC12();
void modificarNodoC13();
void modificarNodoC14();
void modificarNodoC15();
void modificarNodoC21();
void modificarNodoC22();
void modificarNodoC23();
void modificarNodoC24();
void modificarNodoC25();
void modificarNodoC31();
void modificarNodoC32();
void modificarNodoC33();
void modificarNodoC34();
void modificarNodoC35();
void modificarNodoC41();
void modificarNodoC42();
void modificarNodoC43();
void modificarNodoC44();
void modificarNodoC45();
void modificarNodoC51();
void modificarNodoC52();
void modificarNodoC53();
void modificarNodoC54();
void modificarNodoC55();

int ImpresionFilas(int);
int ImprimirC1R1(int);
int ImprimirC1R2(int);
int ImprimirC1R3(int);
int ImprimirC1R4(int);
int ImprimirC1R5(int);
int ImprimirC2R1(int);
int ImprimirC2R2(int);
int ImprimirC2R3(int);
int ImprimirC2R4(int);
int ImprimirC2R5(int);
int ImprimirC3R1(int);
int ImprimirC3R2(int);
int ImprimirC3R3(int);
int ImprimirC3R4(int);
int ImprimirC3R5(int);
int ImprimirC4R1(int);
int ImprimirC4R2(int);
int ImprimirC4R3(int);
int ImprimirC4R4(int);
int ImprimirC4R5(int);
int ImprimirC5R1(int);
int ImprimirC5R2(int);
int ImprimirC5R3(int);
int ImprimirC5R4(int);
int ImprimirC5R5(int);
int ImprimirTC1R1(int);
int ImprimirTC1R2(int);
int ImprimirTC1R3(int);
int ImprimirTC1R4(int);
int ImprimirTC1R5(int);
int ImprimirTC2R1(int);
int ImprimirTC2R2(int);
int ImprimirTC2R3(int);
int ImprimirTC2R4(int);
int ImprimirTC2R5(int);
int ImprimirTC3R1(int);
int ImprimirTC3R2(int);
int ImprimirTC3R3(int);
int ImprimirTC3R4(int);
int ImprimirTC3R5(int);
int ImprimirTC4R1(int);
int ImprimirTC4R2(int);
int ImprimirTC4R3(int);
int ImprimirTC4R4(int);
int ImprimirTC4R5(int);
int ImprimirTC5R1(int);
int ImprimirTC5R2(int);
int ImprimirTC5R3(int);
int ImprimirTC5R4(int);
int ImprimirTC5R5(int);


int ImpresionColumna(int);
int ImprimirC1C1(int);
int ImprimirC1C2(int);
int ImprimirC1C3(int);
int ImprimirC1C4(int);
int ImprimirC1C5(int);
int ImprimirC2C1(int);
int ImprimirC2C2(int);
int ImprimirC2C3(int);
int ImprimirC2C4(int);
int ImprimirC2C5(int);
int ImprimirC3C1(int);
int ImprimirC3C2(int);
int ImprimirC3C3(int);
int ImprimirC3C4(int);
int ImprimirC3C5(int);
int ImprimirC4C1(int);
int ImprimirC4C2(int);
int ImprimirC4C3(int);
int ImprimirC4C4(int);
int ImprimirC4C5(int);
int ImprimirC5C1(int);
int ImprimirC5C2(int);
int ImprimirC5C3(int);
int ImprimirC5C4(int);
int ImprimirC5C5(int);
int ImprimirTC1C1(int);
int ImprimirTC1C2(int);
int ImprimirTC1C3(int);
int ImprimirTC1C4(int);
int ImprimirTC1C5(int);
int ImprimirTC2C1(int);
int ImprimirTC2C2(int);
int ImprimirTC2C3(int);
int ImprimirTC2C4(int);
int ImprimirTC2C5(int);
int ImprimirTC3C1(int);
int ImprimirTC3C2(int);
int ImprimirTC3C3(int);
int ImprimirTC3C4(int);
int ImprimirTC3C5(int);
int ImprimirTC4C1(int);
int ImprimirTC4C2(int);
int ImprimirTC4C3(int);
int ImprimirTC4C4(int);
int ImprimirTC4C5(int);
int ImprimirTC5C1(int);
int ImprimirTC5C2(int);
int ImprimirTC5C3(int);
int ImprimirTC5C4(int);
int ImprimirTC5C5(int);

int ImpresionCaras(int);
int ImpresionCara(int);
int ImpresionCaraC2(int);
int ImpresionCaraC3(int);
int ImpresionCaraC4(int);
int ImpresionCaraC5(int);

int ImpresionCaraT(int);
int ImpresionCaraTC2(int);
int ImpresionCaraTC3(int);
int ImpresionCaraTC4(int);
int ImpresionCaraTC5(int);

void Cubo();
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
	EnlazarColumna2();
	EnlazarColumna3();
	EnlazarColumna4();
	EnlazarColumna5();
	EnlazarCaras();
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
				ImpresionCaras(dim);
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
				Cubo();
				break;
			case 10:
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

void insertarNodoC2(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC2==NULL){
		primeroC2 = nuevo;
		primeroC2->siguiente = NULL;
		primeroC2->atras = NULL;
		ultimoC2 = primeroC2;
	}else{
		ultimoC2->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC2;
		ultimoC2 = nuevo;
	}

	printf("\n Nodo R1 ingresado con exito\n\n");
}

void insertarNodoC2R2(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC22==NULL){
		primeroC22 = nuevo;
		primeroC22->siguiente = NULL;
		primeroC22->atras = NULL;
		ultimoC22 = primeroC22;
	}else{
		ultimoC22->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC22;
		ultimoC22 = nuevo;
	}

	printf("\n Nodo R2 ingresado con exito\n\n");
}

void insertarNodoC2R3(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC23==NULL){
		primeroC23 = nuevo;
		primeroC23->siguiente = NULL;
		primeroC23->atras = NULL;
		ultimoC23 = primeroC23;
	}else{
		ultimoC23->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC23;
		ultimoC23 = nuevo;
	}

	printf("\n Nodo R3 ingresado con exito\n\n");
}

void insertarNodoC2R4(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC24==NULL){
		primeroC24 = nuevo;
		primeroC24->siguiente = NULL;
		primeroC24->atras = NULL;
		ultimoC24 = primeroC24;
	}else{
		ultimoC24->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC24;
		ultimoC24 = nuevo;
	}

	printf("\n Nodo R4 ingresado con exito\n\n");
}

void insertarNodoC2R5(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC25==NULL){
		primeroC25 = nuevo;
		primeroC25->siguiente = NULL;
		primeroC25->atras = NULL;
		ultimoC25 = primeroC25;
	}else{
		ultimoC25->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC25;
		ultimoC25 = nuevo;
	}

	printf("\n Nodo R5 ingresado con exito\n\n");
}

void insertarNodoC3(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC3==NULL){
		primeroC3 = nuevo;
		primeroC3->siguiente = NULL;
		primeroC3->atras = NULL;
		ultimoC3 = primeroC3;
	}else{
		ultimoC3->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC3;
		ultimoC3 = nuevo;
	}

	printf("\n Nodo R1 ingresado con exito\n\n");
}

void insertarNodoC3R2(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC32==NULL){
		primeroC32 = nuevo;
		primeroC32->siguiente = NULL;
		primeroC32->atras = NULL;
		ultimoC32 = primeroC32;
	}else{
		ultimoC32->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC32;
		ultimoC32 = nuevo;
	}

	printf("\n Nodo R2 ingresado con exito\n\n");
}

void insertarNodoC3R3(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC33==NULL){
		primeroC33 = nuevo;
		primeroC33->siguiente = NULL;
		primeroC33->atras = NULL;
		ultimoC33 = primeroC33;
	}else{
		ultimoC33->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC33;
		ultimoC33 = nuevo;
	}

	printf("\n Nodo R3 ingresado con exito\n\n");
}

void insertarNodoC3R4(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC34==NULL){
		primeroC34 = nuevo;
		primeroC34->siguiente = NULL;
		primeroC34->atras = NULL;
		ultimoC34 = primeroC34;
	}else{
		ultimoC34->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC34;
		ultimoC34 = nuevo;
	}

	printf("\n Nodo R4 ingresado con exito\n\n");
}

void insertarNodoC3R5(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC35==NULL){
		primeroC35 = nuevo;
		primeroC35->siguiente = NULL;
		primeroC35->atras = NULL;
		ultimoC35 = primeroC35;
	}else{
		ultimoC35->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC35;
		ultimoC35 = nuevo;
	}

	printf("\n Nodo R5 ingresado con exito\n\n");
}

void insertarNodoC4(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC4==NULL){
		primeroC4 = nuevo;
		primeroC4->siguiente = NULL;
		primeroC4->atras = NULL;
		ultimoC4 = primeroC4;
	}else{
		ultimoC4->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC4;
		ultimoC4 = nuevo;
	}

	printf("\n Nodo R1 ingresado con exito\n\n");
}

void insertarNodoC4R2(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC42==NULL){
		primeroC42 = nuevo;
		primeroC42->siguiente = NULL;
		primeroC42->atras = NULL;
		ultimoC42 = primeroC42;
	}else{
		ultimoC42->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC42;
		ultimoC42 = nuevo;
	}

	printf("\n Nodo R2 ingresado con exito\n\n");
}

void insertarNodoC4R3(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC43==NULL){
		primeroC43 = nuevo;
		primeroC43->siguiente = NULL;
		primeroC43->atras = NULL;
		ultimoC43 = primeroC43;
	}else{
		ultimoC43->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC43;
		ultimoC43 = nuevo;
	}

	printf("\n Nodo R3 ingresado con exito\n\n");
}

void insertarNodoC4R4(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC44==NULL){
		primeroC44 = nuevo;
		primeroC44->siguiente = NULL;
		primeroC44->atras = NULL;
		ultimoC44 = primeroC44;
	}else{
		ultimoC44->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC44;
		ultimoC44 = nuevo;
	}

	printf("\n Nodo R4 ingresado con exito\n\n");
}

void insertarNodoC4R5(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC45==NULL){
		primeroC45 = nuevo;
		primeroC45->siguiente = NULL;
		primeroC45->atras = NULL;
		ultimoC45 = primeroC45;
	}else{
		ultimoC45->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC45;
		ultimoC45 = nuevo;
	}

	printf("\n Nodo R5 ingresado con exito\n\n");
}

void insertarNodoC5(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC5==NULL){
		primeroC5 = nuevo;
		primeroC5->siguiente = NULL;
		primeroC5->atras = NULL;
		ultimoC5 = primeroC5;
	}else{
		ultimoC5->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC5;
		ultimoC5 = nuevo;
	}

	printf("\n Nodo R1 ingresado con exito\n\n");
}

void insertarNodoC5R2(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC52==NULL){
		primeroC52 = nuevo;
		primeroC52->siguiente = NULL;
		primeroC52->atras = NULL;
		ultimoC52 = primeroC52;
	}else{
		ultimoC52->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC52;
		ultimoC52 = nuevo;
	}

	printf("\n Nodo R2 ingresado con exito\n\n");
}

void insertarNodoC5R3(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC53==NULL){
		primeroC53 = nuevo;
		primeroC53->siguiente = NULL;
		primeroC53->atras = NULL;
		ultimoC53 = primeroC53;
	}else{
		ultimoC53->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC53;
		ultimoC53 = nuevo;
	}

	printf("\n Nodo R3 ingresado con exito\n\n");
}

void insertarNodoC5R4(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC54==NULL){
		primeroC54 = nuevo;
		primeroC54->siguiente = NULL;
		primeroC54->atras = NULL;
		ultimoC54 = primeroC54;
	}else{
		ultimoC54->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC54;
		ultimoC54 = nuevo;
	}

	printf("\n Nodo R4 ingresado con exito\n\n");
}

void insertarNodoC5R5(int num){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=num;
	
	if(primeroC55==NULL){
		primeroC55 = nuevo;
		primeroC55->siguiente = NULL;
		primeroC55->atras = NULL;
		ultimoC55 = primeroC55;
	}else{
		ultimoC55->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimoC55;
		ultimoC55 = nuevo;
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

void EnlazarColumna2(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC2;
	nodo* actual2 = (nodo*)malloc(sizeof(nodo));
	actual2 = primeroC22;
	nodo* actual3 = (nodo*)malloc(sizeof(nodo));
	actual3 = primeroC23;
	nodo* actual4 = (nodo*)malloc(sizeof(nodo));
	actual4 = primeroC24;
	nodo* actual5 = (nodo*)malloc(sizeof(nodo));
	actual5 = primeroC25;
	
	
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

void EnlazarColumna3(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC3;
	nodo* actual2 = (nodo*)malloc(sizeof(nodo));
	actual2 = primeroC32;
	nodo* actual3 = (nodo*)malloc(sizeof(nodo));
	actual3 = primeroC33;
	nodo* actual4 = (nodo*)malloc(sizeof(nodo));
	actual4 = primeroC34;
	nodo* actual5 = (nodo*)malloc(sizeof(nodo));
	actual5 = primeroC35;
	
	
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

void EnlazarColumna4(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC4;
	nodo* actual2 = (nodo*)malloc(sizeof(nodo));
	actual2 = primeroC42;
	nodo* actual3 = (nodo*)malloc(sizeof(nodo));
	actual3 = primeroC43;
	nodo* actual4 = (nodo*)malloc(sizeof(nodo));
	actual4 = primeroC44;
	nodo* actual5 = (nodo*)malloc(sizeof(nodo));
	actual5 = primeroC45;
	
	
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

void EnlazarColumna5(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC5;
	nodo* actual2 = (nodo*)malloc(sizeof(nodo));
	actual2 = primeroC52;
	nodo* actual3 = (nodo*)malloc(sizeof(nodo));
	actual3 = primeroC53;
	nodo* actual4 = (nodo*)malloc(sizeof(nodo));
	actual4 = primeroC54;
	nodo* actual5 = (nodo*)malloc(sizeof(nodo));
	actual5 = primeroC55;
	
	
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

void EnlazarCaras(){
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
	nodo* actual6 = (nodo*)malloc(sizeof(nodo));
	actual6 = primeroC2;
	nodo* actual7 = (nodo*)malloc(sizeof(nodo));
	actual7 = primeroC22;
	nodo* actual8 = (nodo*)malloc(sizeof(nodo));
	actual8 = primeroC23;
	nodo* actual9 = (nodo*)malloc(sizeof(nodo));
	actual9 = primeroC24;
	nodo* actual10 = (nodo*)malloc(sizeof(nodo));
	actual10 = primeroC25;
	nodo* actual11 = (nodo*)malloc(sizeof(nodo));
	actual11 = primeroC3;
	nodo* actual12 = (nodo*)malloc(sizeof(nodo));
	actual12 = primeroC32;
	nodo* actual13 = (nodo*)malloc(sizeof(nodo));
	actual13 = primeroC33;
	nodo* actual14 = (nodo*)malloc(sizeof(nodo));
	actual14 = primeroC34;
	nodo* actual15 = (nodo*)malloc(sizeof(nodo));
	actual15 = primeroC35;
	nodo* actual16 = (nodo*)malloc(sizeof(nodo));
	actual16 = primeroC4;
	nodo* actual17 = (nodo*)malloc(sizeof(nodo));
	actual17 = primeroC42;
	nodo* actual18 = (nodo*)malloc(sizeof(nodo));
	actual18 = primeroC43;
	nodo* actual19 = (nodo*)malloc(sizeof(nodo));
	actual19= primeroC44;
	nodo* actual20= (nodo*)malloc(sizeof(nodo));
	actual20 = primeroC45;
	nodo* actual21 = (nodo*)malloc(sizeof(nodo));
	actual21 = primeroC5;
	nodo* actual22 = (nodo*)malloc(sizeof(nodo));
	actual22 = primeroC52;
	nodo* actual23 = (nodo*)malloc(sizeof(nodo));
	actual23 = primeroC53;
	nodo* actual24 = (nodo*)malloc(sizeof(nodo));
	actual24 = primeroC54;
	nodo* actual25 = (nodo*)malloc(sizeof(nodo));
	actual25 = primeroC55;
	
	
	if(primero!=NULL&&primero2!=NULL&&primero3!=NULL&&primero4!=NULL&&primero5!=NULL){
		printf("Hola\n");
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			printf("Hola de nuevo\n");
			actual->caraAdelante  =NULL;
			actual2->caraAdelante =NULL; 
			actual3->caraAdelante =NULL; 
			actual4->caraAdelante =NULL;
			actual5->caraAdelante =NULL; 
			actual6->caraAdelante =actual;
			actual7->caraAdelante =actual2; 
			actual8->caraAdelante =actual3; 
			actual9->caraAdelante =actual4; 
			actual10->caraAdelante=actual5; 
			actual11->caraAdelante=actual6;   
			actual12->caraAdelante=actual7;  
			actual13->caraAdelante=actual8;  
			actual14->caraAdelante=actual9;  
			actual15->caraAdelante=actual10;  
			actual16->caraAdelante=actual11;  
			actual17->caraAdelante=actual12; 
			actual18->caraAdelante=actual13;  
			actual19->caraAdelante=actual14;  
			actual20->caraAdelante=actual15;  
			actual21->caraAdelante=actual16;   
			actual22->caraAdelante=actual17;  
			actual23->caraAdelante=actual18;  
			actual24->caraAdelante=actual19;  
			actual25->caraAdelante=actual20;  
			actual->caraAtras =actual6;
			actual2->caraAtras =actual7;
			actual3->caraAtras =actual8; 
			actual4->caraAtras =actual9;
			actual5->caraAtras =actual10;
			actual6->caraAtras =actual11;
			actual7->caraAtras =actual12; 
			actual8->caraAtras =actual13;  
			actual9->caraAtras =actual14; 
			actual10->caraAtras=actual15;   
			actual11->caraAtras=actual16;   
			actual12->caraAtras=actual17;  
			actual13->caraAtras=actual18;  
			actual14->caraAtras=actual19;  
			actual15->caraAtras=actual20;  
			actual16->caraAtras=actual21;  
			actual17->caraAtras=actual22; 
			actual18->caraAtras=actual23;  
			actual19->caraAtras=actual24; 
			actual20->caraAtras=actual25;
			actual21->caraAtras=NULL;   
			actual22->caraAtras=NULL;
			actual23->caraAtras=NULL;  
			actual24->caraAtras=NULL;  
			actual25->caraAtras=NULL;  
			printf("Adios\n");
			actual = actual->siguiente;
			actual2 = actual2->siguiente;
			actual3 = actual3->siguiente;
			actual4 = actual4->siguiente;
			actual5 = actual5->siguiente;
			actual6 = actual6->siguiente;
			actual7 = actual7->siguiente;
			actual8 = actual8->siguiente;
			actual9 = actual9->siguiente;
			actual10 = actual10->siguiente;
			actual11 = actual11->siguiente;
			actual12 = actual12->siguiente;
			actual13 = actual13->siguiente;
			actual14 = actual14->siguiente;
			actual15 = actual15->siguiente;
			actual16 = actual16->siguiente;
			actual17 = actual17->siguiente;
			actual18 = actual18->siguiente;
			actual19 = actual19->siguiente;
			actual20 = actual20->siguiente;
			actual21 = actual21->siguiente;
			actual22 = actual22->siguiente;
			actual23 = actual23->siguiente;
			actual24 = actual24->siguiente;
			actual25 = actual25->siguiente;
			printf("Adiosnu\n");
		}
		
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
	printf("Acabe bien");
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
					modificarNodoC21();
					break;
				case 2:
					modificarNodoC22();
					break;
				case 3:
					modificarNodoC23();
					break;
				case 4:
					modificarNodoC24();
					break;
				case 5:
					modificarNodoC25();
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
					modificarNodoC31();
					break;
				case 2:
					modificarNodoC32();;
					break;
				case 3:
					modificarNodoC33();
					break;
				case 4:
					modificarNodoC34();
					break;
				case 5:
					modificarNodoC35();
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
					modificarNodoC41();
					break;
				case 2:
					modificarNodoC42();
					break;
				case 3:
					modificarNodoC43();
					break;
				case 4:
					modificarNodoC44();
					break;
				case 5:
					modificarNodoC45();
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
					modificarNodoC51();
					break;
				case 2:
					modificarNodoC52();
					break;
				case 3:
					modificarNodoC53();
					break;
				case 4:
					modificarNodoC54();
					break;
				case 5:
					modificarNodoC55();
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

void modificarNodoC21(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC2;
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
void modificarNodoC22(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC22;
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
void modificarNodoC23(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC23;
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
void modificarNodoC24(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC24;
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
void modificarNodoC25(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC25;
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

void modificarNodoC31(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC3;
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
void modificarNodoC32(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC32;
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
void modificarNodoC33(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC33;
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
void modificarNodoC34(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC34;
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
void modificarNodoC35(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC35;
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

void modificarNodoC41(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC4;
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
void modificarNodoC42(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC42;
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
void modificarNodoC43(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC43;
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
void modificarNodoC44(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC44;
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
void modificarNodoC45(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC45;
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

void modificarNodoC51(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC5;
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
void modificarNodoC52(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC52;
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
void modificarNodoC53(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC53;
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
void modificarNodoC54(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC54;
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
void modificarNodoC55(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primeroC55;
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

void GranMenu(){
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"Menu Principal del Cubo Magico");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	outtextxy(50,60,"1.Modificar dentro del cubo");
	outtextxy(50,100,"2.Imprimir Renglon Especifico");
	outtextxy(50,140,"3.Imprimir Columna Especifica");
	outtextxy(50,180,"4.Imprimir Cara Especifica");
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
 	outtextxy(50,60,"Este programa le va a permitir manejar los datos de un conjunto, estos se generan a su eleccion podra cambiarlos a su eleccion");
	outtextxy(50,100,"pero primero elija el numero de las columnas de su cubo, este cubo simpre tendra 5 filas por cara, y 5 caras, para ser simetrico");
	outtextxy(50,140,"la eleccion debera ser 5. (Se recomienda que sea 5, aunque este cubo puede soportar n filas)");
	setcolor(BLUE);
	line(400,500,700,500);
	line(700,500,700,800);
	line(700,800,400,800);
	line(400,800,400,500);
	line(400,500,600,300);
	line(600,300,900,300);
	line(900,300,700,500);
	line(900,300,900,600);
	line(900,600,700,800);
	delay(1000);
	setcolor(GREEN);
	line(400,500,700,500);
	line(700,500,700,800);
	line(700,800,400,800);
	line(400,800,400,500);
	line(400,500,600,300);
	line(600,300,900,300);
	line(900,300,700,500);
	line(900,300,900,600);
	line(900,600,700,800);
	delay(1000);
	setcolor(BROWN);
	line(400,500,700,500);
	line(700,500,700,800);
	line(700,800,400,800);
	line(400,800,400,500);
	line(400,500,600,300);
	line(600,300,900,300);
	line(900,300,700,500);
	line(900,300,900,600);
	line(900,600,700,800);
	delay(1000);
	setcolor(WHITE);
	line(400,500,700,500);
	line(700,500,700,800);
	line(700,800,400,800);
	line(400,800,400,500);
	line(400,500,600,300);
	line(600,300,900,300);
	line(900,300,700,500);
	line(900,300,900,600);
	line(900,600,700,800);
	delay(1000);
	setcolor(RED);
	line(400,500,700,500);
	line(700,500,700,800);
	line(700,800,400,800);
	line(400,800,400,500);
	line(400,500,600,300);
	line(600,300,900,300);
	line(900,300,700,500);
	line(900,300,900,600);
	line(900,600,700,800);
	delay(1000);
	setcolor(YELLOW);
	line(400,500,700,500);
	line(700,500,700,800);
	line(700,800,400,800);
	line(400,800,400,500);
	line(400,500,600,300);
	line(600,300,900,300);
	line(900,300,700,500);
	line(900,300,900,600);
	line(900,600,700,800);
	delay(1000);
	closegraph();
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
			while(rer>=25&&rer<30){
				posicion=posicion+1;
				insertarNodoC2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=30&&rer<35){
				posicion=posicion+1;
				insertarNodoC2R2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=35&&rer<40){
				posicion=posicion+1;
				insertarNodoC2R3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=40&&rer<45){
				posicion=posicion+1;
				insertarNodoC2R4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=45&&rer<50){
				posicion=posicion+1;
				insertarNodoC2R5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=50&&rer<55){
				posicion=posicion+1;
				insertarNodoC3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=55&&rer<60){
				posicion=posicion+1;
				insertarNodoC3R2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=60&&rer<65){
				posicion=posicion+1;
				insertarNodoC3R3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=65&&rer<70){
				posicion=posicion+1;
				insertarNodoC3R4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=70&&rer<75){
				posicion=posicion+1;
				insertarNodoC3R5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=75&&rer<80){
				posicion=posicion+1;
				insertarNodoC4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=80&&rer<85){
				posicion=posicion+1;
				insertarNodoC4R2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=85&&rer<90){
				posicion=posicion+1;
				insertarNodoC4R3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=90&&rer<95){
				posicion=posicion+1;
				insertarNodoC4R4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=95&&rer<100){
				posicion=posicion+1;
				insertarNodoC4R5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=100&&rer<105){
				posicion=posicion+1;
				insertarNodoC5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=105&&rer<110){
				posicion=posicion+1;
				insertarNodoC5R2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=110&&rer<115){
				posicion=posicion+1;
				insertarNodoC5R3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=115&&rer<120){
				posicion=posicion+1;
				insertarNodoC5R4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=120&&rer<125){
				posicion=posicion+1;
				insertarNodoC5R5(posicion);
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
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
	
			while(rer>=5&&rer<10){
				posicion=rand()%50;
				insertarNodoR2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
	
			while(rer>=10&&rer<15){
				posicion=rand()%50;
				insertarNodoR3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
		
			while(rer>=15&&rer<20){
				posicion=rand()%50;
				insertarNodoR4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
	
			while(rer>=20&&rer<25){
				posicion=rand()%50;
				insertarNodoR5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=25&&rer<30){
				posicion=rand()%50;
				insertarNodoC2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=30&&rer<35){
				posicion=rand()%50;
				insertarNodoC2R2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=35&&rer<40){
				posicion=rand()%50;
				insertarNodoC2R3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=40&&rer<45){
				posicion=rand()%50;
				insertarNodoC2R4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=45&&rer<50){
				posicion=rand()%50;;
				insertarNodoC2R5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=50&&rer<55){
				posicion=rand()%50;
				insertarNodoC3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=55&&rer<60){
				posicion=rand()%50;
				insertarNodoC3R2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=60&&rer<65){
				posicion=rand()%50;
				insertarNodoC3R3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=65&&rer<70){
				posicion=rand()%50;
				insertarNodoC3R4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=70&&rer<75){
				posicion=rand()%50;
				insertarNodoC3R5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=75&&rer<80){
				posicion=rand()%50;
				insertarNodoC4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=80&&rer<85){
				posicion=rand()%50;
				insertarNodoC4R2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=85&&rer<90){
				posicion=rand()%50;
				insertarNodoC4R3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=90&&rer<95){
				posicion=rand()%50;
				insertarNodoC4R4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=95&&rer<100){
				posicion=rand()%50;
				insertarNodoC4R5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=100&&rer<105){
				posicion=rand()%50;
				insertarNodoC5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=105&&rer<110){
				posicion=rand()%50;
				insertarNodoC5R2(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=110&&rer<115){
				posicion=rand()%50;
				insertarNodoC5R3(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=115&&rer<120){
				posicion=rand()%50;
				insertarNodoC5R4(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
			}
			while(rer>=120&&rer<125){
				posicion=rand()%50;
				insertarNodoC5R5(posicion);
				rer++;
				cone=4;
				printf("\nEsta creando nodo %d",posicion);
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
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
		
				while(rer>=10&&rer<15){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoR3(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
			
				while(rer>=15&&rer<20){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoR4(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
		
				while(rer>=20&&rer<25){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoR5(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=25&&rer<30){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC2(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=30&&rer<35){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC2R2(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=35&&rer<40){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC2R3(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=40&&rer<45){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC2R4(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=45&&rer<50){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC2R5(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=50&&rer<55){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC3(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=55&&rer<60){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC3R2(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=60&&rer<65){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC3R3(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=65&&rer<70){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC3R4(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=70&&rer<75){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC3R5(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=75&&rer<80){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC4(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=80&&rer<85){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC4R2(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=85&&rer<90){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC4R3(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=90&&rer<95){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC4R4(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=95&&rer<100){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC4R5(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=100&&rer<105){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC5(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=105&&rer<110){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC5R2(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=110&&rer<115){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC5R3(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=115&&rer<120){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC5R4(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
				while(rer>=120&&rer<125){
					printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
					scanf("%d",&posicion);
					insertarNodoC5R5(posicion);
					rer++;
					cone=4;
					printf("\nEsta creando nodo %d",posicion);
				}
			}
		else
			printf("\nNo eligio bien, seleccione una opcion valida...");
			cone=4;
	}while(cone!=4&&cone>0);
}
int Suma (){
	int auxsum=0,auxsum2=0,auxsum3=0,auxsum4=0,auxsum5=0,auxsum6=0,auxsum7=0,auxsum8=0,auxsum9=0,auxsum10=0,auxsum100=0,auxsum11=0;
	int auxsum12=0,auxsum13=0,auxsum14=0,auxsum15=0,auxsum16=0,auxsum17=0,auxsum18=0,auxsum19=0,auxsum20=0,auxsum21=0,auxsum22=0,auxsum23=0,auxsum24=0,auxsum25=0,dim=100; 
	int lauxsum=0,lauxsum2=0,lauxsum3=0,lauxsum4=0,lauxsum5=0,lauxsum6=0,lauxsum7=0,lauxsum8=0,lauxsum9=0,lauxsum10=0,lauxsum100=0,lauxsum11=0;
	int lauxsum12=0,lauxsum13=0,lauxsum14=0,lauxsum15=0,lauxsum16=0,lauxsum17=0,lauxsum18=0,lauxsum19=0,lauxsum20=0,lauxsum21=0,lauxsum22=0,lauxsum23=0,lauxsum24=0,lauxsum25=0;
	char bufer1[dim],bufer2[dim],bufer3[dim],bufer4[dim],bufer5[dim],bufer6[dim],bufer7[dim],bufer8[dim],bufer9[dim],bufer10[dim],bufer11[dim];
	char bufer12[dim],bufer13[dim],bufer14[dim],bufer15[dim],bufer16[dim],bufer17[dim],bufer18[dim],bufer19[dim],bufer20[dim],bufer21[dim],bufer22[dim],bufer23[dim],bufer24[dim],bufer25[dim],bufer100[dim];
	char lbufer1[dim],lbufer2[dim],lbufer3[dim],lbufer4[dim],lbufer5[dim],lbufer6[dim],lbufer7[dim],lbufer8[dim],lbufer9[dim],lbufer10[dim],lbufer11[dim];
	char lbufer12[dim],lbufer13[dim],lbufer14[dim],lbufer15[dim],lbufer16[dim],lbufer17[dim],lbufer18[dim],lbufer19[dim],lbufer20[dim],lbufer21[dim],lbufer22[dim],lbufer23[dim],lbufer24[dim],lbufer25[dim];
	
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
	nodo* actual6 = (nodo*)malloc(sizeof(nodo));
	actual6 = primeroC2;
	nodo* actual7 = (nodo*)malloc(sizeof(nodo));
	actual7 = primeroC22;
	nodo* actual8 = (nodo*)malloc(sizeof(nodo));
	actual8 = primeroC23;
	nodo* actual9 = (nodo*)malloc(sizeof(nodo));
	actual9 = primeroC24;
	nodo* actual10 = (nodo*)malloc(sizeof(nodo));
	actual10 = primeroC25;
	nodo* actual11 = (nodo*)malloc(sizeof(nodo));
	actual11 = primeroC3;
	nodo* actual12 = (nodo*)malloc(sizeof(nodo));
	actual12 = primeroC32;
	nodo* actual13 = (nodo*)malloc(sizeof(nodo));
	actual13 = primeroC33;
	nodo* actual14 = (nodo*)malloc(sizeof(nodo));
	actual14 = primeroC34;
	nodo* actual15 = (nodo*)malloc(sizeof(nodo));
	actual15 = primeroC35;
	nodo* actual16 = (nodo*)malloc(sizeof(nodo));
	actual16 = primeroC4;
	nodo* actual17 = (nodo*)malloc(sizeof(nodo));
	actual17 = primeroC42;
	nodo* actual18 = (nodo*)malloc(sizeof(nodo));
	actual18 = primeroC43;
	nodo* actual19 = (nodo*)malloc(sizeof(nodo));
	actual19= primeroC44;
	nodo* actual20= (nodo*)malloc(sizeof(nodo));
	actual20 = primeroC45;
	nodo* actual21 = (nodo*)malloc(sizeof(nodo));
	actual21 = primeroC5;
	nodo* actual22 = (nodo*)malloc(sizeof(nodo));
	actual22 = primeroC52;
	nodo* actual23 = (nodo*)malloc(sizeof(nodo));
	actual23 = primeroC53;
	nodo* actual24 = (nodo*)malloc(sizeof(nodo));
	actual24 = primeroC54;
	nodo* actual25 = (nodo*)malloc(sizeof(nodo));
	actual25 = primeroC55;
	
	if(primero!=NULL&&primero2!=NULL&&primero3!=NULL&&primero4!=NULL&&primero5!=NULL){
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
		
			auxsum=auxsum+actual->dato;
			auxsum2=auxsum2+actual2->dato;
			auxsum3=auxsum3+actual3->dato;
			auxsum4=auxsum4+actual4->dato;
			auxsum5=auxsum5+actual5->dato;
			auxsum6=auxsum6+actual6->dato;
			auxsum7=auxsum7+actual7->dato;
			auxsum8=auxsum8+actual8->dato;
			auxsum9=auxsum9+actual9->dato;
			auxsum10=auxsum10+actual10->dato;
			auxsum11=auxsum11+actual11->dato;
			auxsum12=auxsum12+actual12->dato;
			auxsum13=auxsum13+actual13->dato;
			auxsum14=auxsum14+actual14->dato;
			auxsum15=auxsum15+actual15->dato;
			auxsum16=auxsum16+actual16->dato;
			auxsum17=auxsum17+actual17->dato;
			auxsum18=auxsum18+actual18->dato;
			auxsum19=auxsum19+actual19->dato;
			auxsum20=auxsum20+actual20->dato;
			auxsum21=auxsum21+actual21->dato;
			auxsum22=auxsum22+actual22->dato;
			auxsum23=auxsum23+actual23->dato;
			auxsum24=auxsum24+actual24->dato;
			auxsum25=auxsum25+actual25->dato;
			
			actual = actual->siguiente;
			actual2 = actual2->siguiente;
			actual3 = actual3->siguiente;
			actual4 = actual4->siguiente;
			actual5 = actual5->siguiente;
			actual6 = actual6->siguiente;
			actual7 = actual7->siguiente;
			actual8 = actual8->siguiente;
			actual9 = actual9->siguiente;
			actual10 = actual10->siguiente;
			actual11 = actual11->siguiente;
			actual12 = actual12->siguiente;
			actual13 = actual13->siguiente;
			actual14 = actual14->siguiente;
			actual15 = actual15->siguiente;
			actual16 = actual16->siguiente;
			actual17 = actual17->siguiente;
			actual18 = actual18->siguiente;
			actual19 = actual19->siguiente;
			actual20 = actual20->siguiente;
			actual21 = actual21->siguiente;
			actual22 = actual22->siguiente;
			actual23 = actual23->siguiente;
			actual24 = actual24->siguiente;
			actual25 = actual25->siguiente;
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
		
		actual6 = primeroC2;
		actual6 = actual6->siguiente;
		actual7 = actual6;
		actual6 = actual6->siguiente;
		actual8 = actual6;
		actual6 = actual6->siguiente;
		actual9 = actual6;
		actual6 = actual6->siguiente;
		actual10=actual6;
		actual6 = primeroC2;
		
		actual11 = primeroC3;
		actual11 = actual11->siguiente;
		actual12 = actual11;
		actual11 = actual11->siguiente;
		actual13 = actual11;
		actual11 = actual11->siguiente;
		actual14 = actual11;
		actual11 = actual11->siguiente;
		actual15 = actual11;
		actual11 = primeroC3;
		
		actual16 = primeroC4;
		actual16 = actual16->siguiente;
		actual17 = actual16;
		actual16 = actual16->siguiente;
		actual18 = actual16;
		actual16 = actual16->siguiente;
		actual19 = actual16;
		actual16 = actual16->siguiente;
		actual20 = actual16;
		actual16 = primeroC4;
		
		actual21 = primeroC5;
		actual21 = actual21->siguiente;
		actual22 = actual21;
		actual21 = actual21->siguiente;
		actual23 = actual21;
		actual21 = actual21->siguiente;
		actual24 = actual21;
		actual21 = actual21->siguiente;
		actual25 = actual21;
		actual21 = primeroC5;
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			lauxsum=lauxsum+actual->dato;
			lauxsum2=lauxsum2+actual2->dato;
			lauxsum3=lauxsum3+actual3->dato;
			lauxsum4=lauxsum4+actual4->dato;
			lauxsum5=lauxsum5+actual5->dato;
			lauxsum6=lauxsum6+actual6->dato;
			lauxsum7=lauxsum7+actual7->dato;
			lauxsum8=lauxsum8+actual8->dato;
			lauxsum9=lauxsum9+actual9->dato;
			lauxsum10=lauxsum10+actual10->dato;
			lauxsum11=lauxsum11+actual11->dato;
			lauxsum12=lauxsum12+actual12->dato;
			lauxsum13=lauxsum13+actual13->dato;
			lauxsum14=lauxsum14+actual14->dato;
			lauxsum15=lauxsum15+actual15->dato;
			lauxsum16=lauxsum16+actual16->dato;
			lauxsum17=lauxsum17+actual17->dato;
			lauxsum18=lauxsum18+actual18->dato;
			lauxsum19=lauxsum19+actual19->dato;
			lauxsum20=lauxsum20+actual20->dato;
			lauxsum21=lauxsum21+actual21->dato;
			lauxsum22=lauxsum22+actual22->dato;
			lauxsum23=lauxsum23+actual23->dato;
			lauxsum24=lauxsum24+actual24->dato;
			lauxsum25=lauxsum25+actual25->dato;
			
			actual = actual->abajo;
			actual2 = actual2->abajo;
			actual3 = actual3->abajo;
			actual4 = actual4->abajo;
			actual5 = actual5->abajo;
			actual6 = actual6->abajo;
			actual7 = actual7->abajo;
			actual8 = actual8->abajo;
			actual9 = actual9->abajo;
			actual10 = actual10->abajo;
			actual11 = actual11->abajo;
			actual12 = actual12->abajo;
			actual13 = actual13->abajo;
			actual14 = actual14->abajo;
			actual15 = actual15->abajo;
			actual16 = actual16->abajo;
			actual17 = actual17->abajo;
			actual18 = actual18->abajo;
			actual19 = actual19->abajo;
			actual20 = actual20->abajo;
			actual21 = actual21->abajo;
			actual22 = actual22->abajo;
			actual23 = actual23->abajo;
			actual24 = actual24->abajo;
			actual25 = actual25->abajo;	
		}
		auxsum100=auxsum+auxsum2+auxsum3+auxsum4+auxsum5+auxsum6+auxsum7+auxsum8+auxsum9+auxsum10+auxsum11+auxsum12+auxsum13+auxsum14+auxsum15+auxsum16+auxsum17+auxsum18+auxsum19+auxsum20+auxsum21+auxsum22+auxsum23+auxsum24+auxsum25;
		sprintf(bufer1," R1 es (%d)",auxsum);
		sprintf(bufer2," R2 es (%d)",auxsum2);
		sprintf(bufer3," R3 es (%d)",auxsum3);
		sprintf(bufer4," R4 es (%d)",auxsum4);
		sprintf(bufer5," R5 es (%d)",auxsum5);
		sprintf(bufer6," R6 es (%d)",auxsum6);
		sprintf(bufer7," R7 es (%d)",auxsum7);
		sprintf(bufer8," R8 es (%d)",auxsum8);
		sprintf(bufer9," R9 es (%d)",auxsum9);
		sprintf(bufer10," R10 es (%d)",auxsum10);
		sprintf(bufer11," R11 es (%d)",auxsum11);
		sprintf(bufer12," R12 es (%d)",auxsum12);
		sprintf(bufer13," R13 es (%d)",auxsum13);
		sprintf(bufer14," R14 es (%d)",auxsum14);
		sprintf(bufer15," R15 es (%d)",auxsum15);
		sprintf(bufer16," R16 es (%d)",auxsum16);
		sprintf(bufer17," R17 es (%d)",auxsum17);
		sprintf(bufer18," R18 es (%d)",auxsum18);
		sprintf(bufer19," R19 es (%d)",auxsum19);
		sprintf(bufer20," R20 es (%d)",auxsum20);
		sprintf(bufer21," R21 es (%d)",auxsum21);
		sprintf(bufer22," R22 es (%d)",auxsum22);
		sprintf(bufer23," R23 es (%d)",auxsum23);
		sprintf(bufer24," R24 es (%d)",auxsum24);
		sprintf(bufer25," R25 es (%d)",auxsum25);
		sprintf(lbufer1," C1 es (%d)",lauxsum);
		sprintf(lbufer2," C2 es (%d)",lauxsum2);
		sprintf(lbufer3," C3 es (%d)",lauxsum3);
		sprintf(lbufer4," C4 es (%d)",lauxsum4);
		sprintf(lbufer5," C5 es (%d)",lauxsum5);
		sprintf(lbufer6," C6 es (%d)",lauxsum6);
		sprintf(lbufer7," C7 es (%d)",lauxsum7);
		sprintf(lbufer8," C8 es (%d)",lauxsum8);
		sprintf(lbufer9," C9 es (%d)",lauxsum9);
		sprintf(lbufer10," C10 es (%d)",lauxsum10);
		sprintf(lbufer11," C11 es (%d)",lauxsum11);
		sprintf(lbufer12," C12 es (%d)",lauxsum12);
		sprintf(lbufer13," C13 es (%d)",lauxsum13);
		sprintf(lbufer14," C14 es (%d)",lauxsum14);
		sprintf(lbufer15," C15 es (%d)",lauxsum15);
		sprintf(lbufer16," C16 es (%d)",lauxsum16);
		sprintf(lbufer17," C17 es (%d)",lauxsum17);
		sprintf(lbufer18," C18 es (%d)",lauxsum18);
		sprintf(lbufer19," C19 es (%d)",lauxsum19);
		sprintf(lbufer20," C20 es (%d)",lauxsum20);
		sprintf(lbufer21," C21 es (%d)",lauxsum21);
		sprintf(lbufer22," C22 es (%d)",lauxsum22);
		sprintf(lbufer23," C23 es (%d)",lauxsum23);
		sprintf(lbufer24," C24 es (%d)",lauxsum24);
		sprintf(lbufer25," C25 es (%d)",lauxsum25);
		sprintf(bufer100," La Suma del cubo es (%d)",auxsum100);
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
		outtextxy(250,100,bufer6);
		outtextxy(250,140,bufer7);
		outtextxy(250,180,bufer8);
		outtextxy(250,220,bufer9);
		outtextxy(250,260,bufer10);
		outtextxy(450,100,bufer11);
		outtextxy(450,140,bufer12);
		outtextxy(450,180,bufer13);
		outtextxy(450,220,bufer14);
		outtextxy(450,260,bufer15);
		outtextxy(650,100,bufer16);
		outtextxy(650,140,bufer17);
		outtextxy(650,180,bufer18);
		outtextxy(650,220,bufer19);
		outtextxy(650,260,bufer20);
		outtextxy(850,100,bufer21);
		outtextxy(850,140,bufer22);
		outtextxy(850,180,bufer23);
		outtextxy(850,220,bufer24);
		outtextxy(850,260,bufer25);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,300,"Suma en las Columnas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,360,"Los resultados son:");
		outtextxy(50,400,lbufer1);
		outtextxy(50,440,lbufer2);
		outtextxy(50,480,lbufer3);
		outtextxy(50,520,lbufer4);
		outtextxy(50,560,lbufer5);
		outtextxy(250,400,lbufer6);
		outtextxy(250,440,lbufer7);
		outtextxy(250,480,lbufer8);
		outtextxy(250,520,lbufer9);
		outtextxy(250,560,lbufer10);
		outtextxy(450,400,lbufer11);
		outtextxy(450,440,lbufer12);
		outtextxy(450,480,lbufer13);
		outtextxy(450,520,lbufer14);
		outtextxy(450,560,lbufer15);
		outtextxy(650,400,lbufer16);
		outtextxy(650,440,lbufer17);
		outtextxy(650,480,lbufer18);
		outtextxy(650,520,lbufer19);
		outtextxy(650,560,lbufer20);
		outtextxy(850,400,lbufer21);
		outtextxy(850,440,lbufer22);
		outtextxy(850,480,lbufer23);
		outtextxy(850,520,lbufer24);
		outtextxy(850,560,lbufer25);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,600,"Suma de toda la Cara");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,640,bufer100);
		delay(8000);
		closegraph();
		system("cls");
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
int Resta(){
	int auxsum=0,auxsum2=0,auxsum3=0,auxsum4=0,auxsum5=0,auxsum6=0,auxsum7=0,auxsum8=0,auxsum9=0,auxsum10=0,auxsum100=0,auxsum11=0;
	int auxsum12=0,auxsum13=0,auxsum14=0,auxsum15=0,auxsum16=0,auxsum17=0,auxsum18=0,auxsum19=0,auxsum20=0,auxsum21=0,auxsum22=0,auxsum23=0,auxsum24=0,auxsum25=0,dim=100; 
	int lauxsum=0,lauxsum2=0,lauxsum3=0,lauxsum4=0,lauxsum5=0,lauxsum6=0,lauxsum7=0,lauxsum8=0,lauxsum9=0,lauxsum10=0,lauxsum100=0,lauxsum11=0;
	int lauxsum12=0,lauxsum13=0,lauxsum14=0,lauxsum15=0,lauxsum16=0,lauxsum17=0,lauxsum18=0,lauxsum19=0,lauxsum20=0,lauxsum21=0,lauxsum22=0,lauxsum23=0,lauxsum24=0,lauxsum25=0;
	char bufer1[dim],bufer2[dim],bufer3[dim],bufer4[dim],bufer5[dim],bufer6[dim],bufer7[dim],bufer8[dim],bufer9[dim],bufer10[dim],bufer11[dim];
	char bufer12[dim],bufer13[dim],bufer14[dim],bufer15[dim],bufer16[dim],bufer17[dim],bufer18[dim],bufer19[dim],bufer20[dim],bufer21[dim],bufer22[dim],bufer23[dim],bufer24[dim],bufer25[dim],bufer100[dim];
	char lbufer1[dim],lbufer2[dim],lbufer3[dim],lbufer4[dim],lbufer5[dim],lbufer6[dim],lbufer7[dim],lbufer8[dim],lbufer9[dim],lbufer10[dim],lbufer11[dim];
	char lbufer12[dim],lbufer13[dim],lbufer14[dim],lbufer15[dim],lbufer16[dim],lbufer17[dim],lbufer18[dim],lbufer19[dim],lbufer20[dim],lbufer21[dim],lbufer22[dim],lbufer23[dim],lbufer24[dim],lbufer25[dim];
	
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
	nodo* actual6 = (nodo*)malloc(sizeof(nodo));
	actual6 = primeroC2;
	nodo* actual7 = (nodo*)malloc(sizeof(nodo));
	actual7 = primeroC22;
	nodo* actual8 = (nodo*)malloc(sizeof(nodo));
	actual8 = primeroC23;
	nodo* actual9 = (nodo*)malloc(sizeof(nodo));
	actual9 = primeroC24;
	nodo* actual10 = (nodo*)malloc(sizeof(nodo));
	actual10 = primeroC25;
	nodo* actual11 = (nodo*)malloc(sizeof(nodo));
	actual11 = primeroC3;
	nodo* actual12 = (nodo*)malloc(sizeof(nodo));
	actual12 = primeroC32;
	nodo* actual13 = (nodo*)malloc(sizeof(nodo));
	actual13 = primeroC33;
	nodo* actual14 = (nodo*)malloc(sizeof(nodo));
	actual14 = primeroC34;
	nodo* actual15 = (nodo*)malloc(sizeof(nodo));
	actual15 = primeroC35;
	nodo* actual16 = (nodo*)malloc(sizeof(nodo));
	actual16 = primeroC4;
	nodo* actual17 = (nodo*)malloc(sizeof(nodo));
	actual17 = primeroC42;
	nodo* actual18 = (nodo*)malloc(sizeof(nodo));
	actual18 = primeroC43;
	nodo* actual19 = (nodo*)malloc(sizeof(nodo));
	actual19= primeroC44;
	nodo* actual20= (nodo*)malloc(sizeof(nodo));
	actual20 = primeroC45;
	nodo* actual21 = (nodo*)malloc(sizeof(nodo));
	actual21 = primeroC5;
	nodo* actual22 = (nodo*)malloc(sizeof(nodo));
	actual22 = primeroC52;
	nodo* actual23 = (nodo*)malloc(sizeof(nodo));
	actual23 = primeroC53;
	nodo* actual24 = (nodo*)malloc(sizeof(nodo));
	actual24 = primeroC54;
	nodo* actual25 = (nodo*)malloc(sizeof(nodo));
	actual25 = primeroC55;
	
	if(primero!=NULL&&primero2!=NULL&&primero3!=NULL&&primero4!=NULL&&primero5!=NULL){
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
		
			auxsum=auxsum-actual->dato;
			auxsum2=auxsum2-actual2->dato;
			auxsum3=auxsum3-actual3->dato;
			auxsum4=auxsum4-actual4->dato;
			auxsum5=auxsum5-actual5->dato;
			auxsum6=auxsum6-actual6->dato;
			auxsum7=auxsum7-actual7->dato;
			auxsum8=auxsum8-actual8->dato;
			auxsum9=auxsum9-actual9->dato;
			auxsum10=auxsum10-actual10->dato;
			auxsum11=auxsum11-actual11->dato;
			auxsum12=auxsum12-actual12->dato;
			auxsum13=auxsum13-actual13->dato;
			auxsum14=auxsum14-actual14->dato;
			auxsum15=auxsum15-actual15->dato;
			auxsum16=auxsum16-actual16->dato;
			auxsum17=auxsum17-actual17->dato;
			auxsum18=auxsum18-actual18->dato;
			auxsum19=auxsum19-actual19->dato;
			auxsum20=auxsum20-actual20->dato;
			auxsum21=auxsum21-actual21->dato;
			auxsum22=auxsum22-actual22->dato;
			auxsum23=auxsum23-actual23->dato;
			auxsum24=auxsum24-actual24->dato;
			auxsum25=auxsum25-actual25->dato;
			
			actual = actual->siguiente;
			actual2 = actual2->siguiente;
			actual3 = actual3->siguiente;
			actual4 = actual4->siguiente;
			actual5 = actual5->siguiente;
			actual6 = actual6->siguiente;
			actual7 = actual7->siguiente;
			actual8 = actual8->siguiente;
			actual9 = actual9->siguiente;
			actual10 = actual10->siguiente;
			actual11 = actual11->siguiente;
			actual12 = actual12->siguiente;
			actual13 = actual13->siguiente;
			actual14 = actual14->siguiente;
			actual15 = actual15->siguiente;
			actual16 = actual16->siguiente;
			actual17 = actual17->siguiente;
			actual18 = actual18->siguiente;
			actual19 = actual19->siguiente;
			actual20 = actual20->siguiente;
			actual21 = actual21->siguiente;
			actual22 = actual22->siguiente;
			actual23 = actual23->siguiente;
			actual24 = actual24->siguiente;
			actual25 = actual25->siguiente;
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
		
		actual6 = primeroC2;
		actual6 = actual6->siguiente;
		actual7 = actual6;
		actual6 = actual6->siguiente;
		actual8 = actual6;
		actual6 = actual6->siguiente;
		actual9 = actual6;
		actual6 = actual6->siguiente;
		actual10=actual6;
		actual6 = primeroC2;
		
		actual11 = primeroC3;
		actual11 = actual11->siguiente;
		actual12 = actual11;
		actual11 = actual11->siguiente;
		actual13 = actual11;
		actual11 = actual11->siguiente;
		actual14 = actual11;
		actual11 = actual11->siguiente;
		actual15 = actual11;
		actual11 = primeroC3;
		
		actual16 = primeroC4;
		actual16 = actual16->siguiente;
		actual17 = actual16;
		actual16 = actual16->siguiente;
		actual18 = actual16;
		actual16 = actual16->siguiente;
		actual19 = actual16;
		actual16 = actual16->siguiente;
		actual20 = actual16;
		actual16 = primeroC4;
		
		actual21 = primeroC5;
		actual21 = actual21->siguiente;
		actual22 = actual21;
		actual21 = actual21->siguiente;
		actual23 = actual21;
		actual21 = actual21->siguiente;
		actual24 = actual21;
		actual21 = actual21->siguiente;
		actual25 = actual21;
		actual21 = primeroC5;
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			lauxsum=lauxsum-actual->dato;
			lauxsum2=lauxsum2-actual2->dato;
			lauxsum3=lauxsum3-actual3->dato;
			lauxsum4=lauxsum4-actual4->dato;
			lauxsum5=lauxsum5-actual5->dato;
			lauxsum6=lauxsum6-actual6->dato;
			lauxsum7=lauxsum7-actual7->dato;
			lauxsum8=lauxsum8-actual8->dato;
			lauxsum9=lauxsum9-actual9->dato;
			lauxsum10=lauxsum10-actual10->dato;
			lauxsum11=lauxsum11-actual11->dato;
			lauxsum12=lauxsum12-actual12->dato;
			lauxsum13=lauxsum13-actual13->dato;
			lauxsum14=lauxsum14-actual14->dato;
			lauxsum15=lauxsum15-actual15->dato;
			lauxsum16=lauxsum16-actual16->dato;
			lauxsum17=lauxsum17-actual17->dato;
			lauxsum18=lauxsum18-actual18->dato;
			lauxsum19=lauxsum19-actual19->dato;
			lauxsum20=lauxsum20-actual20->dato;
			lauxsum21=lauxsum21-actual21->dato;
			lauxsum22=lauxsum22-actual22->dato;
			lauxsum23=lauxsum23-actual23->dato;
			lauxsum24=lauxsum24-actual24->dato;
			lauxsum25=lauxsum25-actual25->dato;
			
			actual = actual->abajo;
			actual2 = actual2->abajo;
			actual3 = actual3->abajo;
			actual4 = actual4->abajo;
			actual5 = actual5->abajo;
			actual6 = actual6->abajo;
			actual7 = actual7->abajo;
			actual8 = actual8->abajo;
			actual9 = actual9->abajo;
			actual10 = actual10->abajo;
			actual11 = actual11->abajo;
			actual12 = actual12->abajo;
			actual13 = actual13->abajo;
			actual14 = actual14->abajo;
			actual15 = actual15->abajo;
			actual16 = actual16->abajo;
			actual17 = actual17->abajo;
			actual18 = actual18->abajo;
			actual19 = actual19->abajo;
			actual20 = actual20->abajo;
			actual21 = actual21->abajo;
			actual22 = actual22->abajo;
			actual23 = actual23->abajo;
			actual24 = actual24->abajo;
			actual25 = actual25->abajo;	
		}
		auxsum100=auxsum+auxsum2+auxsum3+auxsum4+auxsum5+auxsum6+auxsum7+auxsum8+auxsum9+auxsum10+auxsum11+auxsum12+auxsum13+auxsum14+auxsum15+auxsum16+auxsum17+auxsum18+auxsum19+auxsum20+auxsum21+auxsum22+auxsum23+auxsum24+auxsum25;
		sprintf(bufer1," R1 es (%d)",auxsum);
		sprintf(bufer2," R2 es (%d)",auxsum2);
		sprintf(bufer3," R3 es (%d)",auxsum3);
		sprintf(bufer4," R4 es (%d)",auxsum4);
		sprintf(bufer5," R5 es (%d)",auxsum5);
		sprintf(bufer6," R6 es (%d)",auxsum6);
		sprintf(bufer7," R7 es (%d)",auxsum7);
		sprintf(bufer8," R8 es (%d)",auxsum8);
		sprintf(bufer9," R9 es (%d)",auxsum9);
		sprintf(bufer10," R10 es (%d)",auxsum10);
		sprintf(bufer11," R11 es (%d)",auxsum11);
		sprintf(bufer12," R12 es (%d)",auxsum12);
		sprintf(bufer13," R13 es (%d)",auxsum13);
		sprintf(bufer14," R14 es (%d)",auxsum14);
		sprintf(bufer15," R15 es (%d)",auxsum15);
		sprintf(bufer16," R16 es (%d)",auxsum16);
		sprintf(bufer17," R17 es (%d)",auxsum17);
		sprintf(bufer18," R18 es (%d)",auxsum18);
		sprintf(bufer19," R19 es (%d)",auxsum19);
		sprintf(bufer20," R20 es (%d)",auxsum20);
		sprintf(bufer21," R21 es (%d)",auxsum21);
		sprintf(bufer22," R22 es (%d)",auxsum22);
		sprintf(bufer23," R23 es (%d)",auxsum23);
		sprintf(bufer24," R24 es (%d)",auxsum24);
		sprintf(bufer25," R25 es (%d)",auxsum25);
		sprintf(lbufer1," C1 es (%d)",lauxsum);
		sprintf(lbufer2," C2 es (%d)",lauxsum2);
		sprintf(lbufer3," C3 es (%d)",lauxsum3);
		sprintf(lbufer4," C4 es (%d)",lauxsum4);
		sprintf(lbufer5," C5 es (%d)",lauxsum5);
		sprintf(lbufer6," C6 es (%d)",lauxsum6);
		sprintf(lbufer7," C7 es (%d)",lauxsum7);
		sprintf(lbufer8," C8 es (%d)",lauxsum8);
		sprintf(lbufer9," C9 es (%d)",lauxsum9);
		sprintf(lbufer10," C10 es (%d)",lauxsum10);
		sprintf(lbufer11," C11 es (%d)",lauxsum11);
		sprintf(lbufer12," C12 es (%d)",lauxsum12);
		sprintf(lbufer13," C13 es (%d)",lauxsum13);
		sprintf(lbufer14," C14 es (%d)",lauxsum14);
		sprintf(lbufer15," C15 es (%d)",lauxsum15);
		sprintf(lbufer16," C16 es (%d)",lauxsum16);
		sprintf(lbufer17," C17 es (%d)",lauxsum17);
		sprintf(lbufer18," C18 es (%d)",lauxsum18);
		sprintf(lbufer19," C19 es (%d)",lauxsum19);
		sprintf(lbufer20," C20 es (%d)",lauxsum20);
		sprintf(lbufer21," C21 es (%d)",lauxsum21);
		sprintf(lbufer22," C22 es (%d)",lauxsum22);
		sprintf(lbufer23," C23 es (%d)",lauxsum23);
		sprintf(lbufer24," C24 es (%d)",lauxsum24);
		sprintf(lbufer25," C25 es (%d)",lauxsum25);
		sprintf(bufer100," La Resta de la cara es (%d)",auxsum100);
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
		outtextxy(250,100,bufer6);
		outtextxy(250,140,bufer7);
		outtextxy(250,180,bufer8);
		outtextxy(250,220,bufer9);
		outtextxy(250,260,bufer10);
		outtextxy(450,100,bufer11);
		outtextxy(450,140,bufer12);
		outtextxy(450,180,bufer13);
		outtextxy(450,220,bufer14);
		outtextxy(450,260,bufer15);
		outtextxy(650,100,bufer16);
		outtextxy(650,140,bufer17);
		outtextxy(650,180,bufer18);
		outtextxy(650,220,bufer19);
		outtextxy(650,260,bufer20);
		outtextxy(850,100,bufer21);
		outtextxy(850,140,bufer22);
		outtextxy(850,180,bufer23);
		outtextxy(850,220,bufer24);
		outtextxy(850,260,bufer25);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,300,"Resta en las Columnas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,360,"Los resultados son:");
		outtextxy(50,400,lbufer1);
		outtextxy(50,440,lbufer2);
		outtextxy(50,480,lbufer3);
		outtextxy(50,520,lbufer4);
		outtextxy(50,560,lbufer5);
		outtextxy(250,400,lbufer6);
		outtextxy(250,440,lbufer7);
		outtextxy(250,480,lbufer8);
		outtextxy(250,520,lbufer9);
		outtextxy(250,560,lbufer10);
		outtextxy(450,400,lbufer11);
		outtextxy(450,440,lbufer12);
		outtextxy(450,480,lbufer13);
		outtextxy(450,520,lbufer14);
		outtextxy(450,560,lbufer15);
		outtextxy(650,400,lbufer16);
		outtextxy(650,440,lbufer17);
		outtextxy(650,480,lbufer18);
		outtextxy(650,520,lbufer19);
		outtextxy(650,560,lbufer20);
		outtextxy(850,400,lbufer21);
		outtextxy(850,440,lbufer22);
		outtextxy(850,480,lbufer23);
		outtextxy(850,520,lbufer24);
		outtextxy(850,560,lbufer25);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,600,"Resta de toda la Cara");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,640,bufer100);
		delay(8000);
		closegraph();
		system("cls");
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
int Multiplicacion(){
	int auxsum=1,auxsum2=1,auxsum3=1,auxsum4=1,auxsum5=1,auxsum6=1,auxsum7=1,auxsum8=1,auxsum9=1,auxsum10=1,auxsum100=1,auxsum11=1;
	int auxsum12=1,auxsum13=1,auxsum14=1,auxsum15=1,auxsum16=1,auxsum17=1,auxsum18=1,auxsum19=1,auxsum20=1,auxsum21=1,auxsum22=1,auxsum23=1,auxsum24=1,auxsum25=1,dim=100; 
	int lauxsum=1,lauxsum2=1,lauxsum3=1,lauxsum4=1,lauxsum5=1,lauxsum6=1,lauxsum7=1,lauxsum8=1,lauxsum9=1,lauxsum10=1,lauxsum100=1,lauxsum11=1;
	int lauxsum12=1,lauxsum13=1,lauxsum14=1,lauxsum15=1,lauxsum16=1,lauxsum17=1,lauxsum18=1,lauxsum19=1,lauxsum20=1,lauxsum21=1,lauxsum22=1,lauxsum23=1,lauxsum24=1,lauxsum25=1;
	char bufer1[dim],bufer2[dim],bufer3[dim],bufer4[dim],bufer5[dim],bufer6[dim],bufer7[dim],bufer8[dim],bufer9[dim],bufer10[dim],bufer11[dim];
	char bufer12[dim],bufer13[dim],bufer14[dim],bufer15[dim],bufer16[dim],bufer17[dim],bufer18[dim],bufer19[dim],bufer20[dim],bufer21[dim],bufer22[dim],bufer23[dim],bufer24[dim],bufer25[dim],bufer100[dim];
	char lbufer1[dim],lbufer2[dim],lbufer3[dim],lbufer4[dim],lbufer5[dim],lbufer6[dim],lbufer7[dim],lbufer8[dim],lbufer9[dim],lbufer10[dim],lbufer11[dim];
	char lbufer12[dim],lbufer13[dim],lbufer14[dim],lbufer15[dim],lbufer16[dim],lbufer17[dim],lbufer18[dim],lbufer19[dim],lbufer20[dim],lbufer21[dim],lbufer22[dim],lbufer23[dim],lbufer24[dim],lbufer25[dim];
	
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
	nodo* actual6 = (nodo*)malloc(sizeof(nodo));
	actual6 = primeroC2;
	nodo* actual7 = (nodo*)malloc(sizeof(nodo));
	actual7 = primeroC22;
	nodo* actual8 = (nodo*)malloc(sizeof(nodo));
	actual8 = primeroC23;
	nodo* actual9 = (nodo*)malloc(sizeof(nodo));
	actual9 = primeroC24;
	nodo* actual10 = (nodo*)malloc(sizeof(nodo));
	actual10 = primeroC25;
	nodo* actual11 = (nodo*)malloc(sizeof(nodo));
	actual11 = primeroC3;
	nodo* actual12 = (nodo*)malloc(sizeof(nodo));
	actual12 = primeroC32;
	nodo* actual13 = (nodo*)malloc(sizeof(nodo));
	actual13 = primeroC33;
	nodo* actual14 = (nodo*)malloc(sizeof(nodo));
	actual14 = primeroC34;
	nodo* actual15 = (nodo*)malloc(sizeof(nodo));
	actual15 = primeroC35;
	nodo* actual16 = (nodo*)malloc(sizeof(nodo));
	actual16 = primeroC4;
	nodo* actual17 = (nodo*)malloc(sizeof(nodo));
	actual17 = primeroC42;
	nodo* actual18 = (nodo*)malloc(sizeof(nodo));
	actual18 = primeroC43;
	nodo* actual19 = (nodo*)malloc(sizeof(nodo));
	actual19= primeroC44;
	nodo* actual20= (nodo*)malloc(sizeof(nodo));
	actual20 = primeroC45;
	nodo* actual21 = (nodo*)malloc(sizeof(nodo));
	actual21 = primeroC5;
	nodo* actual22 = (nodo*)malloc(sizeof(nodo));
	actual22 = primeroC52;
	nodo* actual23 = (nodo*)malloc(sizeof(nodo));
	actual23 = primeroC53;
	nodo* actual24 = (nodo*)malloc(sizeof(nodo));
	actual24 = primeroC54;
	nodo* actual25 = (nodo*)malloc(sizeof(nodo));
	actual25 = primeroC55;
	
	if(primero!=NULL&&primero2!=NULL&&primero3!=NULL&&primero4!=NULL&&primero5!=NULL){
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
		
			auxsum=auxsum*actual->dato;
			auxsum2=auxsum2*actual2->dato;
			auxsum3=auxsum3*actual3->dato;
			auxsum4=auxsum4*actual4->dato;
			auxsum5=auxsum5*actual5->dato;
			auxsum6=auxsum6*actual6->dato;
			auxsum7=auxsum7*actual7->dato;
			auxsum8=auxsum8*actual8->dato;
			auxsum9=auxsum9*actual9->dato;
			auxsum10=auxsum10*actual10->dato;
			auxsum11=auxsum11*actual11->dato;
			auxsum12=auxsum12*actual12->dato;
			auxsum13=auxsum13*actual13->dato;
			auxsum14=auxsum14*actual14->dato;
			auxsum15=auxsum15*actual15->dato;
			auxsum16=auxsum16*actual16->dato;
			auxsum17=auxsum17*actual17->dato;
			auxsum18=auxsum18*actual18->dato;
			auxsum19=auxsum19*actual19->dato;
			auxsum20=auxsum20*actual20->dato;
			auxsum21=auxsum21*actual21->dato;
			auxsum22=auxsum22*actual22->dato;
			auxsum23=auxsum23*actual23->dato;
			auxsum24=auxsum24*actual24->dato;
			auxsum25=auxsum25*actual25->dato;
			
			actual = actual->siguiente;
			actual2 = actual2->siguiente;
			actual3 = actual3->siguiente;
			actual4 = actual4->siguiente;
			actual5 = actual5->siguiente;
			actual6 = actual6->siguiente;
			actual7 = actual7->siguiente;
			actual8 = actual8->siguiente;
			actual9 = actual9->siguiente;
			actual10 = actual10->siguiente;
			actual11 = actual11->siguiente;
			actual12 = actual12->siguiente;
			actual13 = actual13->siguiente;
			actual14 = actual14->siguiente;
			actual15 = actual15->siguiente;
			actual16 = actual16->siguiente;
			actual17 = actual17->siguiente;
			actual18 = actual18->siguiente;
			actual19 = actual19->siguiente;
			actual20 = actual20->siguiente;
			actual21 = actual21->siguiente;
			actual22 = actual22->siguiente;
			actual23 = actual23->siguiente;
			actual24 = actual24->siguiente;
			actual25 = actual25->siguiente;
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
		
		actual6 = primeroC2;
		actual6 = actual6->siguiente;
		actual7 = actual6;
		actual6 = actual6->siguiente;
		actual8 = actual6;
		actual6 = actual6->siguiente;
		actual9 = actual6;
		actual6 = actual6->siguiente;
		actual10=actual6;
		actual6 = primeroC2;
		
		actual11 = primeroC3;
		actual11 = actual11->siguiente;
		actual12 = actual11;
		actual11 = actual11->siguiente;
		actual13 = actual11;
		actual11 = actual11->siguiente;
		actual14 = actual11;
		actual11 = actual11->siguiente;
		actual15 = actual11;
		actual11 = primeroC3;
		
		actual16 = primeroC4;
		actual16 = actual16->siguiente;
		actual17 = actual16;
		actual16 = actual16->siguiente;
		actual18 = actual16;
		actual16 = actual16->siguiente;
		actual19 = actual16;
		actual16 = actual16->siguiente;
		actual20 = actual16;
		actual16 = primeroC4;
		
		actual21 = primeroC5;
		actual21 = actual21->siguiente;
		actual22 = actual21;
		actual21 = actual21->siguiente;
		actual23 = actual21;
		actual21 = actual21->siguiente;
		actual24 = actual21;
		actual21 = actual21->siguiente;
		actual25 = actual21;
		actual21 = primeroC5;
		
		while(actual!= NULL&&actual2!= NULL&&actual3!= NULL&&actual4!= NULL&&actual5!= NULL){
			
			lauxsum=lauxsum*actual->dato;
			lauxsum2=lauxsum2*actual2->dato;
			lauxsum3=lauxsum3*actual3->dato;
			lauxsum4=lauxsum4*actual4->dato;
			lauxsum5=lauxsum5*actual5->dato;
			lauxsum6=lauxsum6*actual6->dato;
			lauxsum7=lauxsum7*actual7->dato;
			lauxsum8=lauxsum8*actual8->dato;
			lauxsum9=lauxsum9*actual9->dato;
			lauxsum10=lauxsum10*actual10->dato;
			lauxsum11=lauxsum11*actual11->dato;
			lauxsum12=lauxsum12*actual12->dato;
			lauxsum13=lauxsum13*actual13->dato;
			lauxsum14=lauxsum14*actual14->dato;
			lauxsum15=lauxsum15*actual15->dato;
			lauxsum16=lauxsum16*actual16->dato;
			lauxsum17=lauxsum17*actual17->dato;
			lauxsum18=lauxsum18*actual18->dato;
			lauxsum19=lauxsum19*actual19->dato;
			lauxsum20=lauxsum20*actual20->dato;
			lauxsum21=lauxsum21*actual21->dato;
			lauxsum22=lauxsum22*actual22->dato;
			lauxsum23=lauxsum23*actual23->dato;
			lauxsum24=lauxsum24*actual24->dato;
			lauxsum25=lauxsum25*actual25->dato;
			
			actual = actual->abajo;
			actual2 = actual2->abajo;
			actual3 = actual3->abajo;
			actual4 = actual4->abajo;
			actual5 = actual5->abajo;
			actual6 = actual6->abajo;
			actual7 = actual7->abajo;
			actual8 = actual8->abajo;
			actual9 = actual9->abajo;
			actual10 = actual10->abajo;
			actual11 = actual11->abajo;
			actual12 = actual12->abajo;
			actual13 = actual13->abajo;
			actual14 = actual14->abajo;
			actual15 = actual15->abajo;
			actual16 = actual16->abajo;
			actual17 = actual17->abajo;
			actual18 = actual18->abajo;
			actual19 = actual19->abajo;
			actual20 = actual20->abajo;
			actual21 = actual21->abajo;
			actual22 = actual22->abajo;
			actual23 = actual23->abajo;
			actual24 = actual24->abajo;
			actual25 = actual25->abajo;	
		}
		auxsum100=auxsum+auxsum2+auxsum3+auxsum4+auxsum5+auxsum6+auxsum7+auxsum8+auxsum9+auxsum10+auxsum11+auxsum12+auxsum13+auxsum14+auxsum15+auxsum16+auxsum17+auxsum18+auxsum19+auxsum20+auxsum21+auxsum22+auxsum23+auxsum24+auxsum25;
		sprintf(bufer1," R1 es (%d)",auxsum);
		sprintf(bufer2," R2 es (%d)",auxsum2);
		sprintf(bufer3," R3 es (%d)",auxsum3);
		sprintf(bufer4," R4 es (%d)",auxsum4);
		sprintf(bufer5," R5 es (%d)",auxsum5);
		sprintf(bufer6," R6 es (%d)",auxsum6);
		sprintf(bufer7," R7 es (%d)",auxsum7);
		sprintf(bufer8," R8 es (%d)",auxsum8);
		sprintf(bufer9," R9 es (%d)",auxsum9);
		sprintf(bufer10," R10 es (%d)",auxsum10);
		sprintf(bufer11," R11 es (%d)",auxsum11);
		sprintf(bufer12," R12 es (%d)",auxsum12);
		sprintf(bufer13," R13 es (%d)",auxsum13);
		sprintf(bufer14," R14 es (%d)",auxsum14);
		sprintf(bufer15," R15 es (%d)",auxsum15);
		sprintf(bufer16," R16 es (%d)",auxsum16);
		sprintf(bufer17," R17 es (%d)",auxsum17);
		sprintf(bufer18," R18 es (%d)",auxsum18);
		sprintf(bufer19," R19 es (%d)",auxsum19);
		sprintf(bufer20," R20 es (%d)",auxsum20);
		sprintf(bufer21," R21 es (%d)",auxsum21);
		sprintf(bufer22," R22 es (%d)",auxsum22);
		sprintf(bufer23," R23 es (%d)",auxsum23);
		sprintf(bufer24," R24 es (%d)",auxsum24);
		sprintf(bufer25," R25 es (%d)",auxsum25);
		sprintf(lbufer1," C1 es (%d)",lauxsum);
		sprintf(lbufer2," C2 es (%d)",lauxsum2);
		sprintf(lbufer3," C3 es (%d)",lauxsum3);
		sprintf(lbufer4," C4 es (%d)",lauxsum4);
		sprintf(lbufer5," C5 es (%d)",lauxsum5);
		sprintf(lbufer6," C6 es (%d)",lauxsum6);
		sprintf(lbufer7," C7 es (%d)",lauxsum7);
		sprintf(lbufer8," C8 es (%d)",lauxsum8);
		sprintf(lbufer9," C9 es (%d)",lauxsum9);
		sprintf(lbufer10," C10 es (%d)",lauxsum10);
		sprintf(lbufer11," C11 es (%d)",lauxsum11);
		sprintf(lbufer12," C12 es (%d)",lauxsum12);
		sprintf(lbufer13," C13 es (%d)",lauxsum13);
		sprintf(lbufer14," C14 es (%d)",lauxsum14);
		sprintf(lbufer15," C15 es (%d)",lauxsum15);
		sprintf(lbufer16," C16 es (%d)",lauxsum16);
		sprintf(lbufer17," C17 es (%d)",lauxsum17);
		sprintf(lbufer18," C18 es (%d)",lauxsum18);
		sprintf(lbufer19," C19 es (%d)",lauxsum19);
		sprintf(lbufer20," C20 es (%d)",lauxsum20);
		sprintf(lbufer21," C21 es (%d)",lauxsum21);
		sprintf(lbufer22," C22 es (%d)",lauxsum22);
		sprintf(lbufer23," C23 es (%d)",lauxsum23);
		sprintf(lbufer24," C24 es (%d)",lauxsum24);
		sprintf(lbufer25," C25 es (%d)",lauxsum25);
		sprintf(bufer100," La Multiplicacion de la Cara No.1 es (%d)",auxsum100);
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
		outtextxy(250,100,bufer6);
		outtextxy(250,140,bufer7);
		outtextxy(250,180,bufer8);
		outtextxy(250,220,bufer9);
		outtextxy(250,260,bufer10);
		outtextxy(450,100,bufer11);
		outtextxy(450,140,bufer12);
		outtextxy(450,180,bufer13);
		outtextxy(450,220,bufer14);
		outtextxy(450,260,bufer15);
		outtextxy(650,100,bufer16);
		outtextxy(650,140,bufer17);
		outtextxy(650,180,bufer18);
		outtextxy(650,220,bufer19);
		outtextxy(650,260,bufer20);
		outtextxy(850,100,bufer21);
		outtextxy(850,140,bufer22);
		outtextxy(850,180,bufer23);
		outtextxy(850,220,bufer24);
		outtextxy(850,260,bufer25);
		setlinestyle(3, 3, 3);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,300,"Multiplicacion en las Columnas");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,360,"Los resultados son:");
		outtextxy(50,400,lbufer1);
		outtextxy(50,440,lbufer2);
		outtextxy(50,480,lbufer3);
		outtextxy(50,520,lbufer4);
		outtextxy(50,560,lbufer5);
		outtextxy(250,400,lbufer6);
		outtextxy(250,440,lbufer7);
		outtextxy(250,480,lbufer8);
		outtextxy(250,520,lbufer9);
		outtextxy(250,560,lbufer10);
		outtextxy(450,400,lbufer11);
		outtextxy(450,440,lbufer12);
		outtextxy(450,480,lbufer13);
		outtextxy(450,520,lbufer14);
		outtextxy(450,560,lbufer15);
		outtextxy(650,400,lbufer16);
		outtextxy(650,440,lbufer17);
		outtextxy(650,480,lbufer18);
		outtextxy(650,520,lbufer19);
		outtextxy(650,560,lbufer20);
		outtextxy(850,400,lbufer21);
		outtextxy(850,440,lbufer22);
		outtextxy(850,480,lbufer23);
		outtextxy(850,520,lbufer24);
		outtextxy(850,560,lbufer25);
		setcolor(RED);
		settextstyle(BOLD_FONT, HORIZ_DIR, 5);
		outtextxy(10,600,"Multiplicacion de toda la Cara");
		settextstyle(BOLD_FONT, HORIZ_DIR, 3);
		setcolor(GREEN);
		outtextxy(50,640,bufer100);
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
	outtextxy(50,300,"6.Cara Transversal No.1");
	outtextxy(50,340,"7.Cara Transversal No.2");
	outtextxy(50,380,"8.Cara Transversal No.3");
	outtextxy(50,420,"9.Cara Transversal No.4");
	outtextxy(50,460,"10.Cara Transversal No.5");
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
					ImprimirC2R1(dim);
					break;
				case 2:
					ImprimirC2R2(dim);
					break;
				case 3:
					ImprimirC2R3(dim);
					break;
				case 4:
					ImprimirC2R4(dim);
					break;
				case 5:
					ImprimirC2R5(dim);
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
					ImprimirC3R1(dim);
					break;
				case 2:
					ImprimirC3R2(dim);
					break;
				case 3:
					ImprimirC3R3(dim);
					break;
				case 4:
					ImprimirC3R4(dim);
					break;
				case 5:
					ImprimirC3R5(dim);
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
					ImprimirC4R1(dim);
					break;
				case 2:
					ImprimirC4R2(dim);
					break;
				case 3:
					ImprimirC4R3(dim);
					break;
				case 4:
					ImprimirC4R4(dim);
					break;
				case 5:
					ImprimirC4R5(dim);
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
					ImprimirC5R1(dim);
					break;
				case 2:
					ImprimirC5R2(dim);
					break;
				case 3:
					ImprimirC5R3(dim);
					break;
				case 4:
					ImprimirC5R4(dim);
					break;
				case 5:
					ImprimirC5R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 6:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC1R1(dim);
					break;
				case 2:
					ImprimirTC1R2(dim);
					break;
				case 3:
					ImprimirTC1R3(dim);
					break;
				case 4:
					ImprimirTC1R4(dim);
					break;
				case 5:
					ImprimirTC1R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 7:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC2R1(dim);
					break;
				case 2:
					ImprimirTC2R2(dim);
					break;
				case 3:
					ImprimirTC2R3(dim);
					break;
				case 4:
					ImprimirTC2R4(dim);
					break;
				case 5:
					ImprimirTC2R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 8:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC3R1(dim);
					break;
				case 2:
					ImprimirTC3R2(dim);
					break;
				case 3:
					ImprimirTC3R3(dim);
					break;
				case 4:
					ImprimirTC3R4(dim);
					break;
				case 5:
					ImprimirTC3R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 9:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC4R1(dim);
					break;
				case 2:
					ImprimirTC4R2(dim);
					break;
				case 3:
					ImprimirTC4R3(dim);
					break;
				case 4:
					ImprimirTC4R4(dim);
					break;
				case 5:
					ImprimirTC4R5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 10:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC5R1(dim);
					break;
				case 2:
					ImprimirTC5R2(dim);
					break;
				case 3:
					ImprimirTC5R3(dim);
					break;
				case 4:
					ImprimirTC5R4(dim);
					break;
				case 5:
					ImprimirTC5R5(dim);
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
	outtextxy(50,300,"6.Cara Transversal No.1");
	outtextxy(50,340,"7.Cara Transversal No.2");
	outtextxy(50,380,"8.Cara Transversal No.3");
	outtextxy(50,420,"9.Cara Transversal No.4");
	outtextxy(50,460,"10.Cara Transversal No.5");
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
					ImprimirC2C1(dim);
					break;
				case 2:
					ImprimirC2C2(dim);
					break;
				case 3:
					ImprimirC2C3(dim);
					break;
				case 4:
					ImprimirC2C4(dim);
					break;
				case 5:
					ImprimirC2C5(dim);
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
					ImprimirC3C1(dim);
					break;
				case 2:
					ImprimirC3C2(dim);
					break;
				case 3:
					ImprimirC3C3(dim);
					break;
				case 4:
					ImprimirC3C4(dim);
					break;
				case 5:
					ImprimirC3C5(dim);
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
					ImprimirC4C1(dim);
					break;
				case 2:
					ImprimirC4C2(dim);
					break;
				case 3:
					ImprimirC4C3(dim);
					break;
				case 4:
					ImprimirC4C4(dim);
					break;
				case 5:
					ImprimirC4C5(dim);
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
					ImprimirC5C1(dim);
					break;
				case 2:
					ImprimirC5C2(dim);
					break;
				case 3:
					ImprimirC5C3(dim);
					break;
				case 4:
					ImprimirC5C4(dim);
					break;
				case 5:
					ImprimirC5C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 6:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC1C1(dim);
					break;
				case 2:
					ImprimirTC1C2(dim);
					break;
				case 3:
					ImprimirTC1C3(dim);
					break;
				case 4:
					ImprimirTC1C4(dim);
					break;
				case 5:
					ImprimirTC1C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 7:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC2C1(dim);
					break;
				case 2:
					ImprimirTC2C2(dim);
					break;
				case 3:
					ImprimirTC2C3(dim);
					break;
				case 4:
					ImprimirTC2C4(dim);
					break;
				case 5:
					ImprimirTC2C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 8:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC3C1(dim);
					break;
				case 2:
					ImprimirTC3C2(dim);
					break;
				case 3:
					ImprimirTC3C3(dim);
					break;
				case 4:
					ImprimirTC3C4(dim);
					break;
				case 5:
					ImprimirTC3C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 9:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC4C1(dim);
					break;
				case 2:
					ImprimirTC4C2(dim);
					break;
				case 3:
					ImprimirTC4C3(dim);
					break;
				case 4:
					ImprimirTC4C4(dim);
					break;
				case 5:
					ImprimirTC4C5(dim);
					break;
				default:
					printf("\nNo eligio algo valido");
					break;
				}
				break;
		case 10:
				initwindow(1900,1080,"Estructura",0,0,false,true);
				setlinestyle(3, 3, 3);
				setcolor(RED);
				settextstyle(BOLD_FONT, HORIZ_DIR, 5);
				outtextxy(10,10,"Menu de impresion de filas");
				settextstyle(BOLD_FONT, HORIZ_DIR, 3);
				setcolor(GREEN);
				outtextxy(50,60,"Elija la cara que quiere trabajar:");
				outtextxy(50,100,"1.Renglon Transversal No.1");
				outtextxy(50,140,"2.Renglon Transversal No.2");
				outtextxy(50,180,"3.Renglon Transversal No.3");
				outtextxy(50,220,"4.Renglon Transversal No.4");
				outtextxy(50,260,"5.Renglon Transversal No.5");
				delay(3000);
				closegraph();
				printf("Inserte su opcion:");
				scanf("%d",&Elec2);
				switch(Elec2){
				case 1:
					ImprimirTC5C1(dim);
					break;
				case 2:
					ImprimirTC5C2(dim);
					break;
				case 3:
					ImprimirTC5C3(dim);
					break;
				case 4:
					ImprimirTC5C4(dim);
					break;
				case 5:
					ImprimirTC5C5(dim);
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

int ImprimirC2R1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC2;
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
	outtextxy(10,100,"InicioC2");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC2");
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
int ImprimirC2R2(int dim){
		nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC22;
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
	outtextxy(10,100,"InicioC22");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC22");
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

int ImprimirC2R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC23;
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
	outtextxy(10,100,"InicioC23");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC23");
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

int ImprimirC2R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC24;
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
	outtextxy(10,100,"InicioC24");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC24");
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
int ImprimirC2R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC25;
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
	outtextxy(10,100,"InicioC25");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC25");
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

int ImprimirC3R1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC3;
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
	outtextxy(10,100,"InicioC3");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC3");
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
int ImprimirC3R2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC32;
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
	outtextxy(10,100,"InicioC32");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC32");
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

int ImprimirC3R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC33;
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
	outtextxy(10,100,"InicioC33");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC33");
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

int ImprimirC3R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC34;
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
	outtextxy(10,100,"InicioC34");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC34");
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
int ImprimirC3R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC35;
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
	outtextxy(10,100,"InicioC35");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC35");
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

int ImprimirC4R1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC4;
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
	outtextxy(10,100,"InicioC4");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC4");
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
int ImprimirC4R2(int dim){
		nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC42;
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
	outtextxy(10,100,"InicioC42");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC42");
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

int ImprimirC4R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC43;
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
	outtextxy(10,100,"InicioC43");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC43");
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

int ImprimirC4R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC44;
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
	outtextxy(10,100,"InicioC44");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC44");
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
int ImprimirC4R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC45;
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
	outtextxy(10,100,"InicioC45");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC45");
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

int ImprimirC5R1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC5;
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
	outtextxy(10,100,"InicioC5");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC5");
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
int ImprimirC5R2(int dim){
		nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC52;
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
	outtextxy(10,100,"InicioC52");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC52");
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

int ImprimirC5R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC53;
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
	outtextxy(10,100,"InicioC53");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC53");
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

int ImprimirC5R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC54;
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
	outtextxy(10,100,"InicioC54");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC54");
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
int ImprimirC5R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC55;
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
	outtextxy(10,100,"InicioC55");
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
			outtextxy(posx+termx+60,posy+5,"UltimoC55");
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

int ImprimirTC1R1(int dim){
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
 }
int ImprimirTC1R2(int dim){
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC1R3(int dim){
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC1R4(int dim){
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}
int ImprimirTC1R5(int dim){
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC2R1(int dim){
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
 }
int ImprimirTC2R2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero2;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC2R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero3;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC2R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero4;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}
int ImprimirTC2R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero5;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC3R1(int dim){
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
 }
int ImprimirTC3R2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero2;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC3R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero3;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC3R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero4;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}
int ImprimirTC3R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero5;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC4R1(int dim){
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
 }
int ImprimirTC4R2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero2;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC4R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero3;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC4R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero4;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}
int ImprimirTC4R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero5;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC5R1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
 }
int ImprimirTC5R2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero2;
	actual=actual->siguiente;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC5R3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero3;
	actual=actual->siguiente;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}

int ImprimirTC5R4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero4;
	actual=actual->siguiente;
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
		actual=actual->caraAtras;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 return 0; 
}
int ImprimirTC5R5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero5;
	actual=actual->siguiente;
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
		actual=actual->caraAtras;
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

int ImprimirTC1C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC1C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC1C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC1C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->caraAtras;
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

int ImprimirTC1C5(int dim){
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

int ImprimirC2C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC2;
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

int ImprimirC2C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC2;
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

int ImprimirC2C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC2;
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

int ImprimirC2C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC2;
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

int ImprimirC2C5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=ultimoC2;
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

int ImprimirC3C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC3;
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

int ImprimirC3C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC3;
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

int ImprimirC3C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC3;
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

int ImprimirC3C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC3;
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

int ImprimirC3C5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=ultimoC3;
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

int ImprimirC4C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC4;
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

int ImprimirC4C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC4;
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

int ImprimirC4C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC4;
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

int ImprimirC4C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC4;
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

int ImprimirC4C5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=ultimoC4;
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

int ImprimirC5C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC5;
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

int ImprimirC5C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC5;
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

int ImprimirC5C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC5;
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

int ImprimirC5C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC5;
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

int ImprimirC5C5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=ultimoC5;
	int i, colorin=1, posx=150, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENE LA CARA NO.5 SON:");
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

int ImprimirTC2C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC2C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC2C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC2C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->caraAtras;
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

int ImprimirTC2C5(int dim){
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

int ImprimirTC3C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC3C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC3C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC3C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
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

int ImprimirTC3C5(int dim){
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

int ImprimirTC4C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC4C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC4C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC4C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
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

int ImprimirTC4C5(int dim){
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

int ImprimirTC5C1(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC5C2(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC5C3(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
	actual=actual->caraAtras;
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

int ImprimirTC5C4(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->siguiente;
	actual=actual->caraAtras;
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

int ImprimirTC5C5(int dim){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	actual=actual->siguiente;
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

int ImpresionCaras(int dim){
	int Elec1;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"Menu de impresion de Caras");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	outtextxy(50,60,"Elija la cara que quiere trabajar:");
	outtextxy(50,100,"1.Cara No.1");
	outtextxy(50,140,"2.Cara No.2");
	outtextxy(50,180,"3.Cara No.3");
	outtextxy(50,220,"4.Cara No.4");
	outtextxy(50,260,"5.Cara No.5");
	outtextxy(50,300,"6.Cara Transversal No.1");
	outtextxy(50,340,"7.Cara Transversal No.2");
	outtextxy(50,380,"8.Cara Transversal No.3");
	outtextxy(50,420,"9.Cara Transversal No.4");
	outtextxy(50,460,"10.Cara Transversal No.5");
	delay(3000);
	closegraph();
	printf("Inserte su opcion:");
	scanf("%d",&Elec1);
	switch(Elec1){
		case 1:
			ImpresionCara(dim);
			break;
		case 2:
			ImpresionCaraC2(dim);
			break;
		case 3:
			ImpresionCaraC3(dim);
			break;
		case 4:
			ImpresionCaraC4(dim);
			break;
		case 5:
			ImpresionCaraC5(dim);
			break;
		case 6:
			ImpresionCaraT(dim);
			break;
		case 7:
			ImpresionCaraTC2(dim);
			break;
		case 8:
			ImpresionCaraTC3(dim);
			break;
		case 9:
			ImpresionCaraTC4(dim);
			break;
		case 10:
			ImpresionCaraTC5(dim);
			break;
		default:
			printf("Opcion Invalida");
			break;
	}
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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

int ImpresionCaraC2(int dim){
	
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC2;
	ultimoC2->siguiente=primeroC22;
	ultimoC22->siguiente=primeroC23;
	ultimoC23->siguiente=primeroC24;
	ultimoC24->siguiente=primeroC25;
	int i, colorin=1, posx=200, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN LA CARA NO.2 SON:");
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
			outtextxy(posx+termx+60,100,"UltimaC2");
			outtextxy(posx+termx+60,220,"UltimaC22");
			outtextxy(posx+termx+60,340,"UltimaC23");
			outtextxy(posx+termx+60,460,"UltimaC24");
			outtextxy(posx+termx+60,580,"UltimaC25");
			
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
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 ultimoC2->siguiente=NULL;
	 ultimoC22->siguiente=NULL;
	 ultimoC23->siguiente=NULL;
	 ultimoC24->siguiente=NULL;
	 ultimoC25->siguiente=NULL;
	 return 0; 
}

int ImpresionCaraC3(int dim){
	
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC3;
	ultimoC3->siguiente=primeroC32;
	ultimoC32->siguiente=primeroC33;
	ultimoC33->siguiente=primeroC34;
	ultimoC34->siguiente=primeroC35;
	int i, colorin=1, posx=200, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN LA CARA NO.3 SON:");
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
			outtextxy(posx+termx+60,100,"UltimaC3");
			outtextxy(posx+termx+60,220,"UltimaC32");
			outtextxy(posx+termx+60,340,"UltimaC33");
			outtextxy(posx+termx+60,460,"UltimaC34");
			outtextxy(posx+termx+60,580,"UltimaC35");
			
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
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 ultimoC3->siguiente=NULL;
	 ultimoC32->siguiente=NULL;
	 ultimoC33->siguiente=NULL;
	 ultimoC34->siguiente=NULL;
	 ultimoC35->siguiente=NULL;
	 return 0; 
}

int ImpresionCaraC4(int dim){
	
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC4;
	ultimoC4->siguiente=primeroC42;
	ultimoC42->siguiente=primeroC43;
	ultimoC43->siguiente=primeroC44;
	ultimoC44->siguiente=primeroC45;
	int i, colorin=1, posx=200, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN LA CARA NO.4 SON:");
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
			outtextxy(posx+termx+60,100,"UltimaC4");
			outtextxy(posx+termx+60,220,"UltimaC42");
			outtextxy(posx+termx+60,340,"UltimaC43");
			outtextxy(posx+termx+60,460,"UltimaC44");
			outtextxy(posx+termx+60,580,"UltimaC45");
			
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
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 ultimoC4->siguiente=NULL;
	 ultimoC42->siguiente=NULL;
	 ultimoC43->siguiente=NULL;
	 ultimoC44->siguiente=NULL;
	 ultimoC45->siguiente=NULL;
	 return 0; 
}

int ImpresionCaraC5(int dim){
	
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primeroC5;
	ultimoC5->siguiente=primeroC52;
	ultimoC52->siguiente=primeroC53;
	ultimoC53->siguiente=primeroC54;
	ultimoC54->siguiente=primeroC55;
	int i, colorin=1, posx=200, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(1900,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN LA CARA NO.5 SON:");
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(10,100,"Primer");
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
			outtextxy(posx+termx+60,100,"UltimaC5");
			outtextxy(posx+termx+60,220,"UltimaC52");
			outtextxy(posx+termx+60,340,"UltimaC53");
			outtextxy(posx+termx+60,460,"UltimaC54");
			outtextxy(posx+termx+60,580,"UltimaC55");
			
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
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	 ultimoC5->siguiente=NULL;
	 ultimoC52->siguiente=NULL;
	 ultimoC53->siguiente=NULL;
	 ultimoC54->siguiente=NULL;
	 ultimoC55->siguiente=NULL;
	 return 0; 
}

int ImpresionCaraT(int dim){
		
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero;
	primeroC5->caraAtras=primero2;
	primeroC52->caraAtras=primero3;
	primeroC53->caraAtras=primero4;
	primeroC54->caraAtras=primero5;
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
		actual=actual->caraAtras;
 	}
 	
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	setcolor(BLACK);
 	setfillstyle(SOLID_FILL,BLACK); 
 	setcolor(GREEN);
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	primeroC5->caraAtras=NULL;
	primeroC52->caraAtras=NULL;
	primeroC53->caraAtras=NULL;
	primeroC54->caraAtras=NULL;
	 return 0; 
}
		
int ImpresionCaraTC2(int dim){
nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero->siguiente;
	primeroC5->siguiente->caraAtras=primero2->siguiente;
	primeroC52->siguiente->caraAtras=primero3->siguiente;
	primeroC53->siguiente->caraAtras=primero4->siguiente;
	primeroC54->siguiente->caraAtras=primero5->siguiente;
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
		actual=actual->caraAtras;
 	}
 	
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	setcolor(BLACK);
 	setfillstyle(SOLID_FILL,BLACK); 
 	setcolor(GREEN);
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	primeroC5->siguiente->caraAtras=NULL;
	primeroC52->siguiente->caraAtras=NULL;
	primeroC53->siguiente->caraAtras=NULL;
	primeroC54->siguiente->caraAtras=NULL;
	 return 0; 
}
		
int ImpresionCaraTC3(int dim){
nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero->siguiente->siguiente;
	primeroC5->siguiente->siguiente->caraAtras=primero2->siguiente->siguiente;
	primeroC52->siguiente->siguiente->caraAtras=primero3->siguiente->siguiente;
	primeroC53->siguiente->siguiente->caraAtras=primero4->siguiente->siguiente;
	primeroC54->siguiente->siguiente->caraAtras=primero5->siguiente->siguiente;
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
		actual=actual->caraAtras;
 	}
 	
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	setcolor(BLACK);
 	setfillstyle(SOLID_FILL,BLACK); 
 	setcolor(GREEN);
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	primeroC5->siguiente->siguiente->caraAtras=NULL;
	primeroC52->siguiente->siguiente->caraAtras=NULL;
	primeroC53->siguiente->siguiente->caraAtras=NULL;
	primeroC54->siguiente->siguiente->caraAtras=NULL;
	 return 0; 
}

int ImpresionCaraTC4(int dim){
nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero->siguiente->siguiente->siguiente;
	primeroC5->siguiente->siguiente->siguiente->caraAtras=primero2->siguiente->siguiente->siguiente;
	primeroC52->siguiente->siguiente->siguiente->caraAtras=primero3->siguiente->siguiente->siguiente;
	primeroC53->siguiente->siguiente->siguiente->caraAtras=primero4->siguiente->siguiente->siguiente;
	primeroC54->siguiente->siguiente->siguiente->caraAtras=primero5->siguiente->siguiente->siguiente;
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
		actual=actual->caraAtras;
 	}
 	
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	setcolor(BLACK);
 	setfillstyle(SOLID_FILL,BLACK); 
 	setcolor(GREEN);
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	primeroC5->siguiente->siguiente->siguiente->caraAtras=NULL;
	primeroC52->siguiente->siguiente->siguiente->caraAtras=NULL;
	primeroC53->siguiente->siguiente->siguiente->caraAtras=NULL;
	primeroC54->siguiente->siguiente->siguiente->caraAtras=NULL;
	 return 0; 
}
			
int ImpresionCaraTC5(int dim){
nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual=primero->siguiente->siguiente->siguiente->siguiente;
	primeroC5->siguiente->siguiente->siguiente->siguiente->caraAtras=primero2->siguiente->siguiente->siguiente->siguiente;
	primeroC52->siguiente->siguiente->siguiente->siguiente->caraAtras=primero3->siguiente->siguiente->siguiente->siguiente;
	primeroC53->siguiente->siguiente->siguiente->siguiente->caraAtras=primero4->siguiente->siguiente->siguiente->siguiente;
	primeroC54->siguiente->siguiente->siguiente->siguiente->caraAtras=primero5->siguiente->siguiente->siguiente->siguiente;
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
		settextstyle(BOLD_FONT, HORIZ_DIR, 1);
		outtextxy(posx-3,posy+5,ptb);
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
		actual=actual->caraAtras;
 	}
 	
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	setcolor(BLACK);
 	setfillstyle(SOLID_FILL,BLACK); 
 	setcolor(GREEN);
 	outtextxy(35,posy,"Espere un momento, la ventana se cerrara sola...");
	 delay(7999);
	 closegraph();
	primeroC5->siguiente->siguiente->siguiente->siguiente->caraAtras=NULL;
	primeroC52->siguiente->siguiente->siguiente->siguiente->caraAtras=NULL;
	primeroC53->siguiente->siguiente->siguiente->siguiente->caraAtras=NULL;
	primeroC54->siguiente->siguiente->siguiente->siguiente->caraAtras=NULL;
	 return 0; 
}

void Cubo(){
	
	nodo* actuali = (nodo*)malloc(sizeof(nodo));
	actuali=primero;
	ultimo->siguiente=primero2;
	ultimo2->siguiente=primero3;
	ultimo3->siguiente=primero4;
	ultimo4->siguiente=primero5;
	ultimo5->siguiente=primeroC2;
	ultimoC2->siguiente=primeroC22;
	ultimoC22->siguiente=primeroC23;
	ultimoC23->siguiente=primeroC24;
	ultimoC24->siguiente=primeroC25;
	ultimoC25->siguiente=primeroC3;
	ultimoC3->siguiente=primeroC32;
	ultimoC32->siguiente=primeroC33;
	ultimoC33->siguiente=primeroC34;
	ultimoC34->siguiente=primeroC35;
	ultimoC35->siguiente=primeroC4;
	ultimoC4->siguiente=primeroC42;
	ultimoC42->siguiente=primeroC43;
	ultimoC43->siguiente=primeroC44;
	ultimoC44->siguiente=primeroC45;
	ultimoC45->siguiente=primeroC5;
	ultimoC5->siguiente=primeroC52;
	ultimoC52->siguiente=primeroC53;
	ultimoC53->siguiente=primeroC54;
	ultimoC54->siguiente=primeroC55;
	
	int caras=5,columnas=5,filas=5;
	char bufer[125];
	int gd= DETECT, gm, cont=1, cont1=1, cont2=1, puntx=45, punty=10, Term, term, term1, Term1;
   	term=columnas*25;
   	Term=filas*35;
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
	for(int i=0;actuali!=NULL&&i<125;actuali->siguiente,i++) {            	
		sprintf(bufer, "%d",actuali->dato);
		actuali=actuali->siguiente;
		outtextxy(puntx,punty,bufer);    
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
	delay(4000);
	closegraph();
	ultimo->siguiente=NULL;
	ultimo2->siguiente=NULL;
	ultimo3->siguiente=NULL;
	ultimo4->siguiente=NULL;
	ultimo5->siguiente=NULL;
	ultimoC2->siguiente=NULL;
	ultimoC22->siguiente=NULL;
	ultimoC23->siguiente=NULL;
	ultimoC24->siguiente=NULL;
	ultimoC25->siguiente=NULL;
	ultimoC3->siguiente=NULL;
	ultimoC32->siguiente=NULL;
	ultimoC33->siguiente=NULL;
	ultimoC34->siguiente=NULL;
	ultimoC35->siguiente=NULL;
	ultimoC4->siguiente=NULL;
	ultimoC42->siguiente=NULL;
	ultimoC43->siguiente=NULL;
	ultimoC44->siguiente=NULL;
	ultimoC45->siguiente=NULL;
	ultimoC5->siguiente=NULL;
	ultimoC52->siguiente=NULL;
	ultimoC53->siguiente=NULL;
	ultimoC54->siguiente=NULL;
	ultimoC55->siguiente=NULL;

}

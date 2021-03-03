#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <graphics.h>
#include <time.h>
#include <dos.h>

struct modulo{
	int dato;
	struct modulo *seguimiento;
};

void RegIn(struct modulo **, int);
void RegOut(struct modulo *, int);
void RegMed(struct modulo *,int, int);
int Impresion(struct modulo *, int);
void Dimensionamiento(int*);
void Menu();
void Menu1();
void Menu2();
struct modulo *nuevomodulo(void);

int main (){
	struct modulo *list;
	int posicion=1,rer=0, con, con2, num, pos, dim, cone, ol;
	if((list=nuevomodulo())==NULL){
		printf("No hay memoria suficiente...");
		system("pause");
		exit(1);
	}
	Dimensionamiento(&dim);
	printf("\nElija la insercion de datos, por favor:\n");
	printf("\n1.Numeros consecutivos del 1 a %d\n",dim);
	printf("2.Numeros al azar\n");
	printf("3.Insercion Manual (Recomendable si desea tener una base propia)\n");
	printf("\t\t\nElija sabiamente:");
	scanf("%d",&cone);
	do{
		if (cone==1){
			list->dato=1;
			while(rer<dim-1){
				posicion=posicion+1;
				RegOut(list,posicion);
				rer++;
				cone=4;
			}
		}
		else if(cone==2){
			srand (time(NULL));
			while(rer<dim-1){
				posicion=rand()%50;
				RegOut(list,posicion);
				rer++;
				cone=4;
			}
		}
		else if(cone==3){
			system("cls");
			printf("\n Inserte uno por uno y en orden los datos a introducir:\n");
			while(rer<dim-1){
				printf("\nIntroduzca el numero correspondiente a %d:",rer+1);
				scanf("%d",&posicion);
				RegOut(list,posicion);
				rer++;
				cone=4;
			}
		}
		else
			printf("\nNo eligio bien, seleccione una opcion valida...");
			cone=4;
	}while(cone<4&&cone>0);
	system("cls");
	do{
		fflush(stdin);
		Menu1();
		scanf("%d",&con);
		switch(con){
			case 1:
				con2=1;
				printf("\n\nIntroduzca el numero a ingresar:");
				scanf("%d",&num);
				do{
					Menu2();
					scanf("%d",&con2);
					system("cls");
					switch(con2){
						case 1:
							RegIn(&list,num);
							printf("\n\nYa esta listo...");
							dim++;
							con2=4;
							break;
						case 2:
							printf("\n\t\t\t¿Exactamente en que parte la desea?\n");
							printf("\Debe de estar entre 1 y %d",dim);
							printf("\n\n\tElige tu opcion:");
							scanf("%d",&pos);
							if (pos<dim&&pos>1){
							pos=pos-1;
							RegMed(list,num,pos);
							printf("\n\nYa esta listo...");
							dim++;
							con2=4;
							break;
							}
							else{
								printf("\nLo sentimos no eligio una opcion valida, vuelva a intentarlo...");	
								break;
							}
							
						case 3:
							RegOut(list,num);
							dim++;
							con2=4;
							printf("\n\nYa esta listo...");
							break;
						case 4:
							break;
						default:
							printf("Error de opcion, intentelo de nuevo");
							break;
					}
				}while(con2!=4);
			case 2:
				if(list!=NULL){
					Impresion(list,dim);
				}
				else{
					printf("\nNo existe ningun modulo disponible");
					system("pause");
				}
				break;
			case 3:
				break;
			default:
				printf("\nError en la opcion elegida, intentelo de nuevo");
				system("pause");
		}
		system("cls");
	}while (con!=3);
	free(list);
	return 0;
}
void Menu1(){
	printf("\n\t\t\tMenu\n");
	printf("\n1.Altas");
	printf("\n2.Ver el Modulo");
	printf("\n3.Salir del programa");
	printf("\n\n\tElige tu opcion:");
}
void Menu2(){
	printf("\n\t\t\t¿Donde desea que se ingrese su dato?\n");
	printf("\n1.Principio del arreglo");
	printf("\n2.Enmedio del arreglo");
	printf("\n3.Al final del arreglo");
	printf("\n\n\tElige tu opcion:");
}

void RegIn(struct modulo **list, int num){
	struct modulo *aux;
	aux=nuevomodulo();
	if (aux!=NULL){
		aux->dato=num;
		aux->seguimiento=*list;
		*list=aux;
	}
	else
		printf("No hay suficiente memoria, lo sentimos");
}

void RegOut(struct modulo *list, int num){
	struct modulo *aux1, *aux;
	aux=nuevomodulo();
	aux->dato=num;
	if(aux!=NULL){
		for(aux1=list;aux1->seguimiento!=NULL;aux1=aux1->seguimiento);
			aux1->seguimiento=aux;
	}
	else
		printf("No hay suficiente memoria, lo sentimos");
}

void RegMed(struct modulo *list, int num, int med){
	struct modulo *aux1, *aux, *aux2;
	int numero;
	aux=nuevomodulo();
	aux1=list;
	aux->dato=num;
	if(aux!=NULL){
		for(numero=1;numero<med;numero++)
			aux1=aux1->seguimiento;
		aux2=aux1->seguimiento;
		aux->seguimiento=aux2;
		aux1->seguimiento=aux;	
	}
	else
		printf("No hay suficiente memoria, lo sentimos");
}

struct modulo *nuevomodulo(void){
	struct modulo *aux;
	aux=(struct modulo*)malloc(sizeof(struct modulo));
	aux->seguimiento=NULL;
	return(aux);
}

void Dimensionamiento(int*dim){
 	printf("\t\t\t\t\t\tMENU DE DIMENSIONAMIENTO\n");
 	printf("Este programa le va a permitir manejar los datos de un conjunto, estos se generan a su eleccion y podra introducir nuevos, primero elija el tamaño de su conjunto (No podra cambiarlo, mas que los que vaya dando de alta)\n\n");
 	printf("NOTA:Se a conseja NO INTRODUCIR MAS DE 260 NUMEROS, al imprimir se  experimentaran fallas de visualizacion PERO NO en el manejo de datos...\n\n");
	printf("Ingrese el tamaño del conjunto que va a manejar:");
 	scanf("%i",dim);
 	system("cls");
 }
 
  int Impresion(struct modulo *list,int dim){
	int i, colorin=1, posx=150, posy=100, cont=1, cont2=1, termx=36, termy=30, tam=3;
	char bufer[dim],bufer2[dim], *ptb, *ptbb;
	ptb=bufer;
	ptbb=bufer2;
	initwindow(3000,1080,"Estructura",0,0,false,true);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(10,10,"LOS DATOS QUE SE CONTIENEN EN EL CONCENTRADO SON:");
	setcolor(RED);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(10,100,"Inicio");
	setlinestyle(3, 3, 2);
	line(90,115,140,115);
	line(140,115,125,105);
	line(140,115,125,125);
	setcolor(1);
	rectangle(posx-2,posy-1,posx+termx,posy+termy);
	for(;list!=NULL;i++,ptb++,ptbb++){
		sprintf(ptb,"%d",list->dato);
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
			line(posx+termx+60,posy+15,posx+termx+151,posy+15);
			line(posx+termx+80,posy+30,posx+termx+131,posy+30);
			line(posx+termx+100,posy+45,posx+termx+110,posy+45);
			setcolor(colorin);
		}
		else{
			setlinestyle(3, 3, 2);
			setcolor(RED);
			line(posx+termx,posy+15,posx+termx+40,posy+15);
			line(posx+termx+40,posy+15,posx+termx+35,posy+5);
			line(posx+termx+40,posy+15,posx+termx+35,posy+25);
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
		list=list->seguimiento;
 	}
 	setcolor(GREEN);
 	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
 	outtextxy(35,posy+60,"Espere un momento, la ventana se cerrara sola...");
	 delay(9999);
	 closegraph();
	 return 0; 
 }
 






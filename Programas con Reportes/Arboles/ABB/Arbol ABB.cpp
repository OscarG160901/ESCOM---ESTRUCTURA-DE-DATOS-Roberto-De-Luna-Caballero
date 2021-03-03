#include <stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<windows.h>
#include <time.h>
struct Nodo {
    int dato;
    struct Nodo *atras;
    struct Nodo *izquierda;
    struct Nodo *derecha;
};


struct Nodo *nuevoNodo(int dato ,struct Nodo* llegada) {
    // Solicitar memoria
    size_t tamanioNodo = sizeof(struct Nodo);
    struct Nodo* nuevo = (struct Nodo*) malloc(tamanioNodo);
    // Asignar el dato e iniciar hojas (Subarboles mas adelante)
    nuevo->dato = dato;
    nuevo->izquierda = NULL;
    nuevo->derecha =NULL;
    nuevo->atras=llegada;
    return nuevo;
}

void insertar(struct Nodo *nodo, int dato, struct Nodo *Raiz, int, int);
void preorden(struct Nodo *nodo);
void rotacionIzq(struct Nodo *nodo);
void rotacionDer(struct Nodo *nodo);

int main(void) {
	int num=0, posicion=0, dat=0, sel=0,opc;
	char ptb[5];
	//int arregloprog[30]={477,1432,238,715,1194,1670,119,357,596,834,1074,1313,1551,1789,59,178,297,416,536,655,774,893,1014,1133,1253,1372,1491,1610,1729,1848};
	int arregloprog[30]={98,33,67,55,14,27,72,46,9,47,11,39,20,4,6,58,91,17,51,89,32,74,93,65,27,32,16,95,37,42};
	printf("\t\t\t\tMENU INICIAL\n");
	system("cls");
	printf("Elija la opcion mas conveniente en su caso:\n\n");
	printf("\t\t\t1.Generacion aleatoria de nodos del 1 al 50\n");
	printf("\t\t\t2.Quiero introducir uno a uno mis datos, para vizualizar como se van creando\n");
	printf("\t\t\t3.Quiero solo probar el programa con un conjunto a eleccion del programador\n");
	scanf("%d",&opc);
	system("cls");
    
	switch (opc){
		case 1:{
			num=25, dat=0;
			printf("Seleccione el numero de nodos que desea introducir al azar:");
			scanf("%d",&sel);
			struct Nodo *raiz = nuevoNodo(num,NULL);
   			initwindow(1910,1000);
   			setlinestyle(3, 3, 3);
			setcolor(2);
			settextstyle(BOLD_FONT, HORIZ_DIR, 5);
			outtextxy(750,10,"Arboles ABB");
			setfillstyle(SOLID_FILL,BLUE); 
			setcolor(BLUE);
			circle(955,150,50);
			floodfill(955,150,BLUE);
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			setcolor(GREEN);
			sprintf(ptb,"%d",raiz->dato);
			outtextxy(935,130,ptb);
			setcolor(RED);
			outtextxy(820,130,"Raiz");
			srand (time(NULL));
		    while (dat<sel){
		    	posicion=rand()%50;
		    	insertar (raiz, posicion, raiz,0,0);
		    	dat++;
			}
			printf("\nImprimiendo preorden\n");
			preorden(raiz);
    		delay(9999);
    		closegraph();
			break;
		}
		case 2:{
			printf("Ahh elegido un camino que visualmente tendra su recompenza\n");
			printf("Elija la raiz de la cual va a partir para la creacion de su arbol:");
			scanf("%d",&num);
			printf("Seleccione el numero de nodos que desea introducir personalmente:");
			scanf("%d",&sel);
			system("cls");
			struct Nodo *raiz = nuevoNodo(num,NULL);
   			initwindow(1910,1000);
   			setlinestyle(3, 3, 3);
			setcolor(2);
			settextstyle(BOLD_FONT, HORIZ_DIR, 5);
			outtextxy(750,10,"Arboles ABB");
			setfillstyle(SOLID_FILL,BLUE); 
			setcolor(BLUE);
			circle(955,150,50);
			floodfill(955,150,BLUE);
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			setcolor(GREEN);
			sprintf(ptb,"%d",raiz->dato);
			outtextxy(935,130,ptb);
			setcolor(RED);
			outtextxy(820,130,"Raiz");
			srand (time(NULL));
		    while (dat<sel){
		    	printf("Ingrese su dato:\n");
		    	scanf("%d",&posicion);
		    	insertar (raiz, posicion, raiz,0,0);
		    	dat++;
			}
			printf("\nImprimiendo preorden\n");
			preorden(raiz);
    		delay(9999);
    		closegraph();
			break;
		}
		case 3:{
			int i=0;
			printf("Okey, gracias por confiar en mi, le mostrare un Arbol equilibrado...");
			printf("La raiz de la cual va a partir este arbol es 55:");
			num=50;
			sel=30;
			system("cls");
			struct Nodo *raiz = nuevoNodo(num,NULL);
   			initwindow(1910,1000);
   			setlinestyle(3, 3, 3);
			setcolor(2);
			settextstyle(BOLD_FONT, HORIZ_DIR, 5);
			outtextxy(750,10,"Arboles ABB");
			setfillstyle(SOLID_FILL,BLUE); 
			setcolor(BLUE);
			circle(955,150,50);
			floodfill(955,150,BLUE);
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			setcolor(GREEN);
			sprintf(ptb,"%d",raiz->dato);
			outtextxy(935,130,ptb);
			setcolor(RED);
			outtextxy(820,130,"Raiz");
			srand (time(NULL));
		    while (arregloprog[i]<arregloprog[sel]){
		    	posicion=arregloprog[i];
		    	insertar (raiz, posicion, raiz,0,0);
		    	delay(1000);
		    	i++;
			}
			printf("\nImprimiendo preorden\n");
			preorden(raiz);
    		delay(9999);
    		closegraph();
			break;
		}
		default:{
			printf("No eligio algo correcto, lo siento, me desarmo");
			break;
		}
		
				
	}
}
void insertar(struct Nodo *nodo, int dato, struct Nodo *Raiz,int levelderecha,int levelizquierda) {
	char ptb[5];
	int leveli, leveld;
    // ¿Izquierda o derecha?
    // Si es mayor va a la derecha
    if (dato > nodo->dato) { 
        // Tienes espacio a la derecha?
        if (nodo->derecha == NULL) {
            nodo->derecha = nuevoNodo(dato, nodo);
            //Inicio de modo grafico
            if(levelizquierda==0&&levelderecha==0){
            	
            			setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1005,150,1432,250);
						circle(1432,300,50);
						floodfill(1432,300,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->derecha->dato);
						outtextxy(1412,280,ptb);
						leveli=1;
							
			}
			else if(levelizquierda==0&&levelderecha==1){
            	
            			setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1482,300,1670,400);
						circle(1670,450,50);
						floodfill(1670,450,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->derecha->dato);
						outtextxy(1650,420,ptb);
						leveli=2;	
			}
			else if(levelizquierda==0&&levelderecha==2){
            	
            			setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1789,550,1720,450);
						circle(1789,600,50);
						floodfill(1789,600,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->derecha->dato);
						outtextxy(1769,580,ptb);
						leveli=3;	
			}
			else if(levelizquierda==0&&levelderecha==3){
            	
            			setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1848,700,1839,600);
						circle(1848,750,50);
						floodfill(1848,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->derecha->dato);
						outtextxy(1828,720,ptb);
						leveli=4;	
			}
			else if(levelizquierda==1&&levelderecha==2&&nodo->dato>Raiz->derecha->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(1610,700,1601,600);
							circle(1610,750,50);
							floodfill(1610,750,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(1590,720,ptb);
							leveli=4;	
			}
			else if(levelizquierda==1&&levelderecha==1&&nodo->dato<Raiz->derecha->dato&&nodo->dato>Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(1313,550,1244,450);
							circle(1313,600,50);
							floodfill(1313,600,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(1293,580,ptb);
							leveli=3;	
			}
			else if(levelizquierda==1&&levelderecha==1&&nodo->dato<Raiz->derecha->dato&&nodo->dato>Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(1313,550,1244,450);
							circle(1313,600,50);
							floodfill(1313,600,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(1293,580,ptb);
							leveli=3;	
			}	
			else if(levelizquierda==1&&levelderecha==2&&nodo->dato<Raiz->derecha->dato&&nodo->dato>Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(1372,700,1363,600);
							circle(1372,750,50);
							floodfill(1372,750,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(1352,730,ptb);
							leveli=4;	
			}
			else if(levelizquierda==2&&levelderecha==1&&nodo->dato<Raiz->derecha->dato&&nodo->dato>Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(1133,700,1124,600);
							circle(1133,750,50);
							floodfill(1133,750,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(1113,730,ptb);
							leveli=4;	
			}
			
			else if(levelizquierda==1&&levelderecha==0&&nodo->dato==Raiz->izquierda->dato&&nodo->dato<Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(715,400,527,300);
							circle(715,450,50);
							floodfill(715,450,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(695,420,ptb);	
							leveli=2;
			}
			else if(levelizquierda==1&&levelderecha==1&&nodo->dato==Raiz->izquierda->derecha->dato&&nodo->dato<Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(834,550,765,450);
							circle(834,600,50);
							floodfill(834,600,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(814,580,ptb);	
							leveli=3;
			}
			else if(levelizquierda==2&&levelderecha==0&&nodo->dato==Raiz->izquierda->izquierda->dato&&nodo->dato<Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(357,550,288,450);
							circle(357,600,50);
							floodfill(357,600,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(327,580,ptb);	
							leveli=3;
			}
			else if(levelizquierda==2&&levelderecha==0&&nodo->dato==Raiz->izquierda->izquierda->dato&&nodo->dato<Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(357,550,288,450);
							circle(357,600,50);
							floodfill(357,600,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(327,580,ptb);	
							leveli=3;
			}
			else if(levelizquierda==3&&levelderecha==0&&nodo->dato<Raiz->izquierda->izquierda->dato&&nodo->dato<Raiz->izquierda->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(178,700,169,600);
							circle(178,750,50);
							floodfill(178,750,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(158,720,ptb);	
							leveli=4;
			}
			else if(levelizquierda==2&&levelderecha==1&&nodo->atras->dato==Raiz->izquierda->izquierda->dato&&nodo->dato<Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(416,700,407,600);
							circle(416,750,50);
							floodfill(416,750,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(396,720,ptb);
							leveli=4;	
			}
			else if(levelizquierda==2&&levelderecha==1&&nodo->atras->dato==Raiz->izquierda->derecha->dato&&nodo->dato<Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(655,700,646,600);
							circle(655,750,50);
							floodfill(655,750,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(625,720,ptb);	
							leveli=4;
			}
			else if(levelizquierda==1&&levelderecha==2&&nodo->atras->dato==Raiz->izquierda->derecha->dato&&nodo->dato<Raiz->dato){
	            	
	            			setfillstyle(SOLID_FILL,BLUE); 
							setcolor(BLUE);
							line(893,700,884,600);
							circle(893,750,50);
							floodfill(893,750,BLUE);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",nodo->derecha->dato);
							outtextxy(873,720,ptb);	
							leveli=4;
			}
            //Termino del modo gráfico
            //Reinicio de contadores
        }else {
            // Si la derecha ya está ocupada, recursividad ;)
            //Indicamos que hemos de subir un nivel a la derecha;
            insertar(nodo->derecha, dato, Raiz,levelderecha+1, levelizquierda); 
        }
     }else {
        // Si no, a la inzquierda
        if (nodo->izquierda == NULL) {
           nodo->izquierda = nuevoNodo(dato,nodo);
            //Inicio del modo gráfico
            if(levelizquierda==0&&levelderecha==0){
            			setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(905,150,477,250);
						circle(477,300,50);
						floodfill(477,300,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(457,300,ptb);	
						leveld=1;
			}
			else if (levelizquierda==1&&levelderecha==0){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(427,300,238,400);
						circle(238,450,50);
						floodfill(238,450,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(218,450,ptb);	
						leveld=2;
			}
			else if (levelizquierda==2&&levelderecha==0){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(188,450,119,550);
						circle(119,600,50);
						floodfill(119,600,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(99,580,ptb);	
						leveld=3;
			}
			else if (levelizquierda==3&&levelderecha==0){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(69,600,59,700);
						circle(59,750,50);
						floodfill(59,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(39,720,ptb);	
						leveld=4;
			}
			else if (levelizquierda==1&&levelderecha==1&&nodo->atras->dato<Raiz->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(665,450,596,550);
						circle(596,600,50);
						floodfill(596,600,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(576,600,ptb);	
						leveld=3;
			}
			
			else if (levelizquierda==2&&levelderecha==1&&nodo->atras->dato<Raiz->izquierda->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(307,600,297,700);
						circle(297,750,50);
						floodfill(297,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(277,730,ptb);
						leveld=4;	
			}
			else if (levelizquierda==2&&levelderecha==1&&nodo->atras->dato>Raiz->izquierda->dato&&nodo->atras->dato<Raiz->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(546,600,536,700);
						circle(536,750,50);
						floodfill(536,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(516,730,ptb);	
						leveld=4;
			}
			else if (levelizquierda==1&&levelderecha==2&&nodo->atras->dato>Raiz->izquierda->dato&&nodo->atras->dato<Raiz->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(784,600,774,700);
						circle(774,750,50);
						floodfill(774,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(754,730,ptb);
						leveld=4;	
			}
			else if (levelizquierda==0&&levelderecha==1&&nodo->izquierda->dato<Raiz->derecha->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1382,300,1194,400);
						circle(1194,450,50);
						floodfill(1194,450,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(1174,420,ptb);	
						leveld=2;
			}
			
			else if (levelizquierda==1&&levelderecha==1&&nodo->atras->dato>Raiz->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1144,450,1074,550);
						circle(1074,600,50);
						floodfill(1074,600,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(1054,580,ptb);
						leveld=3;	
			}
			else if (levelizquierda==2&&levelderecha==1&&nodo->atras->dato>Raiz->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1024,600,1014,700);
						circle(1014,750,50);
						floodfill(1014,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(994,730,ptb);	
						leveld=4;
			}
			else if (levelizquierda==1&&levelderecha==2&&nodo->atras->dato>Raiz->dato&&Raiz->derecha->dato>nodo->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1263,600,1253,700);
						circle(1253,750,50);
						floodfill(1253,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(1223,730,ptb);	
						leveld=4;
			}
			
			else if (levelizquierda==0&&levelderecha==2&&nodo->atras->dato>Raiz->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1620,450,1551,550);
						circle(1551,600,50);
						floodfill(1551,600,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(1531,580,ptb);
						leveld=3;	
			}
			else if (levelizquierda==1&&levelderecha==2&&Raiz->derecha->dato<nodo->dato){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1501,600,1491,700);
						circle(1491,750,50);
						floodfill(1491,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(1471,730,ptb);
						leveld=4;	
			}
			else if (levelizquierda==0&&levelderecha==3){
						setfillstyle(SOLID_FILL,BLUE); 
						setcolor(BLUE);
						line(1739,600,1729,700);
						circle(1729,750,50);
						floodfill(1729,750,BLUE);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",nodo->izquierda->dato);
						outtextxy(1709,730,ptb);
						leveld=4;	
			}
        }
			
		
            //Termino del modo gráfico
            //Reinicio de contadores
        else {
            // Si la izquierda ya está ocupada, recursividad ;)
            //Indicamos que hemos de subir un nivel a la izquierda
            insertar(nodo->izquierda, dato, Raiz,levelderecha, levelizquierda+1);
        }
      
    }
}
void rotacionIzq(struct Nodo *nodo){
}
void rotacionDer(struct Nodo *nodo){
}

void preorden(struct Nodo *nodo) {
    if (nodo != NULL) {
        printf("%d,", nodo->dato);
        preorden(nodo->izquierda);
        preorden(nodo->derecha);
    }
}

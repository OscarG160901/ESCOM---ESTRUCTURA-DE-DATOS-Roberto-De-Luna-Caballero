#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>
typedef struct avlnode
{
    int clave;
    int bal; /* Factor de balance -1,0,1 */
    struct avlnode *left, *right;
} nodo, *pnodo;

# define max(A,B) ((A)>(B)?(A):(B)) /* Definición de macros */
# define min(A,B) ((A)>(B)?(B):(A))


int flag; /* Marca para registrar cambios de altura. En rebalance ascendente */
//flag = 1 indica que debe seguir el ascenso rebalanceando.
int key; /* Variable global, para disminuir argumentos */
int alto_avl = 0; /* Altura árbol avl. Número de nodos desde la raíz a las hojas.*/

static pnodo lrot(pnodo t);

static pnodo rrot(pnodo t);

static void Error(int tipo);

int Altura(void);

pnodo CreaNodo(int key);

pnodo insertR(pnodo t);

pnodo InsertarAVL(int clave, pnodo t);

pnodo deleteR(pnodo t);

pnodo DescartarAVL(int clave, pnodo t);

pnodo deltreeR(pnodo t);

pnodo deltree(pnodo t);

void inorder(pnodo t, int profundidad, int levelizquierda, int levelderecha, pnodo Raiz);

int main()
{
	int num=0, posicion=0, dat=0, sel=0,opc;
	//int contenido[31]={955,477,1432,238,715,1194,1670,119,357,596,834,1074,1313,1551,1789,59,178,297,416,536,655,774,893,1014,1133,1253,1372,1491,1610,1729,1848};
	int contenido[30]={98,33,67,55,14,27,72,46,9,47,11,39,20,4,6,58,91,17,51,89,32,74,93,65,27,32,16,95,37,42};
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
			dat=0;
			printf("Seleccione el numero de nodos que desea introducir al azar:");
			scanf("%d",&sel);
			initwindow(1910,1000);
			pnodo t=NULL;
			srand (time(NULL));
		    while (dat<sel){
		    	posicion=rand()%50;
		    	t=InsertarAVL(posicion, t);
    			inorder(t, 0,0,0,t);
    			printf("******\n");
    			delay(2000);
    			cleardevice();
		    	dat++;
			}
    		delay(9999);
    		closegraph();
			break;
		}
		case 2:{
			printf("Ahh elegido un camino que visualmente tendra su recompenza\n");
			printf("Seleccione el numero de nodos que desea introducir personalmente:");
			scanf("%d",&sel);
			system("cls");
			initwindow(1910,1000);
			pnodo t=NULL;
		    while (dat<sel){
		    	printf("Ingrese su dato:\n");
		    	scanf("%d",&posicion);
		    	t=InsertarAVL(posicion, t);
    			inorder(t, 0,0,0,t);
    			printf("******\n");
    			delay(3000);
    			cleardevice();
		    	dat++;
			}
			delay(9999);
    		closegraph();
			break;
		}
		case 3:{
			int i=0;
			printf("Okey, gracias por confiar en mi, le mostrare un Arbol equilibrado...");
			printf("La raiz de la cual va a partir este arbol es 55:");
			sel=31;
			system("cls");
			pnodo t=NULL;
    		initwindow(1910,1000);		
			for (int i=0;i<31;i++){
				t=InsertarAVL(contenido[i], t);
    			inorder(t, 0,0,0,t);
    			printf("******\n");
    			delay(666);
    			cleardevice();
			}  		
			delay (1000);
    		closegraph();
			break;
		}
		default:{
			printf("No eligio algo correcto, lo siento, me desarmo");
			break;
		}
	}
}

/* Rotación Izquierda *
*  A           B
* / \         / \
* a  B ==>   A   c
*   / \     / \
*   b  c    a  b
* Sólo cambian los factores de balance de los nodos A y B
* Los factores de balance de los sub-árboles no cambian. */
static pnodo lrot(pnodo t)
{
    pnodo temp;
    int x,y;
    temp = t;
    t = t->right;
    temp->right = t->left;
    t->left = temp;
    //Recalcula factores de balance de los dos nodos
    x = temp->bal; // oldbal(A)
    y = t->bal; // oldbal(B)
    temp->bal = x-1-max(y, 0); // nA
    t->bal = min(x-2+min(y, 0), y-1); // nB
    return t;
}

/* Rotación derecha
*
*   A         B
*  / \       / \
*  B  c ==> a   A
* / \          / \
* a  b        b   c
*
*/
static pnodo rrot(pnodo t)
{
    pnodo temp = t;
    int x,y;
    t = t->left;
    temp->left = t->right;
    t->right = temp;
    x = temp->bal; // oldbal(A)
    y = t->bal;    // oldbal(B)
    temp->bal = x+1-min(y, 0);  // nA
    t->bal = max(x+2+max(y, 0), y+1); //nB
    return t;
}

static void Error(int tipo)
{
    if (tipo) printf("\nError en inserción\n");
    else printf("\nError en descarte\n");
}

int Altura(void)
{
    return alto_avl;
}

pnodo CreaNodo(int key)
{
    pnodo t;
    t = (pnodo) malloc(sizeof(nodo));
    t->clave=key;
    t->left=0;
    t->right=0;
    return t;
}

pnodo insertR(pnodo t)
{
    if (t == NULL)  /* Llegó a un punto de inserción */
    {
        t = CreaNodo(key);
        t->bal = 0; /* Los dos hijos son nulos */
        flag = 1; /* Marca necesidad de revisar balances */
        return t; /* retorna puntero al insertado */
    }
    else if (t->clave < key)
    {
        //desciende por la derecha
        t->right = insertR(t->right);
        //se pasa por la siguiente línea en la revisión ascendente
        t->bal += flag; /* Incrementa factor de balance */
    }
    else if (t->clave > key)
    {
        //desciende por la izquierda
        t->left = insertR(t->left);
        //se corrige en el ascenso
        t->bal -= flag; /* Decrementa balance */
    }
    else   /* (t->k == key) Ya estaba en el árbol */
    {
        Error(1);
        flag = 0;
    }

    if (flag == 0) /* No hay que rebalancear. Sigue el ascenso */
        return t;

    /*El código a continuación es el costo adicional para mantener propiedad AVL */
    /* Mantiene árbol balanceado avl. Sólo una o dos rotaciones por inserción */
    if (t->bal < -1)
    {
        /* Quedó desbalanceado por la izquierda. Espejos Casos c y d.*/
        if (t->left->bal > 0)
            /* Si hijo izquierdo está cargado a la derecha */
            t->left = lrot(t->left);
        t = rrot(t);
        flag = 0; /* El subárbol no aumenta su altura */
    }
    else if (t->bal > 1)
    {
        /* Si quedó desbalanceado por la derecha: Casos c y d.*/
        if (t->right->bal < 0)
            /* Si hijo derecho está cargado a la izquierda Caso d.*/
            t->right = rrot(t->right);
        t = lrot(t); /* Caso c.*/
        flag = 0; /* El subárbol no aumenta su altura */
    }
    else if (t->bal == 0)/* La inserción lo balanceo */
        flag = 0; /* El subárbol no aumenta su altura. Caso a*/
    else /* Quedó desbalanceado con -1 ó +1 Caso b */
        flag = 1; /* Propaga ascendentemente la necesidad de rebalancear */
    return t;
}

/* Mantiene variable global con el alto del árbol. */
pnodo InsertarAVL(int clave, pnodo t)
{
    key = clave; //pasa argumento a global.
    t = insertR(t);
    if (flag == 1)
        alto_avl++;
    //si la propagación llega hasta la raíz, aumenta la altura.
    return t;
}


pnodo deleteR(pnodo t)
{
    pnodo p;
    if (t == NULL)  /* No encontró nodo a descartar */
    {
        Error(0);
        flag = 0;
    }
    else if (t->clave < key)
    {
        //Comienza el descenso por la derecha
        t->right = deleteR(t->right);
        //aquí se llega en el retorno ascendente.
        t->bal -= flag; /* Se descartó por la derecha. Disminuye factor */
        //Se retorna después de la revisión de los factores
    }
    else if (t->clave > key)
    {
        //Desciende por la izquierda
        t->left = deleteR(t->left);
        //o se llega por esta vía si se descartó por la izquierda.
        t->bal += flag; /* se descartó por la izq. Aumenta factor de balance */
    }
    else   /* (t->clave == key) */
    {
        /* Encontró el nodo a descartar */
        if (t->left == NULL)   /*Si hay hijo derecho debe ser hoja, por ser AVL */
        {
            p = t;
            t = t->right;
            free(p);
            flag = 1; /* Debe seguir revisando factores de balance */
            return t; /* ascendentemente */
        }
        else if (t->right == NULL)   /*Si hay hijo izquierdo debe ser hoja */
        {
            p = t;
            t = t->left;
            free(p);
            flag = 1; /* Asciende revisando factores de balance */
            return t; /* Corrigiendo */
        }
        else   /* Tiene dos hijos */
        {
            if (t->bal<0)
            {
                /* Si cargado a la izquierda, elimina mayor descendiente hijo izq */
                p = t->left;
                while (p->right != NULL) p = p->right;
                t->clave = p->clave;
                key = p->clave; //busca hoja a eliminar
                t->left = deleteR(t->left);
                t->bal += flag; /* incrementa factor de balance */
            }
            else   /* Si cargado a la derecha, elimina menor descendiente hijo der */
            {
                p = t->right;
                while (p->left != NULL)
                    p = p->left;
                t->clave = p->clave;
                key = p->clave;
                t->right = deleteR(t->right);
                t->bal -= flag; /* decrementa balance */
            }
        }
    }

    /* Mantiene árbol balanceado avl. Sólo una o dos rotaciones por descarte */
    if (flag == 0 ) /* No hay que rebalancear. Sigue el ascenso, sin rebalancear */
        return t;

    /* Hay que revisar factores de balance en el ascenso*/
    if (t->bal < -1)  /* Si quedó desbalanceado por la izquierda y dejó de ser AVL */
    {
        if (t->left->bal > 0)  /*espejos casos c, d y e */
        {
            /* Si el hijo izquierdo está cargado a la derecha */
            t->left = lrot(t->left);
            flag = 1; /*Continuar revisando factores */
        }
        else if (t->left->bal == 0)
            flag = 0; /*No debe seguir el rebalance */
        else
            flag = 1;/* Debe seguir revisando factores de balance */
        t = rrot(t);
    }
    else if (t->bal > 1)  /* Si quedó desbalaceado por la derecha */
    {
        if (t->right->bal < 0)
        {
            /* Si hijo derecho está cargado a la izquierda */
            t->right = rrot(t->right);
            flag = 1; //debe seguir revisando. Caso d.
        }
        else if (t->right->bal == 0)
            flag = 0; /* No debe seguir el rebalance. Caso c. */
        else //positivo
            flag = 1;/* Debe seguir revisando factores de balance. Caso e. */
        t = lrot(t);
    }
    else if (t->bal == 0) /* Si estaba en +1 ó -1 y queda en cero */
        flag = 1; /* Debe seguir corrigiendo. Caso b.*/
    else /* Si estaba en cero y queda en -1 ó +1 */
        flag = 0; /* No debe seguir rebalanceando. Caso a.*/
    return t;
}

pnodo DescartarAVL(int clave, pnodo t)
{
    key = clave;
    t = deleteR(t);
    if (flag == 1) alto_avl--;
    return t;
}

pnodo deltreeR(pnodo t)
{
    if (t != NULL)
    {
        t->left = deltreeR(t->left);
        t->right = deltreeR(t->right);
        free(t); //borra la raíz subárbol
    }
    return NULL;
}


pnodo deltree(pnodo t)
{
    alto_avl = 0;
    return deltreeR(t);
}


void inorder(pnodo t, int profundidad, int levelizquierda, int levelderecha, pnodo Raiz)
{
	char ptb[1];
    if (t != NULL)
    {
    	
        printf ("v= %d p=%d bal=%d \n", t->clave, profundidad, t->bal);
        if(profundidad==0){
   			setlinestyle(3, 3, 3);
			setcolor(2);
			settextstyle(BOLD_FONT, HORIZ_DIR, 5);
			outtextxy(750,10,"Arboles AVL");
			setfillstyle(SOLID_FILL,4); 
			setcolor(4);
			circle(955,150,50);
			floodfill(955,150,4);
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			setcolor(GREEN);
			sprintf(ptb,"%d",t->clave);
			outtextxy(935,130,ptb);
			setcolor(RED);
			outtextxy(800,100,"Raiz");
			line(870,110,905,140);
			line(905,140,895,145);
			line(905,140,900,125);
		}
		 if(levelderecha==1&&levelizquierda==0){
            	
            			setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1005,150,1432,250);
						circle(1432,300,50);
						floodfill(1432,300,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1412,280,ptb);
						
							
			}
			else if(levelderecha==2&&levelizquierda==0){
            	
            			setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1482,300,1670,400);
						circle(1670,450,50);
						floodfill(1670,450,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1650,420,ptb);
						
			}
			else if(levelderecha==3&&levelizquierda==0){
            	
            			setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1789,550,1720,450);
						circle(1789,600,50);
						floodfill(1789,600,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1769,580,ptb);
						
			}
			else if(levelderecha==4&&levelizquierda==0){
            	
            			setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1848,700,1839,600);
						circle(1848,750,50);
						floodfill(1848,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1828,720,ptb);
						
			}
			else if(levelizquierda==1&&levelderecha==3&&t->clave<Raiz->right->right->clave&&t->clave>Raiz->right->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(1610,700,1601,600);
							circle(1610,750,50);
							floodfill(1610,750,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(1590,720,ptb);
								
			}
			else if(levelizquierda==1&&levelderecha==2&&t->clave<Raiz->right->clave&& t->clave>Raiz->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(1313,550,1244,450);
							circle(1313,600,50);
							floodfill(1313,600,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(1293,580,ptb);
								
			}
			
			else if(levelizquierda==1&&levelderecha==3&&t->clave<Raiz->right->clave&& t->clave>Raiz->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(1372,700,1363,600);
							circle(1372,750,50);
							floodfill(1372,750,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(1352,730,ptb);
							
			}
			
			else if(levelizquierda==2&&levelderecha==2&&t->clave<Raiz->right->left->clave&&t->clave>Raiz->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(1133,700,1124,600);
							circle(1133,750,50);
							floodfill(1133,750,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(1113,730,ptb);
							
			}
			
			else if(levelizquierda==1&&levelderecha==1&&t->clave==Raiz->left->right->clave&&t->clave<Raiz->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(715,400,527,300);
							circle(715,450,50);
							floodfill(715,450,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(695,420,ptb);	
						
			}
			else if(levelizquierda==1&&levelderecha==2&&t->clave==Raiz->left->right->right->clave&&t->clave<Raiz->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(834,550,765,450);
							circle(834,600,50);
							floodfill(834,600,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(814,580,ptb);	
					
			}
			else if(levelizquierda==2&&levelderecha==1&&t->clave==Raiz->left->left->right->clave&&t->clave<Raiz->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(357,550,288,450);
							circle(357,600,50);
							floodfill(357,600,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(327,580,ptb);	
						
			}
			else if(levelizquierda==2&&levelderecha==1&&t->clave==Raiz->left->left->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(357,550,288,450);
							circle(357,600,50);
							floodfill(357,600,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(327,580,ptb);	
						
			}
			else if(levelizquierda==3&&levelderecha==1&&t->clave<Raiz->left->left->clave&&t->clave<Raiz->left->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(178,700,169,600);
							circle(178,750,50);
							floodfill(178,750,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(158,720,ptb);	
					
			}
			else if(levelizquierda==2&&levelderecha==2&&t->clave==Raiz->left->left->right->right->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(416,700,407,600);
							circle(416,750,50);
							floodfill(416,750,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(396,720,ptb);
						
			}
			else if(levelizquierda==2&&levelderecha==2&&t->clave==Raiz->left->right->left->right->clave){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(655,700,646,600);
							circle(655,750,50);
							floodfill(655,750,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(625,720,ptb);	
						
			}
			else if(levelizquierda==1&&levelderecha==3&&t->clave==Raiz->left->right->right->right->clave&&t->clave<Raiz->clave ){
	            	
	            			setfillstyle(SOLID_FILL,4); 
							setcolor(4);
							line(893,700,884,600);
							circle(893,750,50);
							floodfill(893,750,4);
							setcolor(GREEN);
							settextstyle(BOLD_FONT, HORIZ_DIR, 3);
							sprintf(ptb,"%d",t->clave);
							outtextxy(873,720,ptb);	
					
			}
			/////////////////////////////////////////////////////////////////////////////
			else if(levelizquierda==1&&levelderecha==0&&t->clave<Raiz->clave){
            			setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(905,150,477,250);
						circle(477,300,50);
						floodfill(477,300,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(457,300,ptb);	
						
			}
			else if (levelizquierda==2&&levelderecha==0&&t->clave<Raiz->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(427,300,238,400);
						circle(238,450,50);
						floodfill(238,450,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(218,450,ptb);	
						
			}
			else if (levelizquierda==3&&levelderecha==0&&t->clave<Raiz->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(188,450,119,550);
						circle(119,600,50);
						floodfill(119,600,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(99,580,ptb);	
						
			}
			else if (levelizquierda==4&&levelderecha==0&&t->clave<Raiz->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(69,600,59,700);
						circle(59,750,50);
						floodfill(59,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(39,720,ptb);	
						
			}
			
			else if (levelizquierda==2&&levelderecha==1&&t->clave==Raiz->left->right->left->clave&&t->clave<Raiz->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(665,450,596,550);
						circle(596,600,50);
						floodfill(596,600,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(576,600,ptb);	
						
			}
			
			else if (levelizquierda==3&&levelderecha==1&&t->clave==Raiz->left->left->right->left->clave&&t->clave<Raiz->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(307,600,297,700);
						circle(297,750,50);
						floodfill(297,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(277,730,ptb);
							
			}
			else if (levelizquierda==3&&levelderecha==1&&t->clave==Raiz->left->right->left->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(546,600,536,700);
						circle(536,750,50);
						floodfill(536,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(516,730,ptb);	
					
			}
			else if (levelizquierda==2&&levelderecha==2&&t->clave==Raiz->left->right->right->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(784,600,774,700);
						circle(774,750,50);
						floodfill(774,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(754,730,ptb);
						
			}
			else if (levelizquierda==1&&levelderecha==1&&t->clave==Raiz->right->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1382,300,1194,400);
						circle(1194,450,50);
						floodfill(1194,450,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1174,420,ptb);	
					
			}
			
			else if (levelizquierda==2&&levelderecha==1&&t->clave==Raiz->right->left->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1144,450,1074,550);
						circle(1074,600,50);
						floodfill(1074,600,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1054,580,ptb);
							
			}
			else if (levelizquierda==3&&levelderecha==1&&t->clave==Raiz->right->left->left->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1024,600,1014,700);
						circle(1014,750,50);
						floodfill(1014,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(994,730,ptb);	
						
			}
			else if (levelizquierda==2&&levelderecha==2&&t->clave==Raiz->right->left->right->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1263,600,1253,700);
						circle(1253,750,50);
						floodfill(1253,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1223,730,ptb);	
					
			}
			
			else if (levelizquierda==1&&levelderecha==2&&t->clave==Raiz->right->right->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1620,450,1551,550);
						circle(1551,600,50);
						floodfill(1551,600,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1531,580,ptb);
						
			}
			else if (levelizquierda==2&&levelderecha==2&&t->clave==Raiz->right->right->left->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1501,600,1491,700);
						circle(1491,750,50);
						floodfill(1491,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1471,730,ptb);
				
			}
			else if (levelizquierda==1&&levelderecha==3&&t->clave==Raiz->right->right->right->left->clave){
						setfillstyle(SOLID_FILL,4); 
						setcolor(4);
						line(1739,600,1729,700);
						circle(1729,750,50);
						floodfill(1729,750,4);
						setcolor(GREEN);
						settextstyle(BOLD_FONT, HORIZ_DIR, 3);
						sprintf(ptb,"%d",t->clave);
						outtextxy(1709,730,ptb);
					
			}
		inorder(t->left, profundidad+1, levelizquierda+1, levelderecha,Raiz);
        inorder(t->right, profundidad+1,levelizquierda, levelderecha+1,Raiz);
    }
}

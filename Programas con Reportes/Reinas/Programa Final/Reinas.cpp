#include <graphics.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define SIZE 10
#define num 0
void Imprimir(int (*matriz)[SIZE],int n);
void ColocarReina(int (*matriz)[SIZE],int c,int f);
void QuitarReina(int (*matriz)[SIZE],int c,int f);
int ValidaAtaque(int (*matriz)[SIZE],int c,int f,int tam);
void Reinas(int (*matriz)[SIZE],int c,int f,int tam);
int size(int (*matriz)[SIZE],int tam);
//Contador para realizar la recursividad
int numerodereinas=num;

//Funcion principal
int main()
{
	int n=8;
	
	printf("Inserte el numero de reinas que desea colocar:");
	scanf("%d",&n);
	int matriz[SIZE][SIZE];
	int i,j,tam;
	tam=n;
	//Se llena la matriz de ceros
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			matriz[i][j]=0;
		}
	}
		
	//Se llama a la recursividad

	initwindow(1080,700);
	setviewport(0,0,1080,700,1);
	setbkcolor(RGB(0, 0, 0));
	cleardevice();
	settextstyle(3,HORIZ_DIR,4);
	
	setfillstyle(SOLID_FILL,WHITE); 
	setcolor(WHITE);
    rectangle(50,100,100,150);
    floodfill(75,125,WHITE); 
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(100,100,150,150);
    floodfill(125,125,RED); 
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(150,100,200,150);
    floodfill(175,125,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(200,100,250,150);
    floodfill(225,125,RED);
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(250,100,300,150);
    floodfill(275,125,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(300,100,350,150);
    floodfill(325,125,RED);
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(350,100,400,150);
    floodfill(375,125,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(400,100,450,150);
    floodfill(425,125,RED);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(50,150,100,200);
    floodfill(75,175,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(100,150,150,200);
    floodfill(125,175,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(150,150,200,200);
    floodfill(175,175,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(200,150,250,200);
    floodfill(225,175,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(250,150,300,200);
    floodfill(275,175,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(300,150,350,200);
    floodfill(325,175,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(350,150,400,200);
    floodfill(375,175,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(400,150,450,200);
    floodfill(425,175,WHITE);
	

	
    setfillstyle(SOLID_FILL,WHITE); 
	setcolor(WHITE);
    rectangle(50,200,100,250);
    floodfill(75,225,WHITE); 
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(100,200,150,250);
    floodfill(125,225,RED); 
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(150,200,200,250);
    floodfill(175,225,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(200,200,250,250);
    floodfill(225,225,RED);
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(250,200,300,250);
    floodfill(275,225,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(300,200,350,250);
    floodfill(325,225,RED);
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(350,200,400,250);
    floodfill(375,225,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(400,200,450,250);
    floodfill(425,225,RED);
    
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(50,250,100,300);
    floodfill(75,275,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(100,250,150,300);
    floodfill(125,275,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(150,250,200,300);
    floodfill(175,275,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(200,250,250,300);
    floodfill(225,275,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(250,250,300,300);
    floodfill(275,275,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(300,250,350,300);
    floodfill(325,275,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(350,250,400,300);
    floodfill(375,275,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(400,250,450,300);
    floodfill(425,275,WHITE);
    
    
    
    setfillstyle(SOLID_FILL,WHITE); 
	setcolor(WHITE);
    rectangle(50,300,100,350);
    floodfill(75,325,WHITE); 
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(100,300,150,350);
    floodfill(125,325,RED); 
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(150,300,200,350);
    floodfill(175,325,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(200,300,250,350);
    floodfill(225,325,RED);
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(250,300,300,350);
    floodfill(275,325,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(300,300,350,350);
    floodfill(325,325,RED);
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(350,300,400,350);
    floodfill(375,325,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(400,300,450,350);
    floodfill(425,325,RED);
    
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(50,350,400,400);
    floodfill(75,375,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(100,350,150,400);
    floodfill(125,375,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(150,350,200,400);
    floodfill(175,375,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(200,350,250,400);
    floodfill(225,375,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(250,350,300,400);
    floodfill(275,375,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(300,350,350,400);
    floodfill(325,375,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(350,350,400,400);
    floodfill(375,375,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(400,350,450,400);
    floodfill(425,375,WHITE);
    
    
    
    setfillstyle(SOLID_FILL,WHITE); 
	setcolor(WHITE);
    rectangle(50,400,100,450);
    floodfill(75,425,WHITE); 
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(100,400,150,450);
    floodfill(125,425,RED); 
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(150,400,200,450);
    floodfill(175,425,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(200,400,250,450);
    floodfill(225,425,RED);
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(250,400,300,450);
    floodfill(275,425,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(300,400,350,450);
    floodfill(325,425,RED);
    
    setfillstyle(SOLID_FILL,WHITE); 
    setcolor(WHITE);
    rectangle(350,400,400,450);
    floodfill(375,425,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(400,400,450,450);
    floodfill(425,425,RED);
    
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(50,450,100,500);
    floodfill(75,475,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(100,450,150,500);
    floodfill(125,475,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(150,450,200,500);
    floodfill(175,475,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(200,450,250,500);
    floodfill(225,475,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(250,450,300,500);
    floodfill(275,475,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(300,450,350,500);
    floodfill(325,475,WHITE);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED); 
    rectangle(350,450,400,500);
    floodfill(375,475,RED); 
    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE); 
    rectangle(400,450,450,500);
    floodfill(425,475,WHITE);
	Reinas(matriz,0,0,tam);
	
	closegraph();
	return 0;
} 
//Se utiliza para saber el numero de reinas que hay en la matriz
int size(int (*matriz)[SIZE],int tam)
{
	int i,j;
	int contador=0;
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			if((matriz[i][j])==1)
			{
				contador++;
			}
		}
	}
	return contador;
}

//Funcion Recursiva que recibe la matriz y la columna donde se va a comenzar
void Reinas(int (*matriz)[SIZE],int c,int f,int tam)
{
	
	//Se coloca la reina en la posicion dada
	ColocarReina(matriz,c,f);
	numerodereinas=size(matriz,tam);
	//Imprime el tablero
	Imprimir(matriz,tam);
	
	system("cls");
	
	printf("\n");
	//Si ya no hay reinas por colocar se finaliza la recursividad
	if(tam==numerodereinas && (ValidaAtaque(matriz,c,f,tam))==0)
	{
		printf("El resultado final es:\n");
		Imprimir(matriz,tam);
		Sleep(9999);
		exit(0);
	}
	//Si es atacada entonces llama a la recursividad del espacio que esta a la derecha
	if((ValidaAtaque(matriz,c,f,tam))==0 && c<=tam-1 && f<=tam-1)
	{
		
		Reinas(matriz,0,f+1,tam);
		
		//Si regresa es por que no pudo colocar todas la reinas entonces se debe de quitar con la que se esta probando
		QuitarReina(matriz,c,f);
		//Despues lo intenta pero cambiando a la siguiente fila
		Reinas(matriz,c+1,f,tam);
	
		return;
	}
	//Si es que esta siendo atacada revisa colocando la reina en otra posicion de la misma columna
	else if((ValidaAtaque(matriz,c,f,tam))==1 && c<tam-1 && f<tam-1)
	{
		QuitarReina(matriz,c,f); 
		//Despues de quitar a la reina llama a la recursividad otra vez.
		Reinas(matriz,c+1,f,tam);
		return;		
	}
	//Si esta en algun borde de la matriz revisa si puede seguir aumentando la fila
	else if(c==tam-1 || f==tam-1)
	{
		if((ValidaAtaque(matriz,c,f,tam))==1)
		{
			QuitarReina(matriz,c,f);
			if((c+1)<=(tam-1))
			{
				Reinas(matriz,c+1,f,tam);
			}
			
			return;
		}
		
	}
	
}
//Funcion que revisa todos los posibles casos en que puede ser atacada una reina por el lado izquierdo
int ValidaAtaque(int (*matriz)[SIZE],int c,int f,int tam)
{
	int i=0,j=0;
	for(i=c-1;i>=0;i--)
	{
		if(matriz[i][f]==1)
			return 1;
 	}
	for(i=f-1;i>=0;i--)
	{
		if(matriz[c][i]==1)
			return 1;
 	}
	i=1;
	while(c-i>=0 && f-i>=0)
	{
		if(matriz[c-i][f-i]==1)
		{
			return 1;
		}
		i++;
	}
	i=1;
	while(c+i<=tam-1 && f-i>=0)
	{
		if(matriz[c+i][f-i]==1)
		{
			return 1;
		}
		i++;
	}
	return 0;
}
//Funcion que coloca una reina en la posicion que recibe
void ColocarReina(int (*matriz)[SIZE],int c, int f)
{
	matriz[c][f]=1;
	return;
}
//Funcion que elimina una reina en la posicion que recibe
void QuitarReina(int (*matriz)[SIZE],int c, int f)
{
	matriz[c][f]=0;
	int i=0,j=0,x=50,y=100;
	i=c;
	j=f;
	//llenar el cuadro 
	if((c==0&&f==0)||(c==0&&f==2)||(c==0&&f==4)||(c==0&&f==6)){
		setcolor(WHITE);
		setcolor(WHITE);
	    setfillstyle(SOLID_FILL,WHITE); 
		line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),WHITE);
		
	}
	else if((c==2&&f==0)||(c==2&&f==2)||(c==2&&f==4)||(c==2&&f==6)){
		setcolor(WHITE);
		setcolor(WHITE);
	    setfillstyle(SOLID_FILL,WHITE); 
	    line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),WHITE);
		
	}
	else if((c==4&&f==0)||(c==4&&f==2)||(c==4&&f==4)||(c==4&&f==6)){
		setcolor(WHITE);
		setcolor(WHITE);
	    setfillstyle(SOLID_FILL,WHITE); 
	    line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),WHITE);
		
	}
	else if((c==6&&f==0)||(c==6&&f==2)||(c==6&&f==4)||(c==6&&f==6)){
		setcolor(WHITE);
		setcolor(WHITE);
	    setfillstyle(SOLID_FILL,WHITE); 
	    line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),WHITE);
		
	}
	else if ((c==1&&f==3)||(c==1&&f==5)||(c==1&&f==7)||(c==1&&f==1)){
		setcolor(WHITE);
		setcolor(WHITE);
	    setfillstyle(SOLID_FILL,WHITE); 
	    line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),WHITE);
	}
	else if ((c==3&&f==3)||(c==3&&f==5)||(c==3&&f==7)||(c==3&&f==1)){
		setcolor(WHITE);
		setcolor(WHITE);
	    setfillstyle(SOLID_FILL,WHITE); 
	    line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),WHITE);
	}
	else if ((c==5&&f==3)||(c==5&&f==5)||(c==5&&f==7)||(c==5&&f==1)){
		setcolor(WHITE);
		setcolor(WHITE);
	    setfillstyle(SOLID_FILL,WHITE); 
	    line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),WHITE);
	}
	else if ((c==7&&f==3)||(c==7&&f==5)||(c==7&&f==7)||(c==7&&f==1)){
		setcolor(WHITE);
		setcolor(WHITE);
	    setfillstyle(SOLID_FILL,WHITE); 
	    line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),WHITE);
	}
	else{
		setcolor(RED);
		setcolor(RED);
	    setfillstyle(SOLID_FILL,RED); 
	    line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	  	line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	   	line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	   	line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	   	line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	   	line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	   	line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	   	floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),RED);
	}
}

//Funcion que imprime el tablero con las reinas
void Imprimir(int (*matriz)[SIZE],int n)
{

	int i,j,o=1,p=1,x=50,y=100;
	for(i=0;i<n;i++,o++)
	{
		for(j=0;j<n;j++,p++)
		{
			printf("%d",matriz[i][j]);
			if(matriz[i][j]==1){
					
					
						
					setcolor(BLUE);
					outtextxy(95,50,"Reinas que no comen");
					setcolor(BLUE);
	    			setfillstyle(SOLID_FILL,BLUE); 
	    			line (x+5+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+45+(50*j+1));
	    			line (x+45+(50*i+1),y+45+(50*j+1),x+45+(50*i+1),y+30+(50*j+1));
	    			line (x+45+(50*i+1),y+30+(50*j+1),x+40+(50*i+1),y+20+(50*j+1));
	    			line (x+40+(50*i+1),y+20+(50*j+1),x+35+(50*i+1),y+30+(50*j+1));
	    			line (x+35+(50*i+1),y+30+(50*j+1),x+25+(50*i+1),y+5+(50*j+1));
	    			line (x+25+(50*i+1),y+5+(50*j+1),x+15+(50*i+1),y+30+(50*j+1));
	    			line (x+15+(50*i+1),y+30+(50*j+1),x+10+(50*i+1),y+20+(50*j+1));
	    			line (x+10+(50*i+1),y+20+(50*j+1),x+5+(50*i+1),y+30+(50*j+1));
	    			line (x+5+(50*i+1),y+30+(50*j+1),x+5+(50*i+1),y+45+(50*j+1));
	    			floodfill((x+25+(50*i+1)),(y+25+(50*j+1)),BLUE);	
					}
			}
		printf("\n");
	}
	Sleep(10);
	return;
	}


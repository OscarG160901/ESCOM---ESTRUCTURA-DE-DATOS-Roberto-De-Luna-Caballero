#include <stdio.h>
#include <graphics.h>
#include <conio.h>


void AlgoritmoHanoi(int, int, int, int);
int dimensionamiento();
void Discos(int,int,int);
void OcultaDisco(int, int,int);
void IntTorre();
void CambiosHanoi(int,int);

int NoDisos;
int CentralCambio[4][20];

int main(){
	int Torre1=1, Torre2=2, Torre3=3, disco=0, discograph=0;
	int res;
	do{
		dimensionamiento();
		system("cls");
		printf("\nA seleccionado %d disco\n",disco);
		initwindow(1080,700);
	    setbkcolor(RGB(0, 0, 0));
	    cleardevice();
	    
	    settextstyle(3,HORIZ_DIR,4);
	    setcolor(GREEN);
    	outtextxy(435,50,"Torres de Hanoi");
    	
		settextstyle(3,HORIZ_DIR,4);
	    setcolor(BLUE);
	    outtextxy(200,500,"Torre 1");
	    outtextxy(500,500,"Torre 2");
	    outtextxy(800,500,"Torre 3");
	    
		setcolor(BROWN);
		setfillstyle(SOLID_FILL,BROWN); 
		
		rectangle(135,420,965,470);
		floodfill(300,450,BROWN); 
		
    	rectangle(235,150,265,420);
    	floodfill(250,300,BROWN); 
    	
    	rectangle(535,150,565 ,420);
    	floodfill(550,300,BROWN);
    	
    	rectangle(835,150,865 ,420);
    	floodfill(850,300,BROWN); 
    	
    	IntTorre();
    	
    	delay(3000);
		AlgoritmoHanoi(NoDisos,Torre1,Torre2,Torre3);
		delay(3000);
		
		cleardevice();
		closegraph();
		
		printf("\n\n¿Desea volver a jugar?\n");
		printf("\n1.Si (La visualizacion puede tener errores de ubicacion en T3)");
		printf("\n2.No");
		printf("\n\nElija su Opcion:");
		scanf("%d",&res);
		system("cls");
		
	}while (res==1);
	return 0;
}
int dimensionamiento(){
	int disco;
	printf("\t\t\t\t\t\tMenu Hanoi\n\n");
	printf("Este programa le mostrara la resolucion del Hanoi\n\n");
	printf("Indique,¿con cuantos discos desea jugar?(No mas de 15 para evitar errores de visualizacion)");
	scanf("%d",&NoDisos);
}
void AlgoritmoHanoi(int disco, int T1, int T2, int T3){
	if(disco>0){
		AlgoritmoHanoi(disco-1, T1, T3, T2);
        CambiosHanoi(T1,T3);
        delay(1200);
        printf("Mover disco %d de Torre %d a Torre %d \n",disco,T1 ,T3);
        AlgoritmoHanoi(disco-1,T2, T1, T3);
    }
}
void IntTorre(){
    int valor=NoDisos;
    CentralCambio[1][0]=NoDisos;
    for(int j=1;j<=NoDisos;j++){
        Discos(1,j,valor);
        CentralCambio[1][j]=valor;
        valor--;
    }
}
void Discos(int pos,int alt, int tam){
    int altx,tamp,palox,paloy=400;
    if(pos==1) 
		palox=250;
    if(pos==2) 
		palox=550;
    if(pos==3) 
		palox=850;
    altx=paloy-(22*(alt-1));
    tamp=(tam*20)+50;
    if (tam==6)
    	tam=1;
    setcolor(tam);
	setfillstyle(SOLID_FILL,tam);
	
    rectangle(palox-(tamp/2),altx,palox+(tamp/2),altx+20);
	floodfill(palox-(tamp/2)+5,altx+10,tam);	
}
void OcultaDisco(int torre,int alt, int tam){
    int altx,tamp,palox,paloy=400;
    if(torre==1) 
		palox=250;
    if(torre==2) 
		palox=550;
    if(torre==3) 
		palox=850;
    altx=paloy-(22*(alt-1));
    tamp=(tam*20)+50;
    setcolor(0);
    setfillstyle(SOLID_FILL,0);
    rectangle(palox-(tamp/2),altx,palox+(tamp/2),altx+20);
    floodfill(palox-(tamp/2)+5,altx+10,0);
    setcolor(BROWN);
	setfillstyle(SOLID_FILL,BROWN); 
	rectangle(palox-15,altx,palox+15,altx+20);
    floodfill(palox,altx+10,BROWN);
}
void CambiosHanoi(int salida, int destino){
    int aux1,aux2;
    CentralCambio[destino][0]+=1;
    aux1=CentralCambio[destino][0];
    aux2=CentralCambio[salida][0];
    CentralCambio[destino][aux1]=CentralCambio[salida][aux2];
    OcultaDisco(salida,CentralCambio[salida][0],CentralCambio[salida][aux2]);
    Discos(destino,CentralCambio[destino][0],CentralCambio[destino][aux1]);
    CentralCambio[salida][aux2]=0;
    CentralCambio[salida][0]-=1;

}

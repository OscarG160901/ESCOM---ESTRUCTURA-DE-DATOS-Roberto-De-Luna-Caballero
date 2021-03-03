#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#define N 9

enum { O,X,EMPTY };

int HUMAN = 0;
int COMP = 1;

int contTableros=0;
int Tablero1[N];
int Tablero2[N];
int Tablero3[N];
int Tablero4[N];
int Tablero5[N];
int Tablero6[N];
int Tablero7[N];
int Tablero8[N];
int Tablero9[N];

// empezamos un tablero nuevo TABLEROS AUXILIARES INHABILITADOS
void InvocarTablero(int Tablero[]) {

	for(int i=0; i<N; i++){
		Tablero[i] = EMPTY;
		Tablero1[i] = EMPTY;
		Tablero2[i] = EMPTY;
		Tablero3[i] = EMPTY;
		Tablero4[i] = EMPTY;
		Tablero5[i] = EMPTY;
		Tablero6[i] = EMPTY;
		Tablero7[i] = EMPTY;
		Tablero8[i] = EMPTY;
		Tablero9[i] = EMPTY;
	}
}

// Imprimimos el Tablero en consola y finalmente graficamente
void ImpresionTablero(const int Tablero[]) {
	int x=810, y=85;
	char Ficha[] = { 'O','X','-' };
	char m;
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR,5);
	outtextxy(750,10,"Gato MINIMAX");
	setcolor(BROWN);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	line(0,80,1910,80);
		setcolor(BLUE);	
		//Base de PRIMER NIVEL
		line(905,80,905,380);
		line(1005,80,1005,380);
		line(805,180,1105,180);
		line(805,280,1105,280);
	printf("\n  Tablero\n\n");
	for(int i=0; i<N; i++, x=x+100) {
		if(i != 0 && i%3 == 0){
			printf("\n\n");
			y=y+100;
			x=810;
		}
		printf(" %c ",Ficha[Tablero[i]]);
		if(Ficha[Tablero[i]]=='O'){
			settextstyle(BOLD_FONT, HORIZ_DIR,7);
			setcolor(GREEN);
			outtextxy(x,y,"O");
			x=x+15;
		}
		else if (Ficha[Tablero[i]]=='X'){
			settextstyle(BOLD_FONT, HORIZ_DIR,8);
			setcolor(RED);
			outtextxy(x,y,"X");
			x=x+15;
		}
		if(Ficha[Tablero[i]]=='-'){
			x=x+15;
		}	
	}
	delay(2000);
	cleardevice();
	contTableros++;
	if (contTableros==2){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero1[j]=Tablero[i];
		}	
	}
	else if (contTableros==3){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero2[j]=Tablero[i];
		}	
	}
	else if (contTableros==4){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero3[j]=Tablero[i];
		}	
	}
	else if (contTableros==5){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero4[j]=Tablero[i];
		}	
	}
	else if (contTableros==6){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero5[j]=Tablero[i];
		}	
	}
	else if (contTableros==7){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero6[j]=Tablero[i];
		}	
	}
	else if (contTableros==8){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero7[j]=Tablero[i];
		}	
	}
	else if (contTableros==9){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero8[j]=Tablero[i];
		}	
	}
	else if (contTableros==10){
		for(int i=0, j=0; i<N; i++, j++) {
			Tablero9[j]=Tablero[i];
		}	
	}
	printf("\n\n");	
}

// Se revisa si se lleno el tablero
// retorna 1(true) si esta lleno
// retorna 0(false) si falta al menos una celda vacia
int VerificacionTermino(const int Tablero[]) {

	for(int i=0; i<N; i++)
		if(Tablero[i] == EMPTY)
			return 0;
	return 1;
}

// Hace el movimiento en la celda indicada, con el lado indicado
void IntroducirMovimiento(int Tablero[], const int celda, const int lado) {
	Tablero[celda] = lado;
}


// Revisa si se ha hecho 3 en raya
// returns 1 si es correcto
// returns 0 si no
int TresLinea(const int Tablero[], const int lado) {

	// horizontal
	if(Tablero[0] == lado && Tablero[1] == lado && Tablero[2] == lado)
		return 1;
	if(Tablero[3] == lado && Tablero[4] == lado && Tablero[5] == lado)
		return 1;
	if(Tablero[6] == lado && Tablero[7] == lado && Tablero[8] == lado)
		return 1;

	// vertical
	if(Tablero[0] == lado && Tablero[3] == lado && Tablero[6] == lado)
		return 1;
	if(Tablero[1] == lado && Tablero[4] == lado && Tablero[7] == lado)
		return 1;
	if(Tablero[2] == lado && Tablero[5] == lado && Tablero[8] == lado)
		return 1;

	// diagonal
	if(Tablero[0] == lado && Tablero[4] == lado && Tablero[8] == lado)
		return 1;
	if(Tablero[2] == lado && Tablero[4] == lado && Tablero[6] == lado)
		return 1;

	return 0;
}


// devuelve la puntuación del lado
// +10 si gana un bando particular
// -10 si un bando particular pierde
// 0 si se empata o aún no se ha completado el juego
int TenemosGanador(const int Tablero[], const int lado) {

	if(TresLinea(Tablero,lado))
		return 10;
	if(TresLinea(Tablero,!lado))
		return -10;
	return 0;
}

// devuelve qué movimientos da la puntuación MAXIMA
int max(int *ListaPuntaje,int ContadorMov,int *ListaMov,int *MejorMov) {
    
    if(!ContadorMov)
    	return 0;

    int max = -20;
    
    for(int i=0;i<ContadorMov;i++) {
        if(ListaPuntaje[i] > max) {
            max = ListaPuntaje[i];
            *MejorMov = ListaMov[i];
        }
    }
    return max;
}

// devuelve qué movimientos da la puntuación mínima
int min(int *ListaPuntaje,int ContadorMov,int *ListaMov,int *MejorMov) {
    
    if(!ContadorMov)
    	return 0;

    int min = +20;
    
    for(int i=0;i<ContadorMov;i++) {
        if(ListaPuntaje[i] < min) {
            min = ListaPuntaje[i];
            *MejorMov = ListaMov[i];
        }
    }
    return min;
}

int CorazonIA(int Tablero[], int lado, int *Profundidad) {

	int ListaMov[N];
	int ContadorMov = 0;
	int MejorMov;
	int PuntajeMov[N];
	int MejorPuntaje;

	MejorPuntaje = TenemosGanador(Tablero,COMP);
	if(MejorPuntaje)
		return MejorPuntaje - *Profundidad;

	// Llena ListaMov[]
	for(int i=0;i<N;i++) {
		if(Tablero[i] == EMPTY)
			ListaMov[ContadorMov++] = i;
	}

	// loop para todos los movimientos
	int Movimiento;
	for(int i=0;i<ContadorMov;i++) {

		Movimiento = ListaMov[i];
		IntroducirMovimiento(Tablero,Movimiento,lado);

		(*Profundidad)++;
		PuntajeMov[i] = CorazonIA(Tablero,!lado,Profundidad);
		(*Profundidad)--;

		IntroducirMovimiento(Tablero,Movimiento,EMPTY);
	}

	if(lado == COMP) {
		//Optiene Max de su tiro
		MejorPuntaje = max(PuntajeMov,ContadorMov,ListaMov,&MejorMov);
	}
	if(lado == HUMAN) {
		// Optiene el Min del Humano
		MejorPuntaje = min(PuntajeMov,ContadorMov,ListaMov,&MejorMov);
	}

	if(*Profundidad != 0)
        return MejorPuntaje;
    else
        return MejorMov;
}

int MovimientoIA(int *Tablero,int lado) {

    int Profundidad = 0;
    int MovimientoMejorado = CorazonIA(Tablero,lado,&Profundidad);
    printf("Para ser invensible se tiene que buscar lo mejor.... Mejor elección en: %d\n",MovimientoMejorado+1);
    return MovimientoMejorado;
}

int MovimientoMortal(const int *Tablero) {

	printf("\nIntroducir el movimiento!!\n\n");
	int movimiento;
	while(1) {

		scanf("%d",&movimiento);
		if(Tablero[movimiento-1] == EMPTY && movimiento >=0 && movimiento <=9)
			break;
		else
			printf("No es posible ahi, lo mejor sera que te lo pienses mejor: ");
	}
	return movimiento-1;
}

void InicioGato() {
	
	printf("\nEscoje X o O. O mueve primero!!\n\n");
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR,5);
	outtextxy(600,10,"BIENVENIDO AL JUEGO DEL GATO");
	setcolor(BLUE);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(50,50,"INSTRUCCIONES:");
	setcolor(BROWN);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(50,100,"Este es el juego clasico del gato, jugaras con la IA (MINIMAX) perfecta, no tendrás margen de error");
	setcolor(BLUE);
	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
	outtextxy(50,150,"Escoje X o O. O mueve primero!!");
	delay(4000);
	cleardevice();
	
	while(1) {
		
		char eleccion = getchar();
		getchar();
		if(eleccion == 'O') {
			HUMAN = O;
			COMP = X;
			break;
		}
		if(eleccion == 'X') {
			HUMAN = X;
			COMP = O;
			break;
		}
		else {
			printf("DEBE DE ELEGIR UNA OPCION CORRECTA\n");
		}
	}

	int gameOver = 0;
	int lado = O;
	int movimiento;
	int Tablero[N];

	InvocarTablero(Tablero);
	ImpresionTablero(Tablero);

	while(!gameOver) {

		if(lado == HUMAN) {
			//Movimiento del jugador
			movimiento = MovimientoMortal(Tablero);
			IntroducirMovimiento(Tablero,movimiento,lado);
			ImpresionTablero(Tablero);
		}
		else {
			//Movimiento del Ordenador
			movimiento = MovimientoIA(Tablero,lado);
			IntroducirMovimiento(Tablero,movimiento,lado);
			ImpresionTablero(Tablero);
		}


		//Ver si gano alguien
		if(TresLinea(Tablero,lado)) {
			printf("Game Over\n");
			gameOver = 1;
			if(lado == COMP)
				printf("Se te advirtio, la IA es invensible!!!\n");
			else
				printf("Este mensaje nunca se verá, pues el que un humano gane, es imposible\n");
		}

		//Ver si en su defecto hubo empate
		if(VerificacionTermino(Tablero)) {
			printf("Game Over\n");
			gameOver = 1;
			printf("Supongo que aun asi no ganaste... Toma la tregua.\n");
		}

		lado = !lado;

	}
}
void Arbol();

int main() {
	initwindow(1910,400);
	InicioGato();
	closegraph();
	Arbol();
	return 0;
}

void Arbol(){
	char ptb[5];
	int contProf=1;
	int cont=1;
	
	printf("\nAhora que se concluyo, veamos el arbol de decision que se ha seguido en la partida\n\n");
	initwindow(1910,1000);
	setlinestyle(3, 3, 3);
	setcolor(2);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(750,10,"Arboles MINIMAX");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(RED);
	outtextxy(10,50,"Se Hicieron    movimientos:");
	setcolor(BROWN);
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(400,180,"BASE INICIAL");
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	setcolor(GREEN);
	line(0,80,1910,80);
		setcolor(BLUE);	
		//Base de PRIMER NIVEL
		line(905,80,905,380);
		line(1005,80,1005,380);
		line(805,180,1105,180);
		line(805,280,1105,280);
		//ENLACES DE PRIMER A SEGUNDO NIVEL
		setcolor(RED);
		line(955,380,167,480);
		line(955,380,362,480);
		line(955,380,557,480);
		line(955,380,752,480);
		line(955,380,947,480);
		line(955,380,1142,480);
		line(955,380,1357,480);
		line(955,380,1532,480);
		line(955,380,1727,480);
		setcolor(BLUE);
		//BASE DE SEGUNDO NIVEL
			//Opcion No.1
			line(77,540,257,540);
			line(77,600,257,600);
			line(137,480,137,660);
			line(197,480,197,660);
			setcolor(BROWN);
			circle(107,510,25);
			setcolor(BLUE);
			//Opcion No.2
			line(272,540,452,540);
			line(272,600,452,600);
			line(332,480,332,660);
			line(392,480,392,660);
			setcolor(BROWN);
			circle(362,510,25);
			setcolor(BLUE);
			//Opcion No.3
			line(467,540,647,540);
			line(467,600,647,600);
			line(527,480,527,660);
			line(587,480,587,660);
			setcolor(BROWN);
			circle(617,510,25);
			setcolor(BLUE);
			//Opcion No.4
			line(662,540,842,540);
			line(662,600,842,600);
			line(722,480,722,660);
			line(782,480,782,660);
			setcolor(BROWN);
			circle(692,570,25);
			setcolor(BLUE);
			//Opcion No.5
			line(857,540,1037,540);
			line(857,600,1037,600);
			line(917,480,917,660);
			line(977,480,977,660);
			setcolor(BROWN);
			circle(947,570,25);
			setcolor(BLUE);
			//Opcion No.6
			line(1052,540,1232,540);
			line(1052,600,1232,600);
			line(1112,480,1112,660);
			line(1172,480,1172,660);
			setcolor(BROWN);
			circle(1202,570,25);
			setcolor(BLUE);
			//Opcion No.7
			line(1247,540,1427,540);
			line(1247,600,1427,600);
			line(1307,480,1307,660);
			line(1367,480,1367,660);
			setcolor(BROWN);
			circle(1277,630,25);
			setcolor(BLUE);
			//Opcion No.8
			line(1442,540,1622,540);
			line(1442,600,1622,600);
			line(1502,480,1502,660);
			line(1562,480,1562,660);
			setcolor(BROWN);
			circle(1532,630,25);
			setcolor(BLUE);
			//Opcion No.9
			line(1637,540,1817,540);
			line(1637,600,1817,600);
			line(1697,480,1697,660);
			line(1757,480,1757,660);
			setcolor(BROWN);
			circle(1787,630,25);
			setcolor(BLUE);
		setcolor(BROWN);
			outtextxy(97,670,"Opcion No.1");
			outtextxy(292,670,"Opcion No.2");
			outtextxy(487,670,"Opcion No.3");
			outtextxy(682,670,"Opcion No.4");
			outtextxy(877,670,"Opcion No.5");
			outtextxy(1072,670,"Opcion No.6");
			outtextxy(1267,670,"Opcion No.7");
			outtextxy(1462,670,"Opcion No.8");
			outtextxy(1657,670,"Opcion No.9");
		delay(3000);
		cleardevice();
		//PRIMER TIRADA 
		//Opciones 1 AL 8
		cont=1;
		for(int i=0;Tablero1[i]==2;i++){
			cont++;
		}
			setlinestyle(3, 3, 3);
			setcolor(2);
			settextstyle(BOLD_FONT, HORIZ_DIR, 5);
			outtextxy(750,10,"Arboles MINIMAX");
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			setcolor(RED);
			outtextxy(10,50,"Se Hicieron    movimientos:");
			setcolor(BROWN);
			settextstyle(BOLD_FONT, HORIZ_DIR, 5);
			outtextxy(400,180,"Tirada No.1");
			settextstyle(BOLD_FONT, HORIZ_DIR, 3);
			setcolor(GREEN);
			line(0,80,1910,80);
			setcolor(BLUE);
			if(cont==1){////////////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL Opcion No.1
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(855,130,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				line(137,480,197,540);
				line(137,540,197,480);
				
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(302,510,25);
				line(392,480,452,540);
				line(392,540,452,480);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(497,510,25);
				line(467,540,527,600);
				line(467,600,527,540);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,510,25);
				line(722,540,782,600);
				line(722,600,782,540);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(887,510,25);
				line(977,540,1037,600);
				line(977,600,1037,540);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1082,510,25);
				line(1052,600,1112,660);
				line(1052,660,1112,600);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,510,25);
				line(1327,600,1367,660);
				line(1327,660,1367,600);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1472,510,25);
				line(1562,600,1622,660);
				line(1562,660,1622,600);
				setcolor(BLUE);
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
				}
			if(cont==2){ //////////////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL Opcion No.2
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(955,130,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(362,510,25);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(617,510,25);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,570,25);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(947,570,25);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1202,570,25);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,630,25);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1532,630,25);
				setcolor(BLUE);
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
				
			}
			if(cont==3){//////////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(1055,130,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(362,510,25);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(617,510,25);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,570,25);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(947,570,25);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1202,570,25);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,630,25);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1532,630,25);
				setcolor(BLUE);
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
			}
			if(cont==4){//////////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(855,230,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(362,510,25);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(617,510,25);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,570,25);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(947,570,25);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1202,570,25);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,630,25);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1532,630,25);
				setcolor(BLUE);
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
				}
			if(cont==5){//////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(955,230,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(362,510,25);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(617,510,25);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,570,25);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(947,570,25);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1202,570,25);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,630,25);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1532,630,25);
				setcolor(BLUE);
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
			}
			if(cont==6){////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(1055,230,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(362,510,25);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(617,510,25);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,570,25);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(947,570,25);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1202,570,25);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,630,25);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1532,630,25);
				setcolor(BLUE);
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
			}
			if(cont==7){/////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(855,330,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(362,510,25);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(617,510,25);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,570,25);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(947,570,25);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1202,570,25);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,630,25);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1532,630,25);
				setcolor(BLUE);
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
			}
			if(cont==8){//////////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(955,330,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(362,510,25);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(617,510,25);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,570,25);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(947,570,25);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1202,570,25);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,630,25);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1532,630,25);
				setcolor(BLUE);
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
			}
			if(cont==9){////////////////////////////////////////////////////////////////
			//Base de PRIMER NIVEL
			line(905,80,905,380);
			line(1005,80,1005,380);
			line(805,180,1105,180);
			line(805,280,1105,280);
			setcolor(BROWN);
			circle(1055,330,45);
			setcolor(BLUE);
			//ENLACES DE PRIMER A SEGUNDO NIVEL
			setcolor(RED);
			line(955,380,167,480);
			line(955,380,362,480);
			line(955,380,557,480);
			line(955,380,752,480);
			line(955,380,947,480);
			line(955,380,1142,480);
			line(955,380,1357,480);
			line(955,380,1532,480);
			setcolor(BLUE);
			//BASE DE SEGUNDO NIVEL
				//Opcion No.1
				line(77,540,257,540);
				line(77,600,257,600);
				line(137,480,137,660);
				line(197,480,197,660);
				setcolor(BROWN);
				circle(107,510,25);
				setcolor(BLUE);
				//Opcion No.2
				line(272,540,452,540);
				line(272,600,452,600);
				line(332,480,332,660);
				line(392,480,392,660);
				setcolor(BROWN);
				circle(362,510,25);
				setcolor(BLUE);
				//Opcion No.3
				line(467,540,647,540);
				line(467,600,647,600);
				line(527,480,527,660);
				line(587,480,587,660);
				setcolor(BROWN);
				circle(617,510,25);
				setcolor(BLUE);
				//Opcion No.4
				line(662,540,842,540);
				line(662,600,842,600);
				line(722,480,722,660);
				line(782,480,782,660);
				setcolor(BROWN);
				circle(692,570,25);
				setcolor(BLUE);
				//Opcion No.5
				line(857,540,1037,540);
				line(857,600,1037,600);
				line(917,480,917,660);
				line(977,480,977,660);
				setcolor(BROWN);
				circle(947,570,25);
				setcolor(BLUE);
				//Opcion No.6
				line(1052,540,1232,540);
				line(1052,600,1232,600);
				line(1112,480,1112,660);
				line(1172,480,1172,660);
				setcolor(BROWN);
				circle(1202,570,25);
				setcolor(BLUE);
				//Opcion No.7
				line(1247,540,1427,540);
				line(1247,600,1427,600);
				line(1307,480,1307,660);
				line(1367,480,1367,660);
				setcolor(BROWN);
				circle(1277,630,25);
				setcolor(BLUE);
				//Opcion No.8
				line(1442,540,1622,540);
				line(1442,600,1622,600);
				line(1502,480,1502,660);
				line(1562,480,1562,660);
				setcolor(BROWN);
				circle(1532,630,25);
				setcolor(BLUE);	
				setcolor(BROWN);
				outtextxy(97,670,"Opcion No.1");
				outtextxy(292,670,"Opcion No.2");
				outtextxy(487,670,"Opcion No.3");
				outtextxy(682,670,"Opcion No.4");
				outtextxy(877,670,"Opcion No.5");
				outtextxy(1072,670,"Opcion No.6");
				outtextxy(1267,670,"Opcion No.7");
				outtextxy(1462,670,"Opcion No.8");
			}
	sprintf(ptb,"%d",contTableros-1);
	outtextxy(180,50,ptb);
	delay(9000);
	closegraph();
}


/*
* Programa: Primer parcial
* Fecha: 30 agosto 2017
* Elaborado por: Camila Andrea Borja Sanchez y Critian Camilo Villada Granada
*/


//Librerias
#include<stdio.h>
#include<stdlib.h>

//estructuras
struct Proveedores{
	char nombre[30];
	char telefono[10];
	char direccion[15];
}provee, *p_provee = &provee;

struct productos{
	int c_vendida;
	float precio;
	int calcular;
}ventas, *p_ventas = &ventas;

//funciones principales
void menu();
void estructura();
void matriz();

int main(){
	
	menu();
	
	return 0;
}

void menu(){
	int opcion;
	do{
		printf(".............................\n");
        printf(".       MENU PRINCIPAL      .\n");
        printf(".............................\n");
        printf(".    1.  ESTRUCTURAS        .\n");
        printf(".    2.  MATRIZ DINAMICA    .\n");
        printf(".    0.  SALIR              .\n");
		printf(".............................\n");
		printf("\nIngrese una opcion: ");
		scanf("%d", &opcion);
		system("cls");
		
		switch(opcion){
			case 1: estructura();
				break;
			case 2: matriz();
				break;
			case 0: menu();
				break;
			default: printf("\nOpcion no valida");
			system("pause");
			system("cls");
   	 	}
	}while(opcion != 0);	
}

void estructura(){
	int i;
	printf("\n\t PROVEEDOR\n");
	fflush(stdin);
	printf("Ingrese Su Nombre: ");
	fgets((p_provee) -> nombre, 30, stdin);
	printf("Ingrese Su telefono: ");
	fgets((p_provee) -> telefono, 10, stdin);
	printf("Ingrese su direccion: ");
	fgets((p_provee) -> direccion, 15, stdin);
	system("cls");
	printf("\n\tDATOS DEL PROVEEDOR\n");
	printf("\nNombre: %s", p_provee  -> nombre);
	printf("Telefono: %s", p_provee  -> telefono);
	printf("Direccion: %s", p_provee  -> direccion);
	system("cls");
		
	
}
void matriz(){
	int matriz[100][100];
	int* p_matriz = &matriz[0][0];
	int i, j, fil, col, fibo;
	printf("\tLlene La Matriz \n");
		printf("Ingrese Filas");
		scanf("%d", &fil);
		printf("Ingrese columnas");
		scanf("%d", &col);
	for(i = 0; i < 100; i++){
		for(j = 0; j < 100; j++){
			
		}
	}
}






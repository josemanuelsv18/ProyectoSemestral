//Josemanuel Sifontes / 20-70-7436 / 1SF111
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int MostrarMenu(int e){
    int a;
    system("clear");
    printf("CAMPUS CENTRAL UTP\nEstacionamientos edificio N°3\nControl para el acceso de vehículos");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("\nEn este momento hay %d estacionamientos disponibles\n", e);
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("1. Ver estacionamientos ocupados y disponibles\n2. Acceder al estacionamiento\n3. Salir del estacionamiento\n4. Ver registro de acceso\n5. Ver listado de vehiculos autorizados\n6. Salir del sistema\n");
    scanf("%d",&a);
    return(a);
}
int MostrarSubmenu(){
    int a;
    int menu;
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("\n1. Regresar al menu\n2. Salir del sistema\n");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    scanf("%d", &a);
    if(a==1){
        a=7;
    }else if(a==2){
        a=6;
    }
    return(a);
}
int VerificarDisponibilidad(char *registro[]){
    int i;
    int acceso;
    int comparacion;
    char libre_comparacion[]="Libre ";
    acceso=0;
    for (i=0;i<10;i++){
        comparacion=strcmp(libre_comparacion,registro[i]);
        if(comparacion==0){
            acceso++;
        }
    }
    return(acceso);
}
int main(){
    //declaracion de variables
    //Matrices principales
    char *propietario[]={
        "Isaias Martin",//1
        "Sonia Cuenca",//2
        "Marisa Quevedo",//3
        "Hassan Sanz",//4
        "Maximo Cano",//5
        "Mario Almeida",//6
        "Jennifer Giraldo",//7
        "Luz-Maria Medrano",//8
        "Monserrat Pereira",//9
        "Emilio Zaragoza",//10
        "Ainara Iglesias",//11
        "Santiago Zambrano",//12
        "Yasmin Vidal",//13
        "Jessica Serrano",//14
        "Benito Martinez"//15
    };
    char *placas[]={
        "ZMFF55",//1
        "M4T9AV",//2
        "DF8LJ6",//3
        "HDN5FC",//4
        "ECAN7H",//5
        "3D8A3Y",//6
        "38B798",//7
        "ATS6LL",//8
        "JCB7MX",//9
        "3835H4",//10
        "899EEQ",//11
        "VBPG2Q",//12
        "VDXDN6",//13
        "9HDPK7",//14
        "JLAQJ3"//15
    };
    char *estacionamiento[10]={
        "Libre ","Libre ","Libre ","Libre ","Libre ","Libre ","Libre ","Libre ","Libre ","Libre "
    };
    char *libre_cmp[]={"Libre "};
    //Variables comunes
    int i;
    
    //Variables menu 2
    int ii;
    int a;
    int accion;
    int disponibilidad;
    int comparacion;
    int comparacion_disponible;
    char placa_aprobada[6][15];
    int usuario;
    char placa_registro[6][15];
    bool parkinglot;
    //Variables menu 3

    //Bloque de instrucciones 
    disponibilidad=VerificarDisponibilidad(estacionamiento);
    accion=MostrarMenu(disponibilidad);
    ii=0;
    while (accion!=6){
        switch(accion){
        case 1: //Ver estacionamientos ocupados y disponibles
            system("clear");
            printf("1. Estacionamientos ocupados y disponibles");
            printf("\n-------------------------------------------------------------------------------------------------------\n");
            printf("\n+-------------------+-------------------+--------------------+-------------------+--------------------+\n");
            printf("| Estacionamiento 1 | Estacionamiento 2 | Estacionamiento 3  | Estacionamiento 4 | Estacionamiento 5  |\n");
            printf("+-------------------+-------------------+--------------------+-------------------+--------------------+\n");
            printf("| %s            | %s            | %s             | %s            | %s             |\n", estacionamiento[0],estacionamiento[1],estacionamiento[2],estacionamiento[3],estacionamiento[4]);
            printf("+-------------------+-------------------+--------------------+-------------------+--------------------+\n");
            printf("| Estacionamiento 6 | Estacionamiento 7 | Estacionamiento 10 | Estacionamiento 9 | estacionamiento 10 |\n");
            printf("+-------------------+-------------------+--------------------+-------------------+--------------------+\n");
            printf("| %s            | %s            | %s             | %s            | %s             |\n", estacionamiento[5],estacionamiento[6],estacionamiento[7],estacionamiento[8],estacionamiento[9]);
            printf("+-------------------+-------------------+--------------------+-------------------+--------------------+\n");
            disponibilidad=VerificarDisponibilidad(estacionamiento);
            accion=MostrarSubmenu();
            break;
        case 2: //acceder al estacionamiento
            system("clear");
            printf("2. Acceso al estacionamiento");
            printf("\n-------------------------------------------------------------------------------------------------------\n");
            if(disponibilidad>0){//chequear disponibilidad del estacionamiento
                printf("Hay %d puesto/s disponibles\n",disponibilidad);
                printf("Ingrese la placa del vehiculo para acceder al estacionamiento\n\nPlaca: ");
                scanf("%s", placa_registro[ii]);
                for(i= 0;i<15;i++){
                    comparacion=strcmp(placa_registro[ii], placas[i]);
                    if(comparacion==0){//placa registrada
                        parkinglot=true;
                        strcpy(placa_aprobada[ii], placa_registro[ii]);
                        usuario=i;
                        i=15;
                        printf("la nueva placa aprobada es %s\n",placa_aprobada[ii]);
                        printf("el estacionamiento en la etapa de confirmacion es %s\n",estacionamiento[0]);
                    }else{//placa fuera del registro
                        parkinglot=false;
                    }
                } 
                if(parkinglot==true){
                    system("clear");
                    printf("2. Acceder al estacionamiento");
                    printf("\n-------------------------------------------------------------------------------------------------------\n");
                    printf("El propietario del vehiculo de placa %s es %s\n",placa_aprobada[ii], propietario[usuario]);
                    for(a=0;a<10;a++){
                        comparacion_disponible=strcmp(libre_cmp[0],estacionamiento[a]);
                        if (comparacion_disponible==0){
                            estacionamiento[a]=placa_aprobada[ii];
                            printf("Se le ha asignado el estacionamiento N°%d",a+1);
                            a=10;
                        }   
                    }
                }else{
                    memset(placa_registro[ii],0,sizeof(placa_registro[ii]));
                    system("clear");
                    printf("2. Acceder al estacionamiento");
                    printf("\n-------------------------------------------------------------------------------------------------------\n");
                    printf("\nLa placa %s no se encuentra en el registro. Acceso denegado\n", placa_registro[ii]);
                }
            }else{
                printf("Todos los estacionamientos se encuentran ocupados");
            }
            disponibilidad=VerificarDisponibilidad(estacionamiento);
            accion=MostrarSubmenu();
            break;
        case 3:
            system("clear");
            printf("3. Salida de estacionamiento");
            printf("\n-------------------------------------------------------------------------------------------------------\n");

            disponibilidad=VerificarDisponibilidad(estacionamiento);
            accion=MostrarSubmenu();
            break;
        case 4:
            system("clear");
            printf("selecciono la opcion 4");
            printf("\n-------------------------------------------------------------------------------------------------------\n");
            accion=MostrarSubmenu();
            break;
        case 5:
            system("clear");
            printf("selecciono la opcion 5");
            printf("\n-------------------------------------------------------------------------------------------------------\n");
            accion=MostrarSubmenu();
            break;
        case 7:
            disponibilidad=VerificarDisponibilidad(estacionamiento);
            accion=MostrarMenu(disponibilidad);
            break;
        default:
            system("clear");
            printf("Seleccione una opcion valida del menu");
            printf("\n-------------------------------------------------------------------------------------------------------\n");
            accion=MostrarSubmenu();
            break;
        }
        ii++;
    }
    system("clear");
    printf("El programa ha finalizado correctamente\n");
    return(0);
}
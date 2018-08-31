#include <stdio.h>
#include <string.h>

#ifdef __linux
    #define CSCREEN "clear"
#else
    #define CSCREEN "cls"
#endif // __linux

#define itemsMax 4

/**
    Fecha,
    Nombre del beneficiado,
    Edad,
    Direccion,
    Número de Integrantes de su familia,
    Tipo de sangre.
*/

struct  Beneficiario {
	char  nombre[100];
	char fechaNac[20];//01/05/2018
	int edad;
	int integrantesFam;
	char tipoSangre[10]; //OH+ OH-
	int registroID;
};


int main(){
	int opcion     = 0;
	int conteoID   = 0;
	int limCnt     = 0;
	char comodin;

	char tNom[100]  = "";
	char tFNac[20]  = "";
	char tTSan[10]  = "";
    	int tEdad       = 0;
    	int tFam        = 0;

	struct Beneficiario Beneficiarios[itemsMax];

	do {
		
		printf("---------------------------------------\n");
		printf("UNADM .- Registro SEDESOL v 0.01.125\n");
		printf("---------------------------------------\n");
		printf("Elija una opcion para trabajar:\n");


		printf("1 = Ver todos los registros\n");
		printf("2 = Agregar Nuevo Registro\n");

		printf("9 = Salir\n");

		scanf("%d", &opcion);

        switch(opcion){

		case 1:
		system(CSCREEN);

			limCnt = conteoID - 1;
			if(limCnt >= 0){
                int cnt         = 0;
                char linea[200] = "";
                printf("---------------------------------------\n");
                printf("Lista de Beneficiarios\n");
                printf("---------------------------------------\n");



                //printf("Limite %d\n", limCnt);
				int i;
                for(i=0; i <= limCnt; i++){
	                struct Beneficiario ben = Beneficiarios[i];
	                printf("Clave: %d\n", ben.registroID);
	                printf("Nombre: %s", ben.nombre);
	                printf("Edad: %d\n", ben.edad);
	                printf("Fecha de Nacimiento: %s", ben.fechaNac);
	                printf("Integrantes en la Familia: %d\n", ben.integrantesFam);
	                printf("Tipo de Sangre : %s\n", ben.tipoSangre);
	                printf("----\n");


                    cnt++;
                }

                printf("----------------- registros %d----------------\n", cnt);
            } else {
                printf("no hay Beneficiarios Capturados\n");
            }
        break;

        case 2:
            if(conteoID <= (itemsMax - 1 ) ){

		system(CSCREEN);
                printf("Capture los datos del Beneficiario:\n");

                printf("Nombre:\n");
		scanf("%c", &comodin);
                fgets(tNom, 100, stdin);

                strcpy(Beneficiarios[conteoID].nombre, tNom);


                printf("Edad:\n");
                scanf("%d", &tEdad);
                Beneficiarios[conteoID].edad = tEdad;

                printf("Fecha de Nacimiento:\n");
		scanf("%c", &comodin);
		fgets(tFNac, 20, stdin);
                //scanf("%s", &tFNac);
                strcpy(Beneficiarios[conteoID].fechaNac, tFNac);
                

                printf("Numero de Integrantes en la Familia:\n");
                scanf("%d", &tFam);
                Beneficiarios[conteoID].integrantesFam  = tFam;
                printf("Tipo de Sangre:\n");
                scanf("%s", &tTSan);
                strcpy(Beneficiarios[conteoID].tipoSangre, tTSan);

                Beneficiarios[conteoID].registroID = conteoID+1;

                printf("Se agrega el registro con ID : %d \n", Beneficiarios[conteoID].registroID);
                //Aumentar ID
                conteoID++;
			} else {
                printf("Solo hay capacidad para %d registros\n", itemsMax);
			}
        break;
	case 9:
	break;

        default :
	
            printf("opcion invalida: %d \n", opcion);

        break;


		}


	} while(opcion != 9);

	return 0;
}

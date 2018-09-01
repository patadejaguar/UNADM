// Balam Gonzalez Luis Humberto
// Agosto2018
// https://blog.patadejaguar.xyz
// #PSINT Algoritmo

Proceso registroSEDESOL
	Definir itemsMax Como Entero;
	Definir contador Como Entero;
	Definir nombre Como Caracter;
	Definir fechaNac Como Caracter;
	Definir edad Como Entero;
	Definir integrantesFam Como Entero;
	Definir registroID Como Entero;
	Definir tipoSangre Como Caracter;
	Definir cnt Como Entero;
	itemsMax <- 4;
	contador <- 1;
	cnt <- 1;
	Dimension nombre[4];
	Dimension fechaNac[4];
	Dimension edad[4];
	Dimension integrantesFam[4];
	Dimension registroID[4];
	Dimension tipoSangre[4];
	Definir opt Como Entero;
	opt <- 0;
	Mientras opt<>9 Hacer
		Escribir 'Elija una opcion para trabajar:';
		Escribir '1 = Ver todos los registros';
		Escribir '2 = Agregar Nuevo Registro';
		Escribir '9 = Salir';
		Leer opt;
		Segun opt  Hacer
			1:
				Si contador>1 Entonces
					Escribir 'Lista de Beneficiarios';
					contador <- contador-1;
					Para cnt<-1 Hasta contador Hacer
						Escribir 'Codigo: #',registroID[cnt];
						Escribir 'Nombre: ',nombre[1];
						Escribir 'Edad: ',edad[cnt];
						Escribir 'Fecha de Nacimiento:',fechaNac[cnt];
						Escribir 'Numero de Integrantes en la Familia:',integrantesFam[cnt];
						Escribir 'Tipo de Sangre: ',tipoSangre[cnt];
					FinPara
				FinSi
			2:
				Si contador<=itemsMax Entonces
					Escribir 'Capture los datos del Beneficiario: #',contador;
					Escribir 'Nombre:';
					Leer nombre[contador];
					Escribir 'Edad:';
					Leer edad[contador];
					Escribir 'Fecha de Nacimiento:';
					Leer fechaNac[contador];
					Escribir 'Numero de Integrantes en la Familia:';
					Leer integrantesFam[contador];
					Escribir 'Tipo de Sangre:';
					Leer tipoSangre[contador];
					registroID[contador] <- contador;
					contador <- contador+1;
				FinSi
			9:
				Escribir 'Bye!';
		FinSegun
	FinMientras
FinProceso


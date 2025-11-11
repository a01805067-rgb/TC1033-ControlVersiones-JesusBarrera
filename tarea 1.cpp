/*
Tarea 1: Programas de funciones, decisiones y repeticiones en C++
Gael Tinoco Ortega - A01804526
Jesús A. Barrera Pérez - A01805067
Fecha: 11 de nov de 2025
 */

#include <iostream>
#include <string>

using namespace std;

// --- FUNCIONES PROBLEMAS 1-5 (CICLO FOR) ---

/*
cuenta20() :
Función que pide al usuario 20 numeros e imprime cuantos son positivos,
negativos y cero.
Args: ninguno, opera leyendo desde la consola
Returns: void, su función es imprimir en la consola.
*/
void cuenta20() {
    int num, pos = 0, neg = 0, cero = 0;
    cout << "Ejercicio 1: Contar 20 Numeros."<<endl;
    cout << "Ingresa 20 numeros:" << endl;

    for (int i = 0; i < 20; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> num;
        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            cero++;
        }
    }

    cout <<""<< endl;
    cout << "Resultados:" << endl;
    cout << "Positivos: " << pos << endl;
    cout << "Negativos: " << neg << endl;
    cout << "Ceros: " << cero << endl;
    cout <<""<< endl;
}

/*
tablaMultiplicar() :
Pide un numero al usuario e imprime su tabla de multiplicar.
Args: ninguno, opera leyendo desde la consola
Returns: void, su función es imprimir en la consola.
*/
void tablaMultiplicar() {
    int num;
    cout << "Ejercicio 2: Tabla de Multiplicar." << endl;
    cout << "Ingresa un numero para ver su tabla: ";
    cin >> num;

    cout << "Tabla del " << num << "..." << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
    cout <<""<< endl;
}

/*
menor() :
Pide al usuario 'n' numeros y encuentra cual es el menor.
Args: ninguno, opera leyendo desde la consola
Returns: void, su función es imprimir en la consola.
*/
void menor() {
    int n, num, min;
    cout << "Ejercicio 3: Encontrar el Menor." << endl;
    cout << "Cuantos numeros vas a ingresar?: ";
    cin >> n;

    if (n <= 0) {
        cout << "No se ingresaran numeros." << endl;
        return;
    }

    cout << "Ingresa el numero 1: ";
    cin >> min;

    for (int i = 1; i < n; i++) {
        cout << "Ingresa el numero " << (i + 1) << ": ";
        cin >> num;
        if (num < min) {
            min = num;
        }
    }

    cout <<""<< endl;
    cout << "El numero menor de la serie es: " << min << endl;
    cout <<""<< endl;
}

/*
multiplos3o5() :
Encuentra y suma todos los multiplos de 3 o 5
menores a 1000.
Args: ninguno
Returns: void, su función es imprimir en la consola.
*/
void multiplos3o5() {
    int suma = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            suma += i;
        }
    }
    cout << "Ejercicio 4: Suma de Multiplos de 3 o 5." << endl;
    cout << "La suma de los multiplos de 3 o 5 menores a 1000 es: " << suma << endl;
    cout <<""<< endl;
}

/*
primos() :
Pide un numero limite 'num' y encuentra todos los primos
desde 0 hasta 'num'. Imprime el ultimo primo encontrado.
Args: ninguno, opera leyendo desde la consola
Returns: void, su función es imprimir en la consola.
*/
void primos() {
    int num, ultimoPrimo = -1;
    cout << "Ejercicio 5: Numeros Primos." << endl;
    cout << "Ingresa un numero limite superior: ";
    cin >> num;

    cout << "Primos encontrados: ";
    for (int i = 2; i <= num; i++) {
        bool esPrimo = true;
        // Optimizacion: solo checar hasta la raiz cuadrada de i
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            cout << i << " ";
            ultimoPrimo = i;
        }
    }

    cout << "" << endl;
    if (ultimoPrimo != -1) {
        cout << "El ultimo numero primo encontrado fue: " << ultimoPrimo << endl;
    } else {
        cout << "No se encontraron numeros primos en ese rango." << endl;
    }
    cout <<""<< endl;
}


// --- FUNCIONES PROBLEMAS 6-9 (WHILE/FOR) ---

/*
dibujaCuadradoRelleno() :
Función que pregunta al usuario el tamaño de una cuadrado, y después lo dibuja en la terminal usando "* ".

Args: ninguno, opera leyendo desde la consola
Returns: void, su función es imprimir en la consola.
*/
void dibujaCuadradoRelleno() {

	int b,h;

	cout << "Dibujemos un cuadrado relleno."<<endl;
	cout << "Base del cuadrado relleno: >";
	cin >> b;
	cout << "Altura del cuadrado relleno: >";
	cin >> h;
	cout <<""<< endl;
	cout << "Dibujando..."<<endl;

	for (int i=0; i<h ; i++) {
		for (int j=0; j<b ; j++) {
			cout << "* "; //usamos "* " en vez de solo "*" para dar más simertría a los cuadrados, sino, parecerán más bien rectángulos.
		}
		cout <<""<< endl;
	}
}

/*
dibujaCuadradoVacio() :
Función que pregunta al usuario el tamaño de una cuadrado, y después lo dibuja en la terminal usando "* " para los bordes y "  " para el relleno.

Args: ninguno, opera leyendo desde la consola
Returns: void, su función es imprimir en la consola.
*/
void dibujaCuadradoVacio() {

	int b,h;

	cout << "Dibujemos un cuadrado vacio."<<endl;
	cout << "Base del cuadrado vacio: >";
	cin >> b;
	cout << "Altura del cuadrado vacio: >";
	cin >> h;
	cout <<""<< endl;
	cout << "Dibujando..."<<endl;
	cout <<""<< endl;

    //usamos "* " en vez de solo "*" para dar más simertría a los cuadrados, sino, parecerán más bien rectángulos.
    for (int i=0; i<b ; i++) {
        cout << "* ";
    }
    cout <<""<< endl;
	for (int i=1; i<h-1 ; i++) {
        cout << "* ";
		for (int j=0; j<b-2 ; j++) {
			cout << "  "; // Corregido para usar 2 espacios, como en el borde
		}
		cout << "* ";
		cout <<""<< endl;
	}
    for (int i=0; i<b ; i++) {
        cout << "* ";
    }
    cout << "" << endl; // Salto de linea al final
}

/*
dibujaMasCuadradosVacios() :
Función que pregunta al usuario la cantidad de cuadrados y sus tamaños, y después los dibuja en la terminal usando "* " para los bordes y "  " para el relleno, con una linea vacía en medio.

Args: ninguno, opera leyendo desde la consola
Returns: void, su función es imprimir en la consola.
*/
void dibujaMasCuadradosVacios() {

	int b,h,c;

	cout << "Dibujemos varios cuadrados vacios."<<endl;
	cout << "Base del cuadrado vacio:   >";
	cin >> b;
	cout << "Altura del cuadrado vacio: >";
	cin >> h;
    cout << "Cuantos cuadrados vacios?  >";
	cin >> c;
	cout <<""<< endl;
	cout << "Dibujando..."<<endl;
	cout <<""<< endl;

    //usamos "* " en vez de solo "*" para dar más simertría a los cuadrados, sino, parecerán más bien rectángulos.
    for (int k=0;k<c;k++) {

        for (int i=0; i<b ; i++) {
            cout << "* ";
        }
        cout <<""<< endl;
        for (int i=1; i<h-1 ; i++) {
            cout << "* ";
            for (int j=0; j<b-2 ; j++) {
                cout << "  "; // Corregido
            }
            cout << "* ";
            cout <<""<< endl;
        }
        for (int i=0; i<b ; i++) {
            cout << "* ";
        }
        cout <<""<< endl;

        cout <<""<< endl; // Espacio entre cuadrados
    }
}

/*
dibujaCuadradosVaciosJuntos() :
Función que pregunta al usuario la cantidad de cuadrados y sus tamaños, y después los dibuja en la terminal usando "* " para los bordes y "  " para el relleno, sin linea vacía en medio.
(Este es el problema 4 de While/For, que era igual al 3 pero lo interpretamos como "sin espacio")

Args: ninguno, opera leyendo desde la consola
Returns: void, su función es imprimir en la consola.
*/
void dibujaCuadradosVaciosJuntos() {

	int b,h,c;

	cout << "Dibujemos cuadrados vacios juntados."<<endl;
	cout << "Base del cuadrado vacio:   >";
	cin >> b;
	cout << "Altura del cuadrado vacio: >";
	cin >> h;
    cout << "Cuantos cuadrados vacios juntados:  >";
	cin >> c;
	cout <<""<< endl;
	cout << "Dibujando..."<<endl;
	cout <<""<< endl;

    //usamos "* " en vez de solo "*" para dar más simertría a los cuadrados, sino, parecerán más bien rectángulos.
    for (int k=0;k<c;k++) {

        for (int i=0; i<b ; i++) {
            cout << "* ";
        }
        cout <<""<< endl;
        for (int i=1; i<h-1 ; i++) {
            cout << "* ";
            for (int j=0; j<b-2 ; j++) {
                cout << "  "; // Corregido
            }
            cout << "* ";
            cout <<""<< endl;
        }
        // La unica diferencia con el anterior es
        // que este no tiene el "cout << "" << endl;" de espacio
    }
    // Esta ultima tapa solo se debe imprimir una vez al final
    for (int i=0; i<b ; i++) {
        cout << "* ";
    }
    cout << "" << endl;
}

// Función principal
int main() {
	int chooser;

	do {
		cout << "Ejercicio de la actividad 1 a ejecutar (1-9): ";
		cin >> chooser;
        cout << "" << endl; // Espacio

		switch (chooser) {
		case 1:
			cuenta20();
			break;
		case 2:
			tablaMultiplicar();
			break;
		case 3:
			menor();
			break;
		case 4:
			multiplos3o5();
			break;
		case 5:
			primos();
			break;
		case 6:
			dibujaCuadradoRelleno();
			break;
		case 7:
			dibujaCuadradoVacio();
			break;
		case 8:
			dibujaMasCuadradosVacios();
			break;
        case 9:
			dibujaCuadradosVaciosJuntos(); // Asignado a la 9 para que el menu tenga 9 opciones
			break;
		default:
			cout << "Error, la opción seleccionada no es valida, intentelo de nuevo" << endl;
			chooser=-1; // si la opción no es válida, definimos a chooser como -1 para que así el while repita el do.
			break;
		}

        // Si la opcion fue valida, el programa termina
        // Si la opcion fue invalida, chooser es -1 y el loop se repite
	} while (chooser==-1);

	return 0;
}
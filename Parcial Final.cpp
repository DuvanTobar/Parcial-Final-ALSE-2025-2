#include <iostream>
#include <cmath>
using namespace std;

// Definir la estructura de un punto en 2D
struct Point
{
    double x, y;
};

// Función para calcular la distancia entre dos puntos
/*Como puede modificar la declaración de la función para que sea mas eficiente en el manejo de memoria?
Teniendo en cuenta que solo necesita leer los valores, pero no modificarlos*/
double calcularDistancia(Point p1, Point p2)
{
    
}

// Función para leer las coordenadas de varios puntos
void leerPuntos(Point puntos[], int n)
{
    char respuesta;
    cout << "¿Desea ingresar los puntos manualmente? (s/n): ";
    cin >> respuesta
    // Leer la respuesta del usuario

    // Completar: Verificar si la respuesta es 's' o 'n', tener en cuenta mayúsculas y minúsculas
    if 
    {
        // Completar: Leer las coordenadas de cada punto
        for (int = 0; i < n; i++)
        {
            cout << "Ingrese las coordenadas del punto " << i + 1 << " (x, y): ";
            cin >> puntos[].>> puntos;
        }
    }
    else
    {
        // Usar puntos predeterminados
        cout << "Usando puntos predeterminados...\n";
        puntos[0] = {0, 0};  // Punto 1 (0, 0)
        puntos[1] = {3, 4};  // Punto 2 (3, 4)
        puntos[2] = {6, 8};  // Punto 3 (6, 8)
        puntos[3] = {9, 12}; // Punto 4 (9, 12)
    }
}

// Función para calcular la distancia más cercana desde un punto específico
double calcularDistanciaMasCercana(Point puntos[], int n, const Point &pUsuario, int &indiceMasCercano)
{
    double distanciaMinima = calcularDistancia(pUsuario, puntos[0]);
    indiceMasCercano = 0;

    for 
        }
    }

    return distanciaMinima;
}
/*BONO:
Escribir una función que reciba un arreglo de puntos y devuelva la distancia total de los puntos que conforman el arreglo si estos fueran recorridos en orden.
*/

// Función para mostrar el punto más cercano y la distancia
void mostrarResultado(Point puntos[], int indiceMasCercano, double distancia)
{
    cout << "El punto más cercano es: (" << puntos[indiceMasCercano].x << ", " << puntos[indiceMasCercano].y << ")\n";
    cout << "La distancia al punto más cercano es: " << distancia << endl;
}

int main()
{
    int n;

    cout << "Ingrese el número de puntos (mínimo 2): ";
    // Leer el número de puntos
    cin >> n;

    if (n < 2)
    {
        cout << "Se necesitan al menos 2 puntos para calcular las distancias.\n";
        return 1;
    }

    Point puntos[n]; // Arreglo de estructuras para almacenar las coordenadas (x, y)

    // Leer los puntos (manual o predeterminado)
    leerPuntos(puntos, n);

    // Ingresar el punto del usuario
    

    // Calcular la distancia más cercana

    int indiceMasCercano;
    // Mostrar el resultado
    mostrarResultado(puntos, indiceMasCercano, distancia);

    return 0;
}
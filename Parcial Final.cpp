#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
    double x, y;
};
double calcularDistancia(const Point &p1, const Point &p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
void leerPuntos(Point puntos[], int n)
{
    char respuesta;
    cout << "¿Desea ingresar los puntos manualmente? (s/n): ";
    cin >> respuesta;
    if (respuesta == 's' || respuesta == 'S')
    {
        for (int i= 0; i < n; i++)
        {
            cout << "Ingrese las coordenadas del punto " << i + 1 << " (x, y): ";
            cin >> puntos[i].x>> puntos[i].y;
        }
    }
    else
    {
        cout << "Usando puntos predeterminados...\n";
        puntos[0] = {0, 0};  
        puntos[1] = {3, 4};  
        puntos[2] = {6, 8};  
        puntos[3] = {9, 12}; 
    }
}
double calcularDistanciaMasCercana(Point puntos[], int n, const Point &pUsuario, int &indiceMasCercano)
{
    double distanciaMinima = calcularDistancia(pUsuario, puntos[0]);
    indiceMasCercano = 0;

    for (int i = 1; i < n; i++) {
        double dist = calcularDistancia(pUsuario, puntos[i]);
        if (dist < distanciaMinima) {
            distanciaMinima = dist;
            indiceMasCercano = i;
        }
    }

    return distanciaMinima;
}
double calcularDistanciaTotal(Point puntos[], int n)
{
    double distanciaTotal = 0.0;
    for (int i = 0; i < n - 1; i++) {
        distanciaTotal += calcularDistancia(puntos[i], puntos[i + 1]);
    }
    return distanciaTotal;
}
void mostrarResultado(Point puntos[], int indiceMasCercano, double distancia)
{
    cout << "El punto más cercano es: (" << puntos[indiceMasCercano].x << ", " << puntos[indiceMasCercano].y << ")\n";
    cout << "La distancia al punto más cercano es: " << distancia << endl;
}

int main()
{
    int n;
    cout << "Ingrese el número de puntos (mínimo 2): ";
    cin >> n;
    if (n < 2)
    {
        cout << "Se necesitan al menos 2 puntos para calcular las distancias.\n";
        return 1;
    }
    Point* puntos = new Point[n];
    leerPuntos(puntos, n);
    Point pUsuario;
    cout << "Ingrese las coordenadas del punto desde el que calcular la distancia (x, y): ";
    cin >> pUsuario.x >> pUsuario.y;
    int indiceMasCercano;
    double distancia = calcularDistanciaMasCercana(puntos, n, pUsuario, indiceMasCercano);
    mostrarResultado(puntos, indiceMasCercano, distancia);
    double distanciaTotal = calcularDistanciaTotal(puntos, n);
    cout << "La distancia total del recorrido por los puntos es: " << distanciaTotal << endl;
    return 0;
}
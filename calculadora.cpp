#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <time.h>
#include <math.h>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleTitle ("calculadoraaaaaaaaaaAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");

    float x, a, b, c;
    float y;
    float thing;
    float sum;
    int x1 = x;
    int y1 = y1;
ecuacion:
   cout << "que quieres hacer?" << endl;
   cout << "1=suma, 2=resta, 3=multiplicacion, 4=division, 5=elevar, 6=numero al azar, 7=suma de raices, 8=porcentaje, 9=raiz cuadrada, 10=logaritmo, 11=promedio 5 numeros" << endl;
   cin >> thing;

   if(thing == 1){
    cout << "\ningresa los numeros a sumar" << endl;
    cin >> x >> y;
    sum = x + y;
    cout << "el resultado es: " << sum;
   }

   if(thing == 2){
    cout << "\ningresa los numeros a restar" << endl;
    cin >> x >> y;
    sum = x - y;
    cout << "el resultado es: " << sum;
   }

   if(thing == 3){
    cout << "\ningresa los numeros a multiplicar" << endl;
    cin >> x >> y;
    sum = x * y;
    cout << "el resultado es: " << sum;
   }

   if(thing == 4){
    cout << "\ningresa los numeros a dividir" << endl;
    cin >> x >> y;
    sum = x / y;
    cout << "el resultado es: " << sum;
   }

   if(thing == 5){
    cout << "\ningresa los numeros a elevar" << endl;
    cin >> x >> y;
    sum = pow(x, y);
   }

   if (thing == 6){
    cout << "\ningresa dos numeros" << endl;
    cin >> x1 >> y1;
    srand(time(0));
        for(int x = x; x < 1; x++){
        }
        cout << x1 + rand() %(y1 +1 - x1) << endl;
   }

   if(thing == 7){
    cout << "\ningresa los numeros a sumar" << endl;
    cin >> x >> y;
    sum = sqrt(x) + sqrt(y);
    cout << "el resultado es " << sum << endl;
   }

   if(thing == 8){
    cout << "\ningresa el numero numero total y luego el numero para el porcentaje" << endl;
    cin >> x >> y;
    sum = (y*100)/x;
    cout << "\n" << y << " es el " << sum << "% de " << x << endl;
   }

   if(thing == 9){
    cout << "\ningresa el numero para raiz cuadrada" << endl;
    cin >> x;
    sum = sqrt(x);
    cout << "el resultado es " << sum << endl;
   }

   if(thing == 10){
    cout << "\ningresa el numero para logaritmo" << endl;
    cin >> x;
    sum = log(x);
    cout << "el resultado es " << sum << endl;
   }

   if(thing == 11){
    cout << "\ningresa los numeros para el promedio" << endl;
    cin >> x >> y >> a >> b >> c;
    sum = (x + y + a + b + c) / 5;
    cout << "el promedio es " << sum << endl;
   }

   else{
    cout << "\nesa no es una opcion\n" << endl;
    goto ecuacion;
   }

   return 0;
   }

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double iter {10000000};
    double i;
    double pipos {0}; /*Son los numeros positivos dentro de la serie*/
    double pineg {0}; /*Son los numeros negativos dentro de la serie*/

    for(i=1; i<=iter; i+=4){
        pipos += (1/i);
    }

    for(i=3; i<=iter; i+=4){
        pineg += (1/-i);
    }

    double pi = 4 * (pipos + pineg); /*A el resultado de la sucesion lo multiplico por 4 ya que el final de la misma es pi sobre 4*/

    cout << setprecision(7) << pi;
    
    return 0;
    }

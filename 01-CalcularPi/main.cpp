#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double numerador {1};
    double denominador {1}; 
    double pi {0};
    int signo {1};
    
    for (double i = 0; i <= (pi = 3.141592); ++i) {
    pi += signo * (numerador / denominador);
    denominador += 2; 
    signo *= -1;
    }

    cout << setprecision(7) << pi << endl;

    return 0;
    }

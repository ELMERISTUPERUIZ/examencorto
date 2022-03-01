#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  fstream file;
  file.open("C:/examen/entrada.txt");
  file << "1) Frase Polindromas: LA RUTA NATURAL "<<endl;
  file << "2) Frase Polindromas: SE VAN SUS NAVES  "<<endl;
  file << "2) Frase Polindromas: ACASO HUBO HUBOS ACA "<<endl;
  file.close();

  ofstream file2;
  file2.open("C:/examen/salida.txt");
  file << "SI SON POLINDROMAS"<<endl;
  file2.close();
  return 0;
}

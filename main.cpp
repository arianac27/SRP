#include <iostream>
#include <sstream>
using namespace std;

class Producto {
public:
void mostrarProducto(string nombre, double precio) {
  cout<<"Producto: "<<nombre<<endl;
  cout<<"Precio: "<<precio<<endl;
}
}

class Calculadora {
public:
double calcularTotal(double precio, int cantidad) {
  return precio*cantidad;
}
}
int main() {
  Producto p;
  Calculadora c;

p.mostrarProducto("Vestido", 20000);
double total = c.calcularTotal(20000, 5);
cout<<"Total: "<<total<<endl;

return 0;
}

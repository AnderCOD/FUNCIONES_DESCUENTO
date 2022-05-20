#include <iostream>
using namespace std;
void titulo()
{
    cout<<"BIENVENIDO A TIENDA AHORRERA " <<endl;
}

float descuentos(float desc)
{
    float descuento,total;
if (desc>10000) {
    descuento = desc * 0.25;
    total = desc - descuento;
    cout << "SU DESCUENTO DE " << desc << " ES DE " << descuento << endl;
    cout << "TOTAL A PAGAR ES: " << total << endl;
    return total;
}
else(desc<=10000);{
    descuento =desc*0.10;
    total = desc - descuento;
    cout << "SU DESCUENTO DE " << desc << " ES DE " << descuento << endl;
    cout << "TOTAL A PAGAR ES: " << total << endl;
    return total;
    }
}
int main() {
    float total;
    titulo();
cout<<"INGRESE EL MONTO GASTADO: " <<endl;
cin>>total;
    descuentos(total);
    return 0;
}

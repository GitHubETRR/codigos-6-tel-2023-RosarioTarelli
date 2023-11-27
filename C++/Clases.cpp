#include <iostream>
#include <string>

using namespace std;
#define CANT 30

class ListaNumerada {
  private: 
      string fecha;
      string equipo;
      string nombresJugadores[CANT];
  public: void agregarFecha(string);
      void agregarEquipo(string);
      void mostrarPartido();
      void agregarNombres(string[], int);
      void mostrarNombres(int);
};

void ListaNumerada::agregarFecha(string _fecha) {
  fecha = _fecha;
}

void ListaNumerada::agregarEquipo(string _equipo) {
  equipo = _equipo;
}

void ListaNumerada::mostrarPartido() {
  cout << "\t- Fecha del partido: " << fecha << endl;
  cout << "\t- Equipos rivales: " << equipo << endl;
}

void ListaNumerada::agregarNombres(string _nombre[], int numNombres) {
  for (int i = 0; i < numNombres; i++) {
    nombresJugadores[i] = _nombre[i];
  }
}

void ListaNumerada::mostrarNombres(int numNombres) {
  cout << "Lista de jugadores:\n";
  for (int i = 0; i < numNombres; i++) {
    cout << "\t" << i + 1 << ". " << nombresJugadores[i] << endl;
  }
}

int main() {
  ListaNumerada lista;
  string fecha, equipo;
  int numNombres;

  cout << "Fecha del partido: ";
  cin >> fecha;
  cout << "Equipos rivales: ";
  cin >> equipo;
  lista.agregarFecha(fecha);
  lista.agregarEquipo(equipo);
  
  cout << "¡Advertencia! El maximo de la lista de nombre es 30. Ingrese la cantidad de nombres: ";
  cin >> numNombres;
  string nombre[numNombres];

  cout << "\nIngrese los nombres de los jugadores:\n";
  cin.ignore();
  for (int i = 0; i < numNombres; i++) {
    cout << i + 1 << ": ";
    getline(cin, nombre[i]);
  }
  lista.agregarNombres(nombre, numNombres);

  cout << "\nDetalles del partido:\n";
  lista.mostrarPartido();
  lista.mostrarNombres(numNombres);
  return 0;
}

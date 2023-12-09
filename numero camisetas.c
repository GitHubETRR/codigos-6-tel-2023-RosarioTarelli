#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void imprimirLista(struct Nodo* );
void agregar(struct Nodo**, int); 
void guardarListaEnArchivo(struct Nodo*, const char*);
struct Nodo* cargarListaDesdeArchivo(const char*); 

int main() {
    struct Nodo* comienzo = NULL;
    int nuevoDato;
    char continuar;

    printf("Lista de números de las camisetas de las jugadoras pre partido.");
    do {
        printf(" Ingrese un número: ");
        scanf("%d", &nuevoDato);

        agregar(&comienzo, nuevoDato);

        printf("¿Desea ingresar otro número? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Lista de números de camisetas: ");
    imprimirLista(comienzo);

    guardarListaEnArchivo(comienzo, "lista.txt");
    printf("Lista guardada en el archivo 'lista.txt'.\n");

    struct Nodo* actual = comienzo;
    struct Nodo* siguienteNodo = NULL;

    while (actual != NULL) {
        siguienteNodo = actual->siguiente;
        free(actual);
        actual = siguienteNodo;
    }

    comienzo = cargarListaDesdeArchivo("lista.txt");

    printf("Lista cargada desde el archivo: ");
    imprimirLista(comienzo);

    actual = comienzo;

    while (actual != NULL) {
        siguienteNodo = actual->siguiente;
        free(actual);
        actual = siguienteNodo;
    }

    return 0;
}

void imprimirLista(struct Nodo* nodo) {
    while (nodo != NULL) {
        printf("%d -> ", nodo->dato);
        nodo = nodo->siguiente;
    }
    printf("NULL\n");
}

void agregar(struct Nodo** ref_comienzo, int nuevo_dato) {
    struct Nodo* nuevo_nodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    struct Nodo* ultimo = *ref_comienzo;

    nuevo_nodo->dato = nuevo_dato;
    nuevo_nodo->siguiente = NULL;

    if (*ref_comienzo == NULL) {
        *ref_comienzo = nuevo_nodo;  // en el caso de que la lista este vacia
        return;
    }

    while (ultimo->siguiente != NULL) {    // para llegar alf inal
        ultimo = ultimo->siguiente;
    }

    ultimo->siguiente = nuevo_nodo;  // insertas al final
}

void guardarListaEnArchivo(struct Nodo* comienzo, const char* nombreArchivo) {
    FILE* archivo = fopen(nombreArchivo, "w");

    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }

    while (comienzo != NULL) {
        fprintf(archivo, "%d\n", comienzo->dato);
        comienzo = comienzo->siguiente;
    }

    fclose(archivo);
}

struct Nodo* cargarListaDesdeArchivo(const char* nombreArchivo) {
    FILE* archivo = fopen(nombreArchivo, "r");

    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }

    struct Nodo* comienzo = NULL;
    int dato;

    while (fscanf(archivo, "%d", &dato) == 1) {
        agregar(&comienzo, dato);
    }

    fclose(archivo);

    return comienzo;
}

#include <stdio.h>
#define LIM 12

struct alumnos
{
  char nombre [LIM];
  char apellido [LIM];
  unsigned char edad;
  unsigned char promedio;
  unsigned char hermanos;
} alumno;

int eleccion;
void alum1();
void alum2();
void alum3();
void alum4();

int main()
{
  printf("Este programa es un registro para los alumnos de 6to TEL\nAlumnos:\n");
  printf("1: Abratte\n2: Altobelli \n3: Berardi \n4: Martinez\n");
 
  do {
    printf("Elija el número de alumno del que quiera ver los datos: ");
    scanf("%d", &eleccion);
 
    switch(eleccion)
    {
      case 1:
        printf("Datos alumno 1:\n");
        alum1();
        break;
 
      case 2:
        printf("Datos alumno 2:\n");
        alum2();
        break;
 
      case 3:
        printf("Datos alumno 3:\n");
        alum3();
        break;
 
      case 4:
        printf("Datos alumno 4:\n");
        alum4();
        break;

      default:
        printf("No está dentro de las opciones, intente nuevamente \n");
        break;
    }
  } while (eleccion < 1 || eleccion > 4);

  return 0;
}

void alum1()
{
  struct alumnos alumno1={"Francesco","Abratte",17,9,1};
  printf ("Nombre: %s \n", alumno1.nombre);
  printf ("Apellido: %s\n", alumno1.apellido);
  printf ("Edad: %d\n", alumno1.edad);
  printf ("Cantidad de hermanos: %d\n", alumno1.hermanos);
  printf ("Promedio: %d\n", alumno1.promedio);
}
 
void alum2()
{
  struct alumnos alumno2={"Dardo","Altobelli",17,9,0};
  printf ("Nombre: %s \n", alumno2.nombre);
  printf ("Apellido: %s\n", alumno2.apellido);
  printf ("Edad: %d\n", alumno2.edad);
  printf ("Cantidad de hermanos: %d\n", alumno2.hermanos);
  printf ("Promedio: %d\n", alumno2.promedio);
}
 
void alum3()
{
  struct alumnos alumno3={"Matias","Berardi",17,4,2};
  printf ("Nombre: %s \n", alumno3.nombre);
  printf ("Apellido: %s\n", alumno3.apellido);
  printf ("Edad: %d\n", alumno3.edad);
  printf ("Cantidad de hermanos: %d\n", alumno3.hermanos);
  printf ("Promedio: %d\n", alumno3.promedio);
}

void alum4()
{
  struct alumnos alumno4={"Gonzalo","Martinez",16,10,3};
  printf ("Nombre: %s \n", alumno4.nombre);
  printf ("Apellido: %s\n", alumno4.apellido);
  printf ("Edad: %d\n", alumno4.edad);
  printf ("Cantidad de hermanos: %d\n", alumno4.hermanos);
  printf ("Promedio: %d\n", alumno4.promedio);
}

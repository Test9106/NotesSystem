# Sistema de Control de Calificaciones

## Datos del Estudiante
- **Nombre:** Chris Joseph Jean Carty
- **Matrícula:** 2025-1965

## Descripción del Programa
Este programa en C++ de consola permite a "La Nueva Escuela" registrar, validar y procesar las calificaciones de un grupo de estudiantes de forma secuencial. El sistema fue construido exclusivamente con variables primitivas y bucles (`while`) para manejar todo el flujo de control, sin recurrir a arreglos ni funciones complejas.

## Datos de Entrada, Proceso y Salida
- **Entrada:** Se solicita al usuario la cantidad total de estudiantes (se valida que sea > 0). Por cada estudiante se ingresa su nombre y 4 calificaciones obligatorias (validadas en el rango de 0 a 100). Finalmente, se pide un carácter ('s' o 'n') para determinar si se procesa otro grupo.
- **Proceso:** 
  - Mediante acumuladores, se suman las 4 calificaciones introducidas para obtener el promedio individual (dividido entre 4.0).
  - Se evalúa condicionalmente si el promedio individual es mayor o igual a 70. Dependiendo del caso, se incrementan los contadores de `aprobados` o `reprobados`.
  - Se suman todos los promedios de los estudiantes en un acumulador global para calcular el promedio del grupo.
  - Se comparan secuencialmente los promedios de los estudiantes contra el mayor registro anterior para guardar el nombre y nota del estudiante sobresaliente.
- **Salida:** En pantalla se imprime el promedio de cada estudiante con su estado (`Aprobado` o `Reprobado`). Al finalizar el grupo, se presenta un bloque de resumen general incluyendo cantidad de aprobados/reprobados, promedio general y mejor estudiante, formateado a 2 decimales usando la cabecera `<iomanip>`.

## Justificación y Explicación de Bucles
- **Bucle de repetición de programa (`while` principal):** Envuelve toda la lógica para permitir ejecutar múltiples evaluaciones sin tener que cerrar y abrir la consola.
- **Bucle de validación de estudiantes (`while`):** Bloquea el avance del programa forzando la solicitud de datos hasta que el usuario introduzca un número mayor a 0.
- **Bucle iterador de estudiantes (`while`):** Utiliza un contador (`i`) para recorrer de uno en uno a los estudiantes requeridos, asegurando que a todos se les pidan los datos.
- **Bucle iterador de calificaciones (`while`):** Utiliza un contador (`j`) fijado en 4 para repetir las solicitudes de notas específicas para un solo estudiante.
- **Bucle de validación de notas (`while`):** Atrapa los errores de tecleo del usuario forzando a que las notas entren obligatoriamente en el rango matemático (0 - 100).

## Capturas de Pantalla de la Ejecución
*(Capturas demostrando el comportamiento normal y la correcta validación de errores matemáticos)*

### 1. Validación de Errores de Rango
![Errores](./imagenes/error_validacion.png)

### 2. Flujo de Salida Exitoso
![Salida Exitosa](./imagenes/salida_exitosa.png)
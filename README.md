# Ultimo Laboratorio

## Primera Pregunta

En el archivo `perfecto.cpp`, implemente un programa para mostrar todos los [numeros perfectos](https://es.wikipedia.org/wiki/N%C3%BAmero_perfecto) entre 1 y 1000.

Un numero `N`, se considera perfecto si:

* `N` es igual a la suma de *todos* sus divisores propios.
* Un divisor es propio si es menor que `N`.

Por ejemplo, 28 es un numero propio dado 
que es la suma de 1, 2, 4, 7 y 14.
Mostrar los numeros propios en la consola,
uno por linea:

```commandline
PS C:\laboratorio-cpp> g++ .\perfecto.cpp
PS C:\laboratorio-cpp> .\a.exe
6
28 
(siguen valores)
```

## Segunda Pregunta

En el archivo `fonetica.cpp`, implemente un programa para transformar apellidos a su 
correspondiente [código Soundex](https://en.wikipedia.org/wiki/Soundex).
El objetivo de Soundex es que los apellidos que 
*en ingles* se pronuncien de la misma forman, tengan asignado el mismo código.
Por ejemplo, tanto *Robert* como *Rupert* tienen
asignado el código *R163* (el algoritmo no es perfecto).

Para generar el código Soundex de un apellido, utilize el siguiente procedimiento:

1. La primera letra del código Soundex es la primera letra del apellido, en mayusculas.

2. Convertir cada letra del apellido a un digito, de acuerdo a la siguiente
tabla:

    |Código| Letra         |
    | ----| ----------------|
    | 0   | A E I O U H W Y |
    | 1   |  B F P V        |
    | 2   |  C G J K Q S X Z|
    | 3   |  D T            |
    | 4   |  M N            |
    | 5   |  L              |
    | 6   |  R              |

    Descartar los caracteres que no se encuentren en la tabla, como guiones (-) y espacios en blanco.

3. Remover digitos duplicados y consecutivos. Por ejemplo, el código `A122235` pasaria a ser 
`A1235`.

4. Remover todos los digitos cero (0).

5. Generar un código de longitud 4. En caso la longitud sea mayor, truncar. Caso contrario,
completar el código agregando ceros (0) 
a la izquierda.

El programa debe permitirle al usuario consultar el código Soundex de varios apellidos,
hasta ingresar `!!` indicando que ha terminado.
Por ejemplo:

```commandline
PS C:\laboratorio-cpp> g++ .\fonetica.cpp
PS C:\laboratorio-cpp> .\a.exe
Ingrese un apellido en ingles (!! para terminar): 
Vaska
El codigo Soundex para Vaska es V200
Ingrese un apellido en ingles (!! para terminar): 
Zelenski
El codigo Soundex para Zelenski es Z542
Ingrese un apellido en ingles (!! para terminar): 
!!
PS C:\laboratorio-cpp> 
```


# Tarea 3. Técnicas de diseño de algoritmos

---

##### Integrantes:
1. *Sebastián Gómez Gutiérrez* - *A01374843* - *CSF*

---
## 1. Aspectos generales

Las orientaciones de la tarea se encuentran disponibles en la plataforma **Canvas**.

Este documento es una guía sobre qué información debe entregar como parte de la tarea, qué requerimientos técnicos debe cumplir y la estructura que debe seguir para organizar su entrega.


### 1.1 Requerimientos técnicos

A continuación se mencionan los requerimientos técnicos mínimos de la tarea, favor de tenerlos presente para que cumpla con todos.

* El código debe desarrollarse en C++, cumpliendo con el último estándar [C++17](https://isocpp.org/std/the-standard).
* Toda la programación debe realizarse utilizando Programación Genérica.
* Deben utilizarse las [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).
* Todo el código debe estar correctamente documentado, siguiendo los lineamientos que aparecen en [Documenting C++ Code](https://developer.lsst.io/cpp/api-docs.html).
* Todo el código de la tarea debe alojarse en este repositorio de GitHub.
* Debe configurar su repositorio para que utilice el sistema de Integración Continua [Travis CI](https://travis-ci.org/).

### 1.2 Estructura del repositorio

El proyecto debe seguir la siguiente estructura de carpetas:
```
- / 			        # Raíz del repositorio
    - README.md			# Archivo con la información general de la actividad (este archivo)
    - sources  			# Códigos fuente con la solución
    - examples			# Archivos de ejemplo que pueden utilizarse para verificar que la solución funciona.
```

## 2. Solución

*Para el primer problema, que es el de ciclo Hamiltoniano, se utilizo un algoritmo avido. Este problema buscaba el ciclo de costo minimo recorriendo todos sus vertices, empezando en 0 y terminando en 0. Tambien se utilizo el metodo de Branch and Bound que consiste en marcar un limite en la mejor solucion posible. Esto para poder comparar otras soluciones y poder quedarnos con la que pueda dar el menor costo en el ciclo hamiltoniano.

Para el segundo problema, que es el de buscar un numero en un vector. se utilizo el metodo de divide y venceras para poder encontrar un numero dividiendo el vector hasta encontrar el número que cumpla con las condiciones (1<=i<=n) y (a[i]=i). Primero se llena el arreglo y despues se ordena con el metodo de BuubbleSort. Posteriormente se aplica el algoritmo de divide y venceras. Una vez obtenido el resultado de divide y venceras se comprueba la respuesta para determinar si el numero a buscar cumple con las condiciones establecidas.*

### 2.1 Pasos a seguir para utilizar la aplicación

*1.- Abrir la terminal.

2.- Acceder al directorio donde vas a clonar el repositorio. Ej: cd desktop.

3.- Usar el comando "git clone" seguido del link del repositorio, que es el siguiente: https://github.com/tec-csf/tc2017-t3-primavera-2020-SebastianG98 . Quedaria de la siguente manera: "git clone https://github.com/tec-csf/tc2017-t3-primavera-2020-SebastianG98".

4.- Acceder al clon/carpeta del repositorio desde la terminal, el cuál se guardó donde se hizo el "git clone". Ej: "cd tc2017-t3-primavera-2020-SebastianG98".

5.- Una vez que estés dentro de la carpeta del repositorio tendras que acceder a la carpeta de sources con el siguente comando: "cd sources".

6.- Deberas elejir que programa es el que quieres utilizar. Si quieres utilizar el programa hamiltoniano.cpp deberas ir al paso 7) y continuar con el 8). Si quieres utilizar el programa busquedaVector.cpp deberas ir al paso 9) y continuar con el 10).

7.- Para poder utilizar el programa de hamiltoniano primero deberas compilar con el siguiente comando: "g++ hamiltoniano.cpp -o hamiltoniano".

8.- El siguiente paso, para poder correrlo, es ingresar el siguiente comando: "./hamiltoniano".

9.- Para poder utilizar el programa de busquedaVector primero deberas compilar con el siguiente comando: "g++ busquedaVector.cpp -o busaquedaVector".

10.- El siguiente paso, para poder correrlo, es ingresar el siguiente comando: "./busquedaVector".
*

## 3. Referencias

*GeeksforGeeks. (2019). Traveling Salesman Problem using Branch And Bound. [Online]. Recuperado de: https://www.geeksforgeeks.org/traveling-salesman-problem-using-branch-and-bound-2/

ProgrammingAlgorithms.net (2019). Bubble Sort. [Online]. Recuperado de: https://www.programming-algorithms.net/article/39344/Bubble-sort*

ScienceDirect (2009). Branch-and-Bound Algorithm Design. [Online]. Recuperado de: https://www.sciencedirect.com/topics/computer-science/branch-and-bound-algorithm-design

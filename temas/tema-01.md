# Tema 1 - Introducción

El objetivo de la asignatura es que al concluir la misma el estudiante esté capacitado para resolver problemas, mediante la elaboración de programas desarrollados aplicando, de manera eficaz y eficiente, los fundamentos de la programación estructurada en el análisis, diseño e implementación de los mismos.

![Algoritmo](../img/tema-01-img-001.png)

En los primeros días de la informática los programas eran elaborados directamente en lenguaje de máquina (o en ensamblador). El lenguaje de máquina incentiva y prácticamente obliga al uso de saltos dentro del programa
(hacia adelante y hacia atrás). Esta práctica suele da lugar a una lógica
confusa que al ser representada en un diagrama revela una gran cantidad de
líneas que se cruzan y entrelazan por lo que se conoce como “lógica tipo
espagueti”:

Puesto que la mayoría de los programadores surgieron de ese ambiente, los primeros lenguajes de alto nivel (como Fortran, Basic y C) tenían (y aún tienen) un comando para realizar este tipo de saltos: el comando “goto”.

El problema surge cuando es necesario corregir, modificar y/o ampliar un programa, actividades inevitables en la producción de software y que, si no han sido convenientemente planificadas, consumen más tiempo y más recursos
que la elaboración del producto original.

Para un mantenimiento eficiente del software es imprescindible que la lógica de los diferentes programas que lo componen sea **fácilmente comprensible**, pues de lo contrario resulta más práctico elaborar un nuevo programa que tratar de entender y luego corregir el programa existente.

Es con este objetivo, el de facilitar el mantenimiento de software, que surge la Programación Estructurada (PE), la cual recoge las prácticas de programación que habían demostrado ser exitosas en la elaboración y mantenimiento de programas y que se resumen en los siguientes principios:

* **Dividir** un problema complejo en problemas más sencillos.

* Emplear **estructuras estándar** para construir la totalidad del programa.

* Emplear **tipos de datos a la medida**.

Si bien hoy en día los ambientes de desarrollo son en su mayoría orientados a objetos, los principios de la programación estructurada siguen siendo válidos dentro de los nuevos paradigmas y por lo tanto siguen siendo de utilidad práctica.

Pero la importancia de la programación estructurada no sólo es histórica, sino que sigue siendo de utilidad práctica, tanto así que, el núcleo de todos los sistemas operativos actuales, como Windows, Linux y Androide, son programa estructurados (no orientados a objetos).

### 1.1. La Programación modular (Descendente)

El primer principio, de la programación estructurada es conocido también como **programación modular** o **programación descendente**. Su aplicación es universal y expresa la misma intención que la frase “divide y vencerás”. Básicamente nos dice que se debe dividir un problema en problemas más pequeños y estos a su vez en otros, hasta que los mismos sean lo suficientemente sencillos como para ser resueltos independientemente.

Cada uno de los problemas en los que es dividido el problema principal se conoce como **módulo** y es la razón por la cual este principio es conocido también con el nombre de **“programación modular”**.

>Es importante aclarar que un módulo es considerado como tal sólo si resuelve **el problema de manera independiente**, es decir sin importar de donde vengan los datos ni donde o como vayan a ser empleados los resultados devueltos.

Este principio se conoce también como programación descendente (top-down) porque se parte de un problema complejo que se divide en problemas más sencillos, estos en otros más sencillos y así sucesivamente, descomponiendo el problema de arriba (del problema más complejo) hacia abajo (al problema más sencillo). No obstante, la solución por lo general es ascendente, pues se comienza por resolver los problemas más sencillos y se va subiendo en dirección a los problemas más complejos.

El dividir el problema en problemas más sencillos, facilita considerablemente el mantenimiento de los programas y e incentiva la reutilización de código. Un módulo que resuelve un problema específico, al ser independiente, puede ser empleado no sólo en el software para el cual fue elaborado, sino también en cualquier otro en el que se requiera resolver ese tipo de problema, de esa manera surgen las librerías que contienen módulos que pueden ser reutilizados en varios programas, reduciendo considerablemente el tiempo de desarrollo.

Además los módulos facilitan enormemente el mantenimiento y detección de errores, porque si en la elaboración de un programa se emplean módulos previamente probados y se produce un error, se sabe que el error no está en dichos módulos, sino en los módulos añadidos, e inclusive es relativamente sencillo identificar el módulo problemático, con lo que la corrección se reduce a la corrección de un sólo módulo.

---

### 1.2. Estructuras Estándar

## 🧠 Principio de claridad en la programación

El segundo principio busca que los programas sean **fáciles de entender**.

Cuando usamos estructuras estándar al programar, el código se vuelve más claro y fácil de mantener. En cambio, si usamos formas complicadas o poco comunes, puede volverse confuso.

### 📦 Estructuras básicas (según el teorema de programación estructurada)

1. **Secuencia** → instrucciones que se ejecutan una tras otra.
2. **Selección** → decisiones con `if`, `then`, `else`.
3. **Iteración** → bucles con `while`, `for`, etc.

Aunque estas estructuras son la base, a veces usarlas de forma rígida puede generar lógicas difíciles de seguir. Por eso, los lenguajes de programación suelen ofrecer formas de modificarlas o extenderlas.

### 🎯 ¿Qué se considera estructura estándar?

Una estructura estándar es aquella que tiene **una única entrada y una única salida**. Esto ayuda a mantener la claridad del código, que es precisamente el objetivo principal de este principio.

### 1.3. Tipos de datos a la medida

## 🔒 Principio de validación de datos

Este principio tiene como objetivo **evitar errores** al recibir o mostrar información en un programa.

En otras palabras, se busca que los datos que el usuario ingresa sean correctos desde el principio, y que los resultados que el programa devuelve también estén bien presentados.

### 🛠️ ¿Cómo se aplica este principio?

La forma más común de aplicarlo es a través de la **validación de datos**: se limita la entrada para que el usuario solo pueda proporcionar información válida. Así se previenen fallos y se mejora la calidad del programa o módulo.

> En resumen: validar bien lo que entra al sistema = menos errores y más confiabilidad.

### 1.3. Lenguaje de programación a emplear

## 🧰 ¿Por qué usamos C++ para aprender programación?

El lenguaje que se utiliza para enseñar fundamentos de programación en esta materia es **C++**, porque permite trabajar cerca del "corazón" del computador y entender cómo se organiza la información, cómo se ejecutan instrucciones, y cómo se gestionan los recursos. Es ideal para aprender conceptos clave como:

- estructuras de control (`if`, `for`, `while`)
- tipos de datos y memoria
- compilación y depuración

Además, C++ es un lenguaje ampliamente usado en la industria, lo que lo convierte en una excelente base para cualquier programador.

---

## 🔧 Instalación del compilador MinGW

Para que puedas compilar y ejecutar tus programas en C++, necesitas un **compilador**. En este curso se utiliza **MinGW**, que puedes descargar desde [http://www.mingw.org](http://www.mingw.org).

Una vez instalado MinGW, es necesario que el sistema lo reconozca. Para esto hay que **añadir la ruta al directorio `bin` de MinGW en la variable de entorno `Path`** de Windows.

### 📝 Pasos para configurar el compilador:

1. Instala MinGW y ubica la carpeta donde está el directorio `bin`. Ejemplo típico: `C:\MinGW\bin`
2. Haz clic derecho en el ícono **"Este equipo"** y selecciona **"Propiedades"**.
3. Ingresa a **"Configuración avanzada del sistema"**.
4. Haz clic en **"Variables de entorno"**.
5. En el panel inferior, busca la variable **"Path"** y haz clic en **"Editar..."**.
6. Al final del campo de texto, **sin borrar nada**, añade:

### 1.4. Primeros programas en C++

## 🔧 Primeros pasos: compilar desde cero

En este curso se comienza escribiendo programas usando:

- El **bloc de notas**, **Visual Studio Code**, **Neovim**, o el que prefieran como editor de texto.
- La **ventana de comandos (cmd)** para compilar y ejecutar.

Esto ayuda a entender qué ocurre realmente cuando se crea y corre un programa, sin que todo lo haga automáticamente un entorno gráfico.

### 📂 Crear una carpeta para tus programas

Desde el símbolo del sistema (`cmd`), puedes hacer lo siguiente:

```cmd
mkdir C:\dev\programas\c++\pruebas
cd C:\dev\programas\c++\pruebas
```

---

## ✍️ Escribir tu primer programa

Abre el bloc de notas escribiendo:

```cmd
notepad hola.cpp
```

Escribe tu código, guárdalo como `hola.cpp` y asegúrate de que tenga un salto de línea al final del archivo para evitar advertencias del compilador.

---

## 🛠️ Compilar con MinGW y g++

Desde la terminal:

```cmd
g++ -c hola.cpp     :: crea el archivo objeto hola.o
g++ -o hola.exe hola.o   :: genera el ejecutable hola.exe
```

Y para ejecutarlo:

```cmd
hola.exe
```

Verás el mensaje `¡¡Hola Mundo!!` si todo está correcto.

---

## 📚 Sobre las librerías en C++

Aunque puedes usar librerías de C como `<stdio.h>`, es mejor emplear sus versiones modernizadas en C++, que tienen nombres como `<cstdio>`.

Además, al usar funciones propias de C++ como `cout` y `endl`, necesitas incluir:

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "¡Hola Mundo!" << endl;
  return 0;
}
```

- `cout` escribe en pantalla.
- `<<` se usa para encadenar varios elementos.
- `endl` agrega un salto de línea (como `\n`).

---

## ✅ ¿Qué se aprende con esta práctica?

- Cómo se crea, compila y ejecuta un programa desde cero.
- La diferencia entre librerías de C y C++.
- Fundamentos de la programación estructurada.

> Para proyectos grandes, se usará Eclipse, pero este enfoque inicial ayuda a entender cómo funciona todo desde adentro.

### 1.5. Ejemplos

## 🧮 1. Programa para calcular el cubo de un número

### 📌 ¿Cuál es el objetivo?
Crear un programa que **lea un número**, **calcule su cubo** (es decir, lo multiplique por sí mismo tres veces), y luego **muestre el resultado** en pantalla.

Aunque parece sencillo, vamos a aplicar los **tres principios de la programación estructurada**, que ayudan a mantener el código claro, ordenado y fácil de mantener.

---

### 🔍 Paso a paso usando los principios

#### 1. Dividir el problema en partes pequeñas (modularidad)

El problema se puede resolver fácilmente si lo separamos en tres tareas:

- **Leer el número** → Se puede hacer sin importar qué se va a hacer con él.
- **Calcular el cubo** → Solo se necesita el número, no importa de dónde vino.
- **Mostrar el resultado** → No depende de cómo se obtuvo el número ni el cubo.

Este enfoque modular permite que cada parte se entienda y se pruebe por separado.

#### 2. Usar estructuras estándar (secuencia)

Como es un programa simple, no hace falta complicarse: con una secuencia de instrucciones (una tras otra) es suficiente para resolverlo.

#### 3. Validar los datos (lo mejor posible)

Aunque no tenemos mucha información sobre el tipo de número que se va a ingresar (si es entero, decimal, grande o pequeño), se usará el tipo **`double`**, porque:
- Soporta números reales e incluye a los enteros.
- Tiene buena capacidad para manejar la mayoría de valores frecuentes.

Más adelante, se podrán aplicar estructuras como `if` o `while` para validar mejor los datos, pero por ahora lo importante es entender cómo se arma el proceso básico.



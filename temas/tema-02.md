# Tema 2 - Secuencia

## 📌 2.1. Tipos de datos en C/C++

En este tema vamos a repasar los **tipos de datos básicos en C y C++**, que son fundamentales para aplicar correctamente el tercer principio de la programación estructurada:  
> _“Usar tipos de datos adecuados a lo que queremos representar.”_

---

### 🔤 Tipos básicos

En C/C++, existen cinco tipos principales de datos:

- `char`: caracteres
- `int`: números enteros
- `float`: decimales con precisión sencilla
- `double`: decimales con más precisión
- `void`: ausencia de tipo (por ejemplo, funciones que no devuelven nada)

Además, podemos aplicar **modificadores** como:

- `signed`: permite números negativos
- `unsigned`: solo números positivos
- `short`: enteros pequeños
- `long`: enteros más grandes

Combinando los tipos y los modificadores, se obtiene un buen abanico de opciones. A continuación, una tabla con ejemplos y rangos aproximados:

---

### 🧮 Tabla de tipos y rangos

| Tipo                | Tamaño (bits) | Rango / Precisión                   |
|---------------------|----------------|-------------------------------------|
| `char`              | 8              | -127 a 127                          |
| `unsigned char`     | 8              | 0 a 255                             |
| `signed char`       | 8              | -127 a 127                          |
| `int`               | 32             | -2,147,483,647 a 2,147,483,647      |
| `unsigned int`      | 32             | 0 a 4,294,967,295                   |
| `signed int`        | 32             | -2,147,483,647 a 2,147,483,647      |
| `short int`         | 16             | -32,767 a 32,767                    |
| `unsigned short int`| 16             | 0 a 65,535                          |
| `signed short int`  | 16             | -32,767 a 32,767                    |
| `long int`          | 32             | -2,147,483,647 a 2,147,483,647      |
| `unsigned long int` | 32             | 0 a 4,294,967,295                   |
| `float`             | 32             | ~6 dígitos de precisión decimal     |
| `double`            | 64             | ~10 dígitos de precisión decimal    |
| `long double`       | 80             | ~10 dígitos de precisión decimal    |

📝 *Los tamaños y rangos pueden variar según el compilador o arquitectura del procesador que estés usando.*

---

### ✅ Tipos adicionales en C++

C++ también incluye estos dos tipos muy usados:

- `bool`: tipo lógico (`true` o `false`)
- `string`: cadenas de texto

---

## 2.2. 🛠️ Operadores en C/C++

Como los usamos todo el tiempo, vale la pena repasar los **operadores básicos** que nos ofrece C/C++. Son herramientas para realizar cálculos y manipular variables.

---

### ➕ Operadores aritméticos

| Operador | Función                     |
|----------|-----------------------------|
| `+`      | Suma                        |
| `-`      | Resta / Negación unaria     |
| `*`      | Multiplicación              |
| `/`      | División                    |
| `%`      | Módulo (residuo de división)|
| `++`     | Incremento (sumar 1)        |
| `--`     | Decremento (restar 1)       |

🧠 **Dato útil:**  
- Si colocas `++` o `--` **antes** de la variable (`++x`), primero se modifica su valor y luego se usa.  
- Si va **después** (`x++`), primero se usa su valor original y **después** se incrementa o decrementa.

---

### 🧮 Operadores de asignación compuesta

Estos operadores permiten abreviar operaciones comunes. Si `x = 9` y `y = 3`:

| Operador | Ejemplo | Equivalente        | Resultado `x` |
|----------|---------|--------------------|----------------|
| `+=`     | `x += y`| `x = x + y`        | `12`           |
| `-=`     | `x -= y`| `x = x - y`        | `6`            |
| `*=`     | `x *= y`| `x = x * y`        | `27`           |
| `/=`     | `x /= y`| `x = x / y`        | `3`            |
| `%=`     | `x %= y`| `x = x % y`        | `0`            |

🧠 **Importante:**

La lógica detrás de los problemas secuenciales es bastante directa, así que **no hace falta usar diagramas de flujo** para representar estos operadores.


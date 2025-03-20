# Actividad 1: Pipeline de compilación

## ¿Cuál es la diferencia entre un lenguaje compilado y uno interpretado?

### Lenguaje compilado
- El código fuente es traducido completamente a código máquina antes de ejecutarse, mediante un programa llamado compilador.

- El resultado es un archivo ejecutable independiente que puede correr sin necesidad del código fuente.

- Suelen ser más rápidos en ejecución porque el código ya está optimizado y convertido en instrucciones nativas para el hardware.

- Ejemplos: C, C++, Rust, Go.


### Lenguaje interpretado
- El código fuente es ejecutado línea por línea por un programa llamado intérprete, sin generar un archivo binario independiente.

- Son más flexibles y portables, pero generalmente más lentos en ejecución, ya que cada línea debe traducirse en tiempo real.

- Ejemplos: Python, JavaScript, PHP, Ruby.

---

# 1. Visualizando cada etapa

## Codigo Fuente

![Main.c](../Actividad_1/Imagenes/Main.c.png)

- Este es el codigo fuente, esta escrito en c y es la base o el primer paso para empezar el proceso de compilación.

## Preprocesador

![Main.c](../Actividad_1/Imagenes/Main.i.png)

- Aqui iniciamos el proprocesador, lo que pude observar es que es un archivo muy extenso en comparacion a los otros archivos. Y si uno lo observa detalladamente se da cuenta efectivamente que se encarga de hacer sustituciones.

## Compilador

![Main.s](../Actividad_1/Imagenes/Main.s.png)

- Este vuelve a ser un archivo corto y de hecho se parece bastante al codigo fuente; solo que esta en un lenguaje muy diferente que no entendemos.

## Ensamblador

![Main.o](../Actividad_1/Imagenes/Main.o.png)

- El archivo esta en binario por lo que visual studio code, no nos puede mostrar el contenido del archivo, sin embargo nos da una pequeña visualizacion de caracteres raros.

## Linker

![Main](../Actividad_1/Imagenes/Main.png)

- Este es el ultimo paso del compilador, es un ejecutable .exe y al igual que el archivo .o del ensamblador, esta en binario, por lo que visual no nos puede mostrar el contenido, pero en este punto nuestro codigo en C, ya paso por todo el proceso de compilacion y esta listo nuestro ejecutable.

## Conclusiones sobre el proceso de compilacion

El proceso de compilacion en general, es sencillo solo hace uso de un comando y despues solo hay que cambiar la extencion del archivo. Sin embargo si me parece muy interesante lo que hay detras de los compiladores, porque no es solo darle al boton compilar y ya; sino conocer todo el proceso que debe hacer el computador para leer y compilar tu codigo en c y transformarlo varias veces hasta que sea un ejecutable.

---

# Preguntas de Control de Comprensión

#### 1. ¿Cuál es la función principal del preprocesador en C?

- R/ El preprocesador en C se encarga de preparar el código fuente antes de la compilación, reemplazando directivas como #include, expandiendo macros con #define, y gestionando compilación condicional con #ifdef. Su objetivo es generar un archivo fuente intermedio sin directivas de preprocesador, listo para ser compilado.

#### 2. ¿Por qué se dice que el código objeto (.o) no es directamente ejecutable?
- R/ El código objeto (.o) no es directamente ejecutable porque contiene instrucciones en lenguaje máquina sin estar completamente ensambladas con otros módulos y bibliotecas. Aún necesita pasar por el linker, que une varias unidades de código y resuelve referencias externas para formar un ejecutable.

#### 3. ¿Qué diferencia existe entre el código ensamblador (.s) y el código objeto (.o)?
- R/ El código ensamblador (.s) es un archivo en lenguaje ensamblador generado a partir del código C, que todavía es legible por humanos. En cambio, el código objeto (.o) es la versión binaria del ensamblador, ya en formato de máquina, pero aún no enlazado con otros archivos o bibliotecas.

#### 4. ¿Para qué sirve la opción S en GCC?
- R/ La opción -S en GCC detiene la compilación justo después de la conversión a ensamblador, generando un archivo .s. Esto es útil para analizar el código ensamblador generado por el compilador y optimizar el rendimiento del programa.

#### 5. ¿Qué sucede si omitimos la etapa de linker?
- R/ Si se omite la etapa de linker, el programa no podrá ejecutarse porque los archivos objeto (.o) quedarán sin unir. Esto impedirá resolver referencias a funciones externas y no se generará un archivo binario ejecutable, causando errores en tiempo de compilación.
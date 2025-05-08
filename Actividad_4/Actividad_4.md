# Actividad 4: Funciones

## 9. Preguntas de Control de Comprensión

1. ¿Para qué sirve un prototipo de función?

- R/ Un prototipo de función le dice al compilador el nombre, el tipo de valor que retorna y los tipos de los parámetros que usará una función. Se usa para que el compilador verifique llamadas a funciones antes de que se definan completamente en el código, ayudando a detectar errores como el uso incorrecto de tipos o número de argumentos.


2. ¿Cuál es la diferencia entre parámetros y argumentos?
    - R/ Parámetros: Son las variables definidas en la declaración o definición de una función. 
    
    Ejemplo:
    
    ```
    void saludar(char nombre[]);
    ```

        - char nombre[] es un parámetro.

    - Argumentos: Son los valores reales que se pasan a la función cuando se llama. 
    
    Ejemplo:

    ```
    saludar("Juan");
    ```
        - "Juan" es un argumento.



3. ¿Qué sucede si no incluyes el archivo de cabecera de una función de biblioteca estándar?

- R/ Si no incluyes el archivo de cabecera correspondiente (por ejemplo, #include <stdio.h>), el compilador:

No conoce el prototipo de la función, por lo que puede asumir una firma incorrecta.

Esto puede llevar a errores de compilación o ejecución, especialmente si la función espera tipos específicos de parámetros o retorna valores que se usan incorrectamente.

4. ¿Por qué `main()` es especial en C?

- R/ main() es especial porque es el punto de entrada de todo programa en C. Es la primera función que se ejecuta cuando corre el programa. Desde main() se pueden llamar otras funciones, pero sin main(), no puede comenzar la ejecución del programa.

5. ¿Qué ocurre si una función no retorna ningún valor?

- R/ Si una función no retorna valor, se declara con el tipo **void**. Esto significa que:

    - No se puede usar su resultado en expresiones o asignaciones.

    - Es útil cuando una función solo realiza acciones (como imprimir en pantalla) sin devolver datos.

Ejemplo: 
```
void mostrarMensaje() {
    printf("Hola mundo\n");
}
```
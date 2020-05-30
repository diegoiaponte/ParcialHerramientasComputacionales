# Parcial Herramientas Computacionales
***
Este repositorio contiene 2 archivos:
  * parcial.c
  * pregunta2.txt

## parcial.c
 - **Enunciado-** La mercatería se encuentra de aniversario y ha decidido otorgar descuentos a los productos seleccionados y dependiendo también si es estudiante o profesor, pues tienen descuentos diferentes. Se desea saber entonces por cada compra cuánto debe pagar el usuario en caja. Para ello:
   * Pida por teclado la siguiente información para el cliente: cédula y rol: profesor o estudiante
   * Registrar el producto a comprar: código producto, cantidad de unidades y precio del producto.
   * Los descuentos están dados de la siguiente forma: los estudiantes tienen un 40 % de descuento mientras que los profesores tienen un 20 % de descuento.
   
Al final el procedimiento por cada cliente deberá imprimir el valor a pagar por sus productos de la forma: ”El Rol con cedula Numero, debe pagar Valor por el producto Codigo”
Ejemplo: ”El profesor con Cedula 1454898 debe pagar $12.900 por el producto 076”.
Tenga en cuenta que este valor final a pagar corresponde al precio de cada producto por la cantidad llevada menos el descuento otorgado, debe imprimir el rol y la cédula de cada cliente y el código del producto llevado en el mensaje.
  - **Explicación del algoritmo:** 
    1. Primero se llama la libreria <stdio.h> y <string.h>, luego se crea la función principal. 
    2. Se inician declarando las variables según su naturaleza (caracteres, números enteros o decimales), se declaran tanto entradas como salidas
    3. Se empiezan a pedir los datos para guardarlos en las entradas anteriormente creados (precio, cantidad, código, rol).
    4. Se identifica el rol y según este se establece un descuento.
    5. Se calcula el valor con el descuento aplicado ((precio * cantidad)-(precio * cantidad * descuento)).
    6. Se muestrán algunos de los datos de entrada junto a la salida (costo final)
  - **Lenguaje de programación-** _parcial.c_, se encuentra implementado en el lenguaje de programación _C_.  

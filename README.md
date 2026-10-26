# SRP
1. ¿Qué es?
El principio de responsabilidad unica es un principio SOLID que nos dice que una clase debe tener una única responsabilidad, o sea, solo tener una tarea.
2. Implementación en este pequeño proyecto.
En este caso se crearon dos clases especialmente para una tienda de ropa: una para el Producto que se encarga de mostrar el nombre de la prenda y su precio. Y otra clase Calculadora que se encarga del costo total de las prendas.
Esto ayuda a tener mejor orden y no meter todo en una sola clase, como por ejemplo: un descuento. Este en vez de meterse en dos lugares pasa directamente a la calculadora.

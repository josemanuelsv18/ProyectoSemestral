# ProyectoSemestral
Semestal principios de programacion algoritmo estacionamientos

\1. En los estacionamientos del edificio N°3 en el Campus Central de la UTP, existe un espacio
para ser alquilados a los docentes o estudiantes. La administración desea aplicar nuevas reglas
y probar un prototipo de control para el acceso controlado de vehículos. Para esta prueba se
habilitarán 10 estacionamientos que estará ubicado en dos filas de a 5.

En un registro habrá 15 vehículos que tendrán acceso a utilizar los 10 estacionamientos. Hay
que tomar en cuenta que los horarios son variados por lo que pueden entrar y salir del espacio
reservado.

Para las funcionalidades de este prototipo, se desea tener un menú controlado por números
enteros, organizado de la siguiente manera.

\1. Ver los estacionamientos ocupados y disponibles.

\2. Acceder al estacionamiento.

\3. Salir del estacionamiento.

\4. Registro de acceso.

\5. Ver el listado de vehículos autorizados para acceder al espacio reservado.

\6. Salir del sistema.

En la opción N°1 se debe apreciar cuales son los espacios ocupados y los disponibles.

En la opción N°2 el operador asignará un espacio al vehículo, siempre y cuando el número de
placa exista dentro del registro de los 15 vehículos autorizados. En esta búsqueda se debe
mostrar el nombre del propietario del vehículo; además, en esta opción se debe mostrar los
espacios disponibles.

En la opción N°3 el operador habilitará el espacio para que quede disponible, esta búsqueda
debe hacerse a través del número de placa.

En la opción N°4 en esta funcionalidad deberá mostrar el listado de todos los vehículos y sus
propietarios que han accedido al estacionamiento.

En la opción N°5 el operador podrá desplegar en la pantalla el listado de los vehículos
autorizados (Número de placa y propietarios del vehículo).

En la opción N°6 el operador podrá salir del sistema.

El prototipo deberá presentar en su pantalla principal la cantidad disponible de estacionamiento.

El programa deberá controlar algunos aspectos, tales como: no permitir acceder a más de 10
vehículos, no permitir acceder a un vehículo que no esté autorizado, no reservar el mismo
espacio ya ocupado, entre otros que considere.

Para efecto de errores de tipos de datos en la lectura, se asumirá que el operador escribirá los
datos del tipo correcto.

Como proponente de esta solución, deberá crear un listado de 15 placas de tipo alfanumérico y
sus respectivos dueños como datos de prueba. Para esto deberá usar arreglos e inicializarlo
con valores para el funcionamiento del prototipo.

\*Para la prueba del programa en C. deberá utilizar todas las opciones; además, de validar
algunos controles del programa. Ejemplo, ingresar con un número de placa no autorizado.

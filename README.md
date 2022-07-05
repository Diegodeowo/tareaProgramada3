# Tarea Programa 3 - Libreria

Este libreria está pensada para que un programa cliente pueda usarla y así facilitar sus tareas.

## Autor
Programa realizado por Juan Diego Soto Castro, carnet: C07722. Estudiante de la Universidad de Costa Rica a modo de tarea programada del curso: Programación II.

Github: Diegodeowo

E-mail: juan.sotocastro@ucr.ac.cr

## Como ejecutar el código

Para compilar la librería es necesario ejecutar el siguiente comando:

```bash
make
```
Esto ya permite utilizar la librería y esta estaría compilada.

En caso de querer compilar el programa y no la librería se puede utilizar el comando:
```bash
make compile
```
y luego de esperar el tiempo de compilación, abrir el archivo con el comando:
```bash
./bin/a
```
## Como ejecutar GTEST
### En caso de querer realizar los test de la librería:
```bash
make test
```
# Estructura del archivo binario

| Nombre del campo | Tipo | Tamaño  |
|---|---|---|
| ID | Entero |  |
| Nombre | String  | 20  |
| Existencia  | int|  |

## Contribuidores:
- Mauricio Ulate: Profesor y guía del proyecto.
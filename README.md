[⬅️ Volver a "Recopilación de proyectos con Qt"](https://github.com/SantiagoBaeza/Recopilacion-proyectos-Qt)

# Gráfico con QCustomPlot

Este proyecto implementa un gráfico sencillo en Qt utilizando la librería externa **QCustomPlot**.  
Se integró la DLL correspondiente y se configuró el proyecto para enlazar los archivos necesarios, permitiendo graficar funciones matemáticas básicas mediante señales y slots.

---

## Contexto

En mis primeros pasos con librerías externas en Qt, desarrollé ejercicios complementarios orientados a reforzar conocimientos sobre integración de recursos y visualización de datos.  
Este proyecto corresponde a una práctica inicial con **QCustomPlot**, donde se grafican funciones simples (`sin(x)` y `cos(x)`) a partir de puntos generados en tiempo de ejecución. El objetivo principal fue afianzar el uso de **DLLs**, la conexión de botones a funciones específicas y la representación gráfica de datos en una interfaz.

---

## Capturas

- **Captura 01**: Gráfico generado de la función `sin(x)`.  
  ![GraficoSin](https://github.com/SantiagoBaeza/Primer-gr-fico-con-QCustomPlot/blob/main/01_captura.jpg)

- **Captura 02**: Gráfico generado de la función `cos(x)`.  
  ![GraficoCos](https://github.com/SantiagoBaeza/Primer-gr-fico-con-QCustomPlot/blob/main/02_captura.jpg)

---

## Funcionalidad clave

- Integración de la librería **QCustomPlot** mediante DLL.  
- Un **QPushButton** que, al hacer clic, genera puntos de `y = sin(x)` y los dibuja.  
- Un segundo **QPushButton** que grafica `y = cos(x)`.  
- Configuración de ejes (`x`, `y`) y etiquetas dinámicas.  
- Uso de **rescaleAxes()** y **replot()** para ajustar automáticamente la visualización.  

---

## Tecnologías utilizadas

- Qt (C++), señales y slots  
- Librería externa: **QCustomPlot** (DLL)  
- Widgets: QPushButton, QCustomPlot  
- Configuración de proyecto con `.pro` para enlazar librerías externas  

---

## Comentarios finales

Los archivos del proyecto están incluidos en este repositorio para que cualquier persona pueda descargarlos y compilarlos localmente en **Qt** con la librería **QCustomPlot**.  
De esta manera, es posible revisar el código, ejecutar la aplicación y comprobar tanto la integración de la DLL como la generación de gráficos en tiempo real. Se agrego la carpeta QtParserPlot.zip la cual contiene la DLL de QCustomPlot y tambien contiene las de MuParser las cuales se van a usar en el futuro, con el fin de que esta DLL sea reutilizable las coloque ambas en el mismo lugar, esa carpeta se debe colocar junto a las carpetas del disco local C: (del ordenador) para acceder desde el codigo ahi.   

Este ejercicio tiene como objetivo servir de práctica inicial en la **visualización de datos con Qt**, reforzar el manejo de librerías externas y dejar registro de mis avances en programación gráfica.

---

> 🧩 Estos espacios están en construcción y se actualizan de forma frecuente.

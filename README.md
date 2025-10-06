# 🦾 Unidad 6 – C++ Avanzado para Robótica (ROS)

Este paquete, **`unit6_exercises`**, forma parte del curso de **C++ Avanzado para Robótica**, y contiene ejemplos prácticos sobre el uso de **templates**, **especialización de clases**, **callbacks ROS**, **funciones lambda**, y conceptos de **concurrencia (multithreading)** en C++.

---

## 📘 Contenido de la Unidad

### 🔹 1. Templates y Especialización
Aprendemos a crear clases y funciones genéricas usando **templates**, y a especializarlas para diferentes tipos de mensajes ROS:
- `sensor_msgs::Image`
- `sensor_msgs::PointCloud2`
  
Ejemplo de archivos:
- `specialised_complete.h`
- `specialised_complete.cpp`
- `main_specialised_complete.cpp`

📸 **Casos prácticos:**
- Detección de bordes en imágenes (Edge Detection)
- Conversión de nubes de puntos a imágenes de profundidad (PointCloud → Depth Image)

---

### 🔹 2. Funciones Lambda
Introducción a las **funciones anónimas (lambdas)** en C++.  
Ejemplo práctico: `lambda_basics.cpp`

Temas cubiertos:
- Sintaxis general de lambdas  
- Captura de variables por valor `[=]` y por referencia `[&]`
- Uso del modificador `mutable`
- Ejecución inline para mejorar eficiencia

---

### 🔹 3. Concurrencia y Multithreading
Introducción a la creación de **hilos de ejecución paralelos** en C++ con la librería `<thread>`:
- Creación de threads con `std::thread`
- Uso de `join()` y `detach()`
- Prevención de terminación prematura de hilos
- Compilación con soporte de hilos (`-pthread`)

---

## ⚙️ Ejecución

### Compilación del paquete
Desde tu workspace de ROS:

```bash
cd ~/catkin_ws
catkin_make
source devel/setup.bash

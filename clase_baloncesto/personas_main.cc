/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Jun 13 2024
  * @brief Este programa es el principal de la clase persona
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>
#include "personas.h"


//función principal del programa
int main() {
  Equipo_baloncesto Equipo1;
  std::string cadena;
  while(std::cin >> cadena) {
    if (cadena == "Puesto," || cadena == "apellido," || cadena == "nombre," || cadena == "altura," || cadena == "peso," || cadena == "edad") {
      continue;
    } else {
      for(int i = 0; i < 12; ++i) {
        
        std::cin >> cadena;
      }
      if (cadena != "Puesto," && cadena != "nombre,apellido") {
        
        std::cin >> cadena;
        for(int i = 0; i < 6; ++i) {
          
          std::cin >> cadena;
        }
        for (int i = 0; i < 5; ++i) {
          
          std::cin >> cadena;
        }

      } else {
        continue;
      }
      
    }
  }

  return 0;
}

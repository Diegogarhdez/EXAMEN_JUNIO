/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Jun 13 2024
  * @brief Este programa incluye la definición de los metodos de la clase Equipo_baloncesto
  * @bug There are no known bugs
  */

#include "personas.h"

/** @brief Esta función calcula la edad media del equipo de baloncesto
 *  @param 
 *  @return retorna la media de edad de los jugadores
*/
double Equipo_baloncesto::Edad_media() {
  double media = 0.0;
  for (int i = 0; i < jugadores_.size(); ++i) {
    media += jugadores_[i].Get_edad();
  }
  return (media / jugadores_.size());
}

/** @brief Esta funcion calcula el peso medio del equipo de baloncesto
 *  @param
 *  @return la media de peso de todos los jugadores
*/
double Equipo_baloncesto::Peso_medio() {
  double media = 0.0;
  for (int i = 0; i < jugadores_.size(); ++i) {
    media += jugadores_[i].Get_peso();
  }
  return (media / jugadores_.size());
}

/** @brief Esta funcion calcula la altura media del equipo de baloncesto
 *  @param 
 *  @brief la media de la altura de los jugadores
 * 
*/
double Equipo_baloncesto::Altura_media() {
  double media = 0.0;
  for (int i = 0; i < jugadores_.size(); ++i) {
    media += jugadores_[i].Get_altura();
  }
  return (media / jugadores_.size());
}
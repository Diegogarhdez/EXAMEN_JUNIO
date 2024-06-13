/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Jun 13 2024
  * @brief Este programa incluye la clase persona con la herencia de las clases hijas jugador, entrenador y asistente
  * @bug There are no known bugs
  */

#ifndef PERSONAS_H_
#define PERSONAS_H_


#include <iostream>
#include <string>
#include <vector>

//Esta es la definicion de la clase persona
class Persona {
 public:
  //constructor de la clase (inline)
  Persona() { }
  //getters correspondientes a cada atributo;
  std::string Get_nombre() const { return nombre_; }
  std::string Get_apellidos() const { return apellidos_; }
  std::string Get_DNI() const { return DNI_; }
  int Get_edad() const { return edad_; }
  //setter de cada atributo
  void Set_nombre(const std::string& nombre);
  void Set_apellidos(const std::string& apellidos) { apellidos_ = apellidos;}
  void Set_edad(const int& edad) {edad_ = edad;}
  void Set_DNI(const std::string& DNI) {DNI_ = DNI;}
 private:
  std::string nombre_;
  std::string apellidos_;
  int edad_;
  std::string DNI_;
};


//Esta es la definicion de la clase Jugador
class Jugador : Persona {
 public:
  //constructor de la clase Jugador(inline)
  Jugador() { }
  //getters de los atributos de la clase
  double Get_altura() const { return altura_;}
  double Get_peso() const { return peso_; }
  std::string Get_posicion() const { return posicion_; }
  //setters de los atributos de la clase
  void Set_altura(const double& altura) {altura_ = altura;}
  void Set_peso(const double& peso) { peso_ = peso;}
  void Set_posicion(const std::string& posicion) { posicion_ = posicion;}
 private:
  std::string nombre_;
  int edad_;
  double altura_;
  double peso_;
  std::string posicion_;
};

//Esta es la definicion de la clase Entrenador
class Entrenador : Persona {
 public:
  //constructor de la clase Entrenador(inline)
  Entrenador() { }
  //getters
  std::string Get_licencia() { return licencia_;}
  std::string Get_fecha_inicio_contrato() { return fecha_inicio_contrato_;}
  std::string Get_fecha_fin_contrato() { return fecha_fin_contrato_;}
  //setters
  void Set_licencia(const std::string& licencia) { licencia_ = licencia;}
  void Set_fecha_inicio_contrato(const std::string& fecha_inicio_contrato) { fecha_inicio_contrato_ = fecha_inicio_contrato;}
  void Set_fecha_fin_contrato(const std::string& fecha_fin_contrato) { fecha_fin_contrato_ = fecha_fin_contrato;}
 private:
  std::string licencia_;
  std::string fecha_inicio_contrato_;
  std::string fecha_fin_contrato_;
};

class Asistente : Persona {
 public:
  //constructor de la clase asistente
  Asistente() { }
  //gettes de la clase asistente
  std::string Get_fecha_inicio_contrato() { return fecha_inicio_contrato_;}
  std::string Get_fecha_fin_contrato() { return fecha_fin_contrato_;}
  //setters
  void Set_fecha_inicio_contrato(const std::string& fecha_inicio_contrato) { fecha_inicio_contrato_ = fecha_inicio_contrato;}
  void Set_fecha_fin_contrato(const std::string& fecha_fin_contrato) { fecha_fin_contrato_ = fecha_fin_contrato;}
 private:
  std::string fecha_inicio_contrato_;
  std::string fecha_fin_contrato_;
};

class Equipo_baloncesto {
 public:
  //constructor de la clase
  Equipo_baloncesto(std::string _nombre, std::string _ciudad, std::vector<Jugador> _jugadores, std::vector<Entrenador> _entrenadores, std::vector<Asistente> _asistentes) : nombre_(_nombre), ciudad_(_ciudad), jugadores_(_jugadores), entrenadores_(_entrenadores), asistentes_(_asistentes) { }
  Equipo_baloncesto() { }
  //getters de la clase
  std::string Get_nombre() const { return nombre_; }
  std::string Get_ciudad() const { return ciudad_; } 
  std::vector<Jugador> Get_jugadores() const { return jugadores_; }
  Entrenador Get_entrenador() const { return entrenador_principal_;}
  std::vector<Entrenador> Get_entrenadores() const { return entrenadores_; }
  std::vector<Asistente> Get_asistentes() const { return asistentes_; }
  //setters
  void Set_nombre(const std::string& nombre) { nombre_ = nombre;}
  void Set_ciudad(const std::string& ciudad) { ciudad_ = ciudad;}
  void Set_entrenador_principañ(const Entrenador& entrenador_principal) { entrenador_principal_ = entrenador_principal; }
  void Set_jugadores(const std::vector<Jugador>& jugadores) { jugadores_ = jugadores;}
  void Set_entrenadores(const std::vector<Entrenador>& entrenadores) { entrenadores_ = entrenadores;}
  void Set_asistentes(const std::vector<Asistente>& asistentes) { asistentes_ = asistentes;}
  //metodos de calculo
  double Edad_media();
  double Altura_media();
  double Peso_medio();
  //destructor
  ~Equipo_baloncesto() { }
 private:
  std::string nombre_;
  std::string ciudad_;
  std::vector<Jugador> jugadores_;
  Entrenador entrenador_principal_;
  std::vector<Entrenador> entrenadores_;
  std::vector<Asistente> asistentes_;
};

#endif
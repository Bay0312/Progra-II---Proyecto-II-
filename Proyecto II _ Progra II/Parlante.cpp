/* --------------------------------------------------------------------
*
* EIF204 Programación 2
* Proyecto 2
*
* 4-0254-0670 David Calvo H. grupo 02
* 7-0300-0234 Bayron Vega A. grupo 03
*
* -------------------------------------------------------------------
*/

#include "Parlante.h"

//Constructores y Destructor
Parlante::Parlante() : Componente(), categoria{ "" }, tipo{ "" }, caracteristicas{ "" } {}

Parlante::Parlante(std::string cat, std::string tip, std::string car, std::string cod, double pre) : categoria{ cat }, tipo{ tip }, caracteristicas{ car } {
	codigo = cod;
	precio = pre;
}

Parlante::Parlante(const Parlante& copParlante) {
	this->categoria = copParlante.categoria;
	this->tipo = copParlante.tipo;
	this->caracteristicas = copParlante.caracteristicas;
	this->codigo = copParlante.codigo;
	this->precio = copParlante.precio;
}

Parlante::~Parlante() {}

//Getters
std::string Parlante::getCategoria() const { return categoria; }
std::string Parlante::getTipo() const { return tipo; }
std::string Parlante::getCaracteristicas() const { return caracteristicas; }

//Setters
void Parlante::setCategoria(std::string categoria) { this->categoria = categoria; }
void Parlante::setTipo(std::string componente) { this->tipo = componente; }
void Parlante::setCaracteristicas(std::string caracteristicas) { this->caracteristicas = caracteristicas; }

//Metodos Varios
void Parlante::agregar(Componente* nan) { throw new std::string("No se supone que la clase parlante agregue."); } //La clase que agrega es el composite, por lo que aqui se lanza una excepcion.
double Parlante::obtenerPrecio() const { return precio; } //Se retorna solo el precio, dado que es un componente individual.

std::string Parlante::toString() const {
	std::stringstream s;
	s << categoria << '\t' << tipo << '\t' << codigo << '\t' << caracteristicas << '\t' << precio;
	return s.str();
}

bool Parlante::esSistema() const { return false; }
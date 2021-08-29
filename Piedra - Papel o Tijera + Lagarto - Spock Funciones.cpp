#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main(){
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0;
}

// Implementación
std::string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatorio;
	
	//Genero numero alatorio
	srand(time(0));
	numeroAleatorio = rand() % 5 + 1;
	switch (numeroAleatorio){
		case 1:
			movimiento = "piedra";
			break;
		case 2:
			movimiento = "papel";
			break;
		case 3:
			movimiento = "tijera";
			break;
		case 4:
			movimiento = "lagarto";
			break;
		case 5: 
	    	movimiento = "spock";
	    	break;
	}
	std::cout << "Computadora: " << movimiento << "\n";
	return movimiento;
}

std::string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout << "Piedra, papel, tijera, lagarto y spock (para terminar el juego, escriba salir)?";
	cin >> movimiento;
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador){
	if (computadora == jugador){
		std::cout<<"Empate!\n";
		
	} 
	else if (jugador == "piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}
		else if (jugador == "papel"){
		procesarEntradaJugadorPapel(computadora);
	}
		else if (jugador == "tijera"){
		procesarEntradaJugadorTijera(computadora);
	} 
		else if (jugador == "lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	} 
	else if (jugador == "spock"){
		procesarEntradaJugadorSpock(computadora);
	} 
	else {
		std::cout << "Entrada no valida. Ingrese Piedra, papel, tijera, lagarto y spock. \n";
	}
}

void procesarEntradaJugadorPiedra(std::string computadora){
	if (computadora == "papel"){
		std::cout << "Usted pierde. Papel cubre piedra \n";
	}
	else if (computadora == "tijera"){
		std::cout << "Usted gana. Piedra rompe tijera. \n";
	} 
	else if (computadora == "spock"){
		std::cout << "Usted pierde. Spock vaporiza piedra \n";
	}
	else if (computadora == "lagarto"){
		std::cout << "Usted gana. Piedra aplasta lagarto. \n";
	}
}

void procesarEntradaJugadorPapel(std::string computadora){
	if (computadora == "piedra"){
		std::cout << "Usted gana. Papel cubre piedra \n";
	}
	else if (computadora == "tijera"){
		std::cout << "Usted pierde. Tijera rompe papel \n";
	}
	else if (computadora == "spock"){
		std::cout << "Usted gana. Papel desautoriza a spock \n";
	}
	else if (computadora == "lagarto"){
		std::cout << "Usted pierde. Lagarto debora papel. \n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora){
	if (computadora == "papel"){
		std::cout << "Usted gana. Tijera corta papel \n";
	}
	else if (computadora == "piedra"){
		std::cout << "Usted pierde. Piedra rompe tijera \n";
	}
		else if (computadora == "spock"){
		std::cout << "Usted pierde. Spock rompe a tijera \n";
	}
	else if (computadora == "lagarto"){
		std::cout << "Usted gana. Tijera decapita a lagarto. \n";
	}
}
void procesarEntradaJugadorLagarto(std::string computadora){
	if (computadora == "papel"){
		std::cout << "Usted gana. Lagarto devora a papel \n";
	}
	else if (computadora == "piedra"){
		std::cout << "Usted pierde.  Piedra aplasta a lagarto \n";
	}
		else if (computadora == "tijera"){
		std::cout << "Usted pierde. Tijera decapita a lagarto \n";
	}
	else if (computadora == "spock"){
		std::cout << "Usted gana. Lagarto envenena a Spock \n";
	}
}

void procesarEntradaJugadorSpock(std::string computadora){
		if (computadora == "papel"){
		std::cout << "Usted pierde. Papel desautoriza a Spock \n";
	}
	else if (computadora == "piedra"){
		std::cout << "Usted gana.  Spock vaporiza a piedra \n";
	}
		else if (computadora == "tijera"){
		std::cout << "Usted gana. Spock rompe a tijera \n";
	}
	else if (computadora == "lagarto"){
		std::cout << "Usted pierde.  Lagarto envenena a Spock \n";
	}
}

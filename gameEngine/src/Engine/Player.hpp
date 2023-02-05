
/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - Player.hpp .. 
	____________________________________________________________
*/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Positions.hpp"
#include "SimpleVec.hpp"
#include "ObjectDimension.hpp"

namespace Engine {

	class Player : public Engine::Positions, public Engine::SimpleVec, public Engine::_3dObjectDimension {



	}; // end class Player

} // end namespace Engine

#endif // PLAYER_HPP

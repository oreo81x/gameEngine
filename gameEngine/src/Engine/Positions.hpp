
/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - Positions.hpp .. 
	____________________________________________________________
*/

#ifndef POSITIONS_HPP
#define POSITIONS_HPP

namespace Engine {

	class Positions {

		double cx = 0.0;	// current x
		double cy = 0.0;	// current y
		double cz = 0.0;	// current z

	public:		// public logic functions

		inline double xPos() { return cx; }	// end xPos.. return current x
		inline double yPos() { return cy; }	// end yPos.. return current y
		inline double zPos() { return cz; }	// end zPos.. return current z

		inline void xPos(double value) { cx = value; }	// end xPos.. set current x
		inline void yPos(double value) { cy = value; }	// end yPos.. set current y
		inline void zPos(double value) { cz = value; }	// end zPos.. set current z

		inline void movX(double value) { cx += value; }	// end movX.. edit current x
		inline void movY(double value) { cy += value; }	// end movY.. edit current y
		inline void movX(double value) { cz += value; }	// end movZ.. edit current z

	}; // end class Positions

} // end namespace Engine

#endif // POSITIONS_HPP

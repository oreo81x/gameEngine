
/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - World.hpp .. 
	____________________________________________________________
*/

#ifndef WORLD_HPP
#define WORLD_HPP

namespace Engine {

	class World {

		double world_width = 0.0;	// game world width  [ Y ]
		double world_length = 0.0;	// game world length [ X ]
		double world_height = 0.0;	// game world height [ Z ]
		const double world_minimum = 0.0;	// minimum value of length, width or height in world

	public:		// Constructor and Destructor

		inline World(double width_value, double length_value, double height_value)
			:world_width(width_value), world_length(length_value), world_height(height_value) {} // end Constructor

		virtual inline ~World() = default;	// end Destructor.. 

	public:		// public logic functions

		inline double width() { return world_width; }		// end width.. return world width
		inline double length() { return world_length; }		// end length.. return world length
		inline double height() { return world_height; }		// end height.. return world height
		inline double minimum() { return world_minimum; }	// end minimum.. return minimum value

		inline double area() {
			return (2 * ((world_width * world_length) + (world_width * world_height) + (world_length * world_height)));
		} // end area.. return world area

		inline double size() {
			return (world_length * world_width * world_height);
		} // end size.. return world size

	}; // end class World

} // end namespace Engine

#endif // WORLD_HPP

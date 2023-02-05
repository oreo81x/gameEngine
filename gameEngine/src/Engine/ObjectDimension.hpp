
/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - ObjectDimension.hpp .. 
	____________________________________________________________
*/

#ifndef OBJECTDIMENSION_HPP
#define OBJECTDIMENSION_HPP

namespace Engine {

	class _3dObjectDimension {

		double objWidth = 0.0;	// Object Width  [ Y ]
		double objLength = 0.0;	// Object Length [ X ]
		double objHeight = 0.0;	// Object Height [ Z ]

	public:		// public logic functions

		inline double width() { return objWidth; }		// end width.. return Object Width
		inline double length() { return objLength; }	// end length.. return Object Length
		inline double height() { return objHeight; }	// end height.. return Object Height

		inline void width(double value) { objWidth = value; }	// end width.. Set Value Of Object Width
		inline void length(double value) { objLength = value; }	// end length.. Set Value Of Object Length
		inline void height(double value) { objLength = value; }	// end height.. Set Value Of Object Height

		inline double minY(double cyPos) { return cyPos - (objWidth / 2); }	// end minY.. 
		inline double maxY(double cyPos) { return cyPos + (objWidth / 2); }	// end maxY.. 

		inline double minX(double cxPos) { return cxPos - (objLength / 2); }	// end minX..
		inline double maxX(double cxPos) { return cxPos + (objLength / 2); }	// end maxX.. 

		inline double minZ(double czPos) { return czPos - (objLength / 2); }	// end minZ.. 
		inline double maxZ(double czPos) { return czPos + (objLength / 2); }	// end maxZ.. 

	}; // end class _3dObjectDimension

} // end namespace Engine

#endif // OBJECTDIMENSION_HPP

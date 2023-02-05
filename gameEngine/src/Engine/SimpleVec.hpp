
/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - SimpleVec.hpp .. 
	____________________________________________________________
*/

#ifndef SIMPLEVEC_HPP
#define SIMPLEVEC_HPP

namespace Engine {

	class SimpleVec {

		// ______________________________________

		int i_cVec = 0;		// int_current_vector 
		int i_maxVec = 0;	// int_maximum_vector 
		int i_minVec = 0;	// int_minimum_vector 

		// ______________________________________

		inline void vecUpdate() {
			// _____________________________________________________________________
			if (i_cVec < i_minVec)	// if current vector less than minimum vector
				i_cVec = i_maxVec;	// let current vector equal to maximum vector
			// _____________________________________________________________________
			if (i_cVec > i_maxVec)	// if current vector greater than maximum vector
				i_cVec = i_minVec;	// let current vector equal to minimum vector
			// _____________________________________________________________________
		} // end vecUpdate

	public:		// public logic functions

		inline int vector() { return i_cVec; }		// end vector.. return int_current_vector
		inline int maxVec() { return i_maxVec; }	// end maxVec.. return int_maximum_vector
		inline int minVec() { return i_minVec; }	// end minVec.. return int_minimum_vector

		inline void vector(int currentVector) { i_cVec = currentVector; }	// end vector.. let int_current_vector value
		inline void maxVec(int maximumVector) { i_maxVec = maximumVector; }	// end maxVec.. let int_maximum_vector value
		inline void minVec(int minimumVector) { i_minVec = minimumVector; }	// end minVec.. let int_minimum_vector value

	public:		// public logic functions

		inline void vec_rot_left() { ++i_cVec; }	// end vec_rot_left.. 
		inline void vec_rot_right() { --i_cVec; }	// end vec_rot_right.. 

	}; // end class SimpleVec

} // end namespace Engine

#endif // SIMPLEVEC_HPP

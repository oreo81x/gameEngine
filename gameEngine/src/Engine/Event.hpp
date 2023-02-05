
/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - Event.hpp ..
	____________________________________________________________
*/

#ifndef EVENT_HPP
#define EVENT_HPP

#include <Windows.h>

namespace Engine {

	class Event {

		class Key {
		public:
			int code = 0;	// Variable to store pressed key code
		}; // end class Code

	public:
	// __________________________
		Key key;	// Key Object 
	// __________________________

	public:
		inline bool KeyPressed() {
			if (GetConsoleWindow() == GetForegroundWindow()) {
				for (int keyCode = 0; keyCode < 256; ++keyCode) {
					if (GetKeyState(keyCode) & 0x8000) {
						this->key.code = keyCode;	// Put value inside key object
						return true;	// Some Key is pressed
					} // end if.. 
				} // end loop.. 
			} // end if.. 
		// __________________________________
			return false;	// No key pressed
		// __________________________________
		} // end KeyPressed.. Check if a key got pressed.. using Windows API.. 

	public:

	}; // end class Event

} // end namespace Engine

#endif // EVENT_HPP

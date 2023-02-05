
/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - UIDesigner.hpp ..
	____________________________________________________________
*/

#ifndef UIDESIGNER_HPP
#define UIDESIGNER_HPP

#include "Keyboard.hpp"	// Keyboard Keys Codes
#include "Console.hpp"	// Some Console Stuff Based On Windows API
#include "Event.hpp"	// To Access KeyPressed Event.. Based On Windows API
#include <iostream>		// To Access I/O C++ Standered
#include <string>		// To Access std::string class

namespace Engine {

	namespace UIDesigner {

		class Color {
		public:
			enum Code {
				Black = 0,
				Blue,
				Green,
				Cyan,
				Red,
				Purple,
				Yellow,
				Default,
				Grey,
				lightBlue,
				lightGreen,
				lightCyan,
				lightRed,
				lightPurple,
				lightYellow,
				White	// The default 15 Colors
			}; // end enum Code
		}; // end class Color

		class UIL {
		private:
			int c_line = 0;	// current line
			int m_line = 0;	// maximum line
			bool loop_limit = false;

		public:
			inline UIL()
			{
				c_line = 0;
				m_line = 0;
				loop_limit = false;
			} // end Constructor..

			inline UIL(int current, int maximum, bool limits) : c_line(current), m_line(maximum), loop_limit(limits)
			{

			} // end Constructor.. 

			~UIL() = default;	// end Destructor

		public:
			inline int current() { return c_line; }		// end current.. return current line
			inline int maximum() { return m_line; }		// end maximum.. return maximum line
			inline bool limits() { return loop_limit; }	// end unlimited.. return true or false

			inline void current(int travle) { c_line = travle; }		// end current.. 
			inline void maximum(int maxVal) { m_line = maxVal; }		// end maximum.. 
			inline void limits(bool _limits) { loop_limit = _limits; }	// end unlimited.. 

		public:
			inline void increase() { ++c_line; }	// end increase.. ++ current line
			inline void decrease() { --c_line; }	// end decrease.. -- current line

		public:
			void displayer(std::string title[], int x = 0, int y = 0) {
				Console::clrscr();

				for (int length = 0; length < y; ++length)
					std::cout << std::endl;
				
				for (int counter = 0; counter < m_line; ++counter) {
					for (int width = 0; width < x; ++width)
						std::cout << " ";

					if (counter == c_line) {
						Console::color(Color::Green);
						std::cout << title[counter];
					} // end if.. 
					if (counter != c_line) {
						Console::color(Color::lightRed);
						std::cout << title[counter];
					} // end if.. 
					std::cout << std::endl;
				} // end loop
				Console::color(Color::Default);
			} // end displayer.. 

		}; // end class UIL [ User Interface List ] 

	} // end namespace UIDesigner

} // end namespace Engine

#endif // UIDESIGNER_HPP

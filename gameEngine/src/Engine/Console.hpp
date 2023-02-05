
/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - Console.hpp ..
	____________________________________________________________
*/

#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include <Windows.h>
#include <conio.h>

namespace Engine {

	namespace UIDesigner {

		class Console {
		public:
			static inline void color(int colorCode) {
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	// Handleing output
				SetConsoleTextAttribute(handle, colorCode);			// Changeing Color
			} // end color.. Change Color To Specific Color

		public:
			static inline void sizeTo(int width = 400, int height = 300) {
				RECT console_rect;									// Console Rectangle
				GetWindowRect(GetConsoleWindow(), &console_rect);	// Getting Window Rectangle
				MoveWindow(GetConsoleWindow(), console_rect.left, console_rect.top, width, height, TRUE);
			} // end sizeTo.. Change Window Size

		public:
			static inline void moveTo(int x, int y) {
				SetWindowPos(GetConsoleWindow(), 0, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
			} // end moveTo.. Change Window Position

		public:
			static inline void title(LPCSTR new_title) {
				SetConsoleTitleA(new_title);
			} // end title.. Change Console Window Title

		public:
			static inline void clrscr() { system("CLS"); }				// end clrscr.. clear screen
			static inline void pause() { const int PAUSE = _getch(); }	// end pause.. pause console
		public:

		}; // end class Console

	} // end namespace UIDesigner

} // end namespace Engine

#endif // CONSOLE_HPP


/*
	____________________________________________________________
	 - github account: oreo81x
	____________________________________________________________
	 - Keyboard.hpp ..
	____________________________________________________________
*/

#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

namespace Engine {

	class Keyboard {
	public:
		enum Code {
			Backspace = 0x08,
			Tab = 0x09,
			Enter = 0x0D,
			Shift = 0x10,
			Ctrl = 0x11,
			Alt = 0x12,
			Pause = 0x13,
			Capslock = 0x14,
			Escape = 0x1B,
			Space = 0x20,
			PageUp = 0x21,
			PageDown = 0x22,
			End = 0x23,
			Home = 0x24,
			Left = 0x25,
			Up = 0x26,
			Right = 0x27,
			Down = 0x28,
			PrintScr = 0x2C,
			Insert = 0x2D,
			Delete = 0x2E,

			Num0 = 0x30,
			Num1,
			Num2,
			Num3,
			Num4,
			Num5,
			Num6,
			Num7,
			Num8,
			Num9,

			A = 0x41,
			B,
			C,
			D,
			E,
			F,
			G,
			H,
			I,
			J,
			K,
			L,
			M,
			N,
			O,
			P,
			Q,
			R,
			S,
			T,
			U,
			V,
			W,
			X,
			Y,
			Z,

			LWin = 0x5B,
			RWin = 0x5C,

			AppMenu = 0x5D,
			Numpad0 = 0x60,
			Numpad1,
			Numpad2,
			Numpad3,
			Numpad4,
			Numpad5,
			Numpad6,
			Numpad7,
			Numpad8,
			Numpad9,

			Multiply = 0x6A,	// '*'
			Add = 0x6B,			// '+'
			Separator = 0x6C,	// ','
			Subtruct = 0x6D,	// '-'
			Decimal = 0x6E,		// '.'
			Divide = 0x6F,		// '/'

			F1 = 0x70,
			F2,
			F3,
			F4,
			F5,
			F6,
			F7,
			F8,
			F9,
			F10,
			F11,
			F12,

			Numlock = 0x90,
			Scrolllock = 0x91,
			LShift = 0xA0,
			RShift = 0xA1,
			LCtrl = 0xA2,
			RCtrl = 0xA3,
			LAlt = 0xA4,
			RAlt = 0xA5,
			VolMute = 0xAD,
			VolDown = 0xAE,
			VolUp = 0xAF,
			NextTrack = 0xB0,
			PrevTrack = 0xB1,
			StopMedia = 0xB2,
			PlayPauseMedia = 0xB3,
			Colons = 0xBA,
			GlobalAdd = 0xBB,
			GlobalComma = 0xBC,
			GlobalMinus = 0xBD,
			GlobalDecimal = 0xBE,
			Question = 0xBF,	// '/?' Key
			Tilde = 0xC0,		// '`~' Key
			OpenSquareBrace = 0xDB,		// '['
			VirticalBar = 0xDC,			// '|'
			CloseScuareBrace = 0xDD,	// ']'
			Quotes = 0xDE,			// '' ""
			Arrows = 0xE2,			// '<>'
			// End key Codes
		}; // end enum Code
	}; // end class Keyboard

} // end namespace Engine

#endif // KEYBOARD_HPP

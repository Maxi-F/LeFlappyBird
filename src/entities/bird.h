#pragma once
#include "raylib.h"

namespace LeFlappyBird {
	namespace Bird {
		struct Bird {
			Vector2 position;
			float velocity;
			Vector2 size;
			KeyboardKey goUpbutton = KEY_UP;
			KeyboardKey goDownButton = KEY_DOWN;
		};

		Bird createBird(Vector2 position);
		void updateBird(Bird& bird);
		void drawBird(Bird bird);
		Rectangle getRectangle(Bird bird);
	}
}
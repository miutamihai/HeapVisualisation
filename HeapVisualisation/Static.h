#pragma once

namespace Static {
	class Position {
	public:
		int x, y;
	};

	class PositionArray {
	public:
		Position* positions;
		int numberOfElements;
		PositionArray() {
			numberOfElements = -1;
			positions = new Position[64]();
			positions[0].x = 545;
			positions[0].y = 15;
			CalculatePositions();
		}
	private:
		void CalculatePositions() {
			int k = 0;
			for (int i = 1; i <= 2; i *= 2) {
				int y = positions[k - i + 1].y + 100;
				int x = positions[k - i + 1].x - 100 * i;
				for (int j = 1; j <= i * 2; j++) {
					k++;
					positions[k].x = x;
					positions[k].y = y;
					x += 200;
				}
			}
		}
	};
}

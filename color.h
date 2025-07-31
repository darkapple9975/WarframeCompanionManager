/*
Keep track of your warframe companions using Companion Manager. Intended for breeders.
Copyright (C) 2025  darkapple

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef COLOR_H
#define COLOR_H

#include <QColor>

namespace companion {
	class Color : public QColor {
	public:
		Color();
		Color(int r, int g, int b, std::string name);

	private:
		std::string name_ = "";
	};

	class FurColor : public Color {
	public:
		enum class Rarity {
			COMMON,
			UNCOMMON,
			RARE,
			ULTRA_RARE,
		};

		FurColor();
		FurColor(int r, int g, int b, std::string name, Rarity rarity);

	private:
		Rarity rarity_ = Rarity::COMMON;
	};
}

#endif // COLOR_H
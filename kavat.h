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
#ifndef KAVAT_H
#define KAVAT_H

#include "companion.h"

namespace companion {
	class Kavat : public Companion
	{
	public:
		enum class Breed {
			SMEETA,
			ADARZA,
			VASCA,
		};

		enum class Head {
			TUFT,
			BALLTIP,
			FOX,
			PERSIAN,
			NABERUS,
		};

		enum class Body {
			HYACINTH,
			MANED,
		};

		enum class Tail {
			PEACOCK,
			ARROW,
			LEAF,
			GUPPY,
			MERMAID,
			SPIKED,
		};

		inline static const int MAX_IMPRINT = 3;

		// common fur colors
		inline static const std::shared_ptr<const FurColor> ANTI_MOA_PURPLE		= std::make_shared<FurColor>(0xD5, 0xB5, 0xF2, "Anti Moa Purple", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> DRAGONLILY_PINK		= std::make_shared<FurColor>(0xF1, 0xBB, 0xBB, "Dragonlily Pink", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> EXECUTIONER_GREY	= std::make_shared<FurColor>(0xBE, 0xBC, 0xBD, "Executioner Grey", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> MESA_YELLOW			= std::make_shared<FurColor>(0xD5, 0xAA, 0x4C, "Mesa Yellow", FurColor::Rarity::COMMON);

		// uncommon fur colors
		inline static const std::shared_ptr<const FurColor> ASTEROID_GREY		= std::make_shared<FurColor>(0x45, 0x56, 0x51, "Asteroid Grey", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> CONCULYST_BROWN		= std::make_shared<FurColor>(0x6C, 0x39, 0x21, "Conculyst Brown", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> DRAGA_BLUE			= std::make_shared<FurColor>(0x31, 0x33, 0x45, "Draga Blue", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> HYACINTH_BLUE		= std::make_shared<FurColor>(0x19, 0x91, 0x94, "Hyacinth Blue", FurColor::Rarity::UNCOMMON);

		// rare fur colors
		inline static const std::shared_ptr<const FurColor> ANCIENT_GREEN		= std::make_shared<FurColor>(0x5D, 0xC2, 0x5D, "Ancient Green", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> BOILER_RED			= std::make_shared<FurColor>(0xC8, 0x34, 0x29, "Boiler Red", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> DREG_RED			= std::make_shared<FurColor>(0x8D, 0x2C, 0x25, "Dreg Red", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> REGOR_GREEN			= std::make_shared<FurColor>(0x06, 0x29, 0x22, "Regor Green", FurColor::Rarity::RARE);

		// ultra rare fur colors
		inline static const std::shared_ptr<const FurColor> HARKONAR_ORANGE		= std::make_shared<FurColor>(0xCA, 0x38, 0x04, "Harkonar Orange", FurColor::Rarity::ULTRA_RARE);
		inline static const std::shared_ptr<const FurColor> HEXIS_BLACK			= std::make_shared<FurColor>(0x1D, 0x24, 0x2F, "Hexis Black", FurColor::Rarity::ULTRA_RARE);
		inline static const std::shared_ptr<const FurColor> LOKA_BROWN			= std::make_shared<FurColor>(0x7D, 0x4C, 0x2E, "Loka Brown", FurColor::Rarity::ULTRA_RARE);
		inline static const std::shared_ptr<const FurColor> SEQUENCE_BLUE		= std::make_shared<FurColor>(0x45, 0x46, 0x6C, "Sequence Blue", FurColor::Rarity::ULTRA_RARE);

		// energy colors
		inline static const std::shared_ptr<const Color> GREEN		= std::make_shared<Color>(0x0E, 0xC5, 0x11, "Green");
		inline static const std::shared_ptr<const Color> LIME		= std::make_shared<Color>(0xCE, 0xFA, 0x39, "Lime");
		inline static const std::shared_ptr<const Color> YELLOW		= std::make_shared<Color>(0xFF, 0xEC, 0x3D, "Yellow");
		inline static const std::shared_ptr<const Color> MUSTARD	= std::make_shared<Color>(0xF6, 0xDC, 0x13, "Mustard");
		inline static const std::shared_ptr<const Color> GOLD		= std::make_shared<Color>(0xFD, 0xD0, 0x53, "Gold");
		inline static const std::shared_ptr<const Color> AMBER		= std::make_shared<Color>(0xFF, 0xB0, 0x22, "Amber");
		inline static const std::shared_ptr<const Color> ORANGE		= std::make_shared<Color>(0xFF, 0x90, 0x0A, "Orange");
		inline static const std::shared_ptr<const Color> RED		= std::make_shared<Color>(0xDF, 0x55, 0x55, "Red");
		inline static const std::shared_ptr<const Color> BLUE		= std::make_shared<Color>(0x4D, 0x8B, 0xF8, "Blue");
		inline static const std::shared_ptr<const Color> TEAL		= std::make_shared<Color>(0x00, 0x9F, 0x94, "Teal");
		inline static const std::shared_ptr<const Color> CYAN		= std::make_shared<Color>(0x26, 0xD9, 0xC3, "Cyan");
		inline static const std::shared_ptr<const Color> WHITE		= std::make_shared<Color>(0xB5, 0xF0, 0xFE, "White");
		inline static const std::shared_ptr<const Color> PINK		= std::make_shared<Color>(0xEB, 0xD4, 0xFF, "Pink");
		inline static const std::shared_ptr<const Color> LILAC		= std::make_shared<Color>(0xDE, 0xC9, 0xFF, "Lilac");
		inline static const std::shared_ptr<const Color> SILVER		= std::make_shared<Color>(0xC9, 0xD5, 0xFF, "Silver");


		Kavat(
			Sex sex,
			Breed breed,
			Head head,
			Body body,
			Tail tail,
			std::shared_ptr<const FurColor> S1,
			std::shared_ptr<const FurColor> S2,
			std::shared_ptr<const FurColor> S3,
			std::shared_ptr<const FurColor> S4,
			std::shared_ptr<const Color> energyColor
		);
		int getMaxImprint() const override;

	private:
		Breed breed_;
		Head head_;
		Body body_;
		Tail tail_;
		std::shared_ptr<const FurColor> S1_;
		std::shared_ptr<const FurColor> S2_;
		std::shared_ptr<const FurColor> S3_;
		std::shared_ptr<const FurColor> S4_;
	};
}

#endif // KAVAT_H
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
#ifndef KUBROW_H
#define KUBROW_H

#include "companion.h"

namespace companion {
	class Kubrow : public Companion
	{
	public:
		enum class Breed {
			CHESA,
			SUNIKA,
			HURAS,
			RAKSA,
			SAHASA,
		};

		enum class Pattern {
			STRIPED,
			PATCHY,
			HOUND,
			DOMINO,
			MERLE,
			LOTUS,
		};

		enum class Build {
			SKINNY,
			ATHLETIC,
			BULKY,
		};

		inline static const int MAX_IMPRINT = 2;

		// common fur colors
		inline static const std::shared_ptr<const FurColor> ASH_GREY		= std::make_shared<FurColor>(0x80, 0x80, 0x79, "Ash Grey", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> EARTH_BROWN		= std::make_shared<FurColor>(0x80, 0x6A, 0x5D, "Earth Brown", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> CORPUS_GREY		= std::make_shared<FurColor>(0x80, 0x80, 0x80, "Corpus Grey", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> HEK_GREEN		= std::make_shared<FurColor>(0x7E, 0x80, 0x6A, "Hek Green", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> KRIL_BROWN		= std::make_shared<FurColor>(0x80, 0x74, 0x5E, "Kril Brown", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> GALLIUM_GREY	= std::make_shared<FurColor>(0x78, 0x82, 0x8C, "Gallium Grey", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> GRUSTRAG_GREY	= std::make_shared<FurColor>(0x80, 0x7A, 0x6C, "Grustrag Grey", FurColor::Rarity::COMMON);
		inline static const std::shared_ptr<const FurColor> SATURN_BROWN	= std::make_shared<FurColor>(0x80, 0x67, 0x53, "Saturn Brown", FurColor::Rarity::COMMON);

		// uncommon fur colors
		inline static const std::shared_ptr<const FurColor> SEDNA_GREY		= std::make_shared<FurColor>(0x80, 0x79, 0x79, "Sedna Grey", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> DERELICT_BLACK	= std::make_shared<FurColor>(0x26, 0x26, 0x26, "Derelict Black", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> MARS_RED		= std::make_shared<FurColor>(0x80, 0x5F, 0x44, "Mars Red", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> INFESTED_BLACK	= std::make_shared<FurColor>(0x36, 0x33, 0x33, "Infested Black", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> VOID_BLACK		= std::make_shared<FurColor>(0x26, 0x20, 0x20, "Void Black", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> DARVO_BLUE		= std::make_shared<FurColor>(0x69, 0x72, 0x80, "Darvo Blue", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> ORDIS_GREY		= std::make_shared<FurColor>(0x72, 0x72, 0x7A, "Ordis Grey", FurColor::Rarity::UNCOMMON);
		inline static const std::shared_ptr<const FurColor> MERCURY_BROWN	= std::make_shared<FurColor>(0x80, 0x74, 0x61, "Mercury Brown", FurColor::Rarity::UNCOMMON);

		// rare fur colors
		inline static const std::shared_ptr<const FurColor> ANYO_GREY		= std::make_shared<FurColor>(0x36, 0x36, 0x40, "Anyo Grey", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> AMBULAS_BLACK	= std::make_shared<FurColor>(0x34, 0x26, 0x22, "Ambulas Black", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> SHADOW_GREY		= std::make_shared<FurColor>(0x80, 0x73, 0x6B, "Shadow Grey", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> SARGAS_BROWN	= std::make_shared<FurColor>(0xC5, 0x8D, 0x4D, "Sargas Brown", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> JUPITER_BROWN	= std::make_shared<FurColor>(0x80, 0x5A, 0x32, "Jupiter Brown", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> PHORID_RED		= std::make_shared<FurColor>(0x80, 0x43, 0x30, "Phorid Red", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> ALAD_BLUE		= std::make_shared<FurColor>(0x5B, 0x6B, 0x80, "Alad Blue", FurColor::Rarity::RARE);
		inline static const std::shared_ptr<const FurColor> VENUS_BROWN		= std::make_shared<FurColor>(0x4D, 0x41, 0x46, "Venus Brown", FurColor::Rarity::RARE);

		// energy colors
		inline static const std::shared_ptr<const Color> GREEN		= std::make_shared<Color>(0x9C, 0xAD, 0x6C, "Green");
		inline static const std::shared_ptr<const Color> LIGHT_GOLD	= std::make_shared<Color>(0xAD, 0x93, 0x65, "Light Gold");
		inline static const std::shared_ptr<const Color> PINK		= std::make_shared<Color>(0xAD, 0x66, 0x6F, "Pink");
		inline static const std::shared_ptr<const Color> PURPLE		= std::make_shared<Color>(0x90, 0x74, 0xAD, "Purple");
		inline static const std::shared_ptr<const Color> BLUE		= std::make_shared<Color>(0x6C, 0xA0, 0xAD, "Blue");
		inline static const std::shared_ptr<const Color> RED		= std::make_shared<Color>(0xAD, 0x64, 0x44, "Orange/Red");
		inline static const std::shared_ptr<const Color> LILAC		= std::make_shared<Color>(0xAD, 0x5A, 0xAA, "Lilac");
		inline static const std::shared_ptr<const Color> BLACK		= std::make_shared<Color>(0x26, 0x26, 0x26, "Black");
		inline static const std::shared_ptr<const Color> GOLD		= std::make_shared<Color>(0xAD, 0x7C, 0x47, "Gold");

		Kubrow(
			Sex sex,
			Breed breed,
			Pattern pattern,
			Build build,
			std::shared_ptr<const FurColor> S1,
			std::shared_ptr<const FurColor> S2,
			std::shared_ptr<const FurColor> S3,
			std::shared_ptr<const Color> energyColor
		);
		int getMaxImprint() const override;

	private:
		Breed breed_;
		Pattern pattern_;
		Build build_;
		std::shared_ptr<const FurColor> S1_;
		std::shared_ptr<const FurColor> S2_;
		std::shared_ptr<const FurColor> S3_;
	};
}

#endif // KUBROW_H

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
#include "kavat.h"

namespace companion {

	Kavat::Kavat(
		Sex sex,
		Breed breed,
		Head head,
		Body body,
		Tail tail,
		const std::shared_ptr<const FurColor> S1,
		const std::shared_ptr<const FurColor> S2,
		const std::shared_ptr<const FurColor> S3,
		const std::shared_ptr<const FurColor> S4,
		const std::shared_ptr<const Color> energyColor
	)
		: Companion(MAX_IMPRINT, sex, energyColor)
		, S1_(S1)
		, S2_(S2)
		, S3_(S3)
		, S4_(S4)
	{
		breed_ = breed;
		head_ = head;
		body_ = body;
		tail_ = tail;
	}

	int Kavat::getMaxImprint() const {
		return MAX_IMPRINT;
	}
}

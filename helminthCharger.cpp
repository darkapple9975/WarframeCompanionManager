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
#include "helminthCharger.h"

namespace companion {

	HelminthCharger::HelminthCharger(
		Sex sex,
		Breed breed,
		Pattern pattern,
		Build build,
		std::shared_ptr<const FurColor> S1,
		std::shared_ptr<const FurColor> S2,
		std::shared_ptr<const FurColor> S3,
		std::shared_ptr<const FurColor> S4,
		std::shared_ptr<const Color> energyColor
	)
		: Kubrow(sex, breed, pattern, build, S1, S2, S3, energyColor)
		, S4_(S4)
	{}
}

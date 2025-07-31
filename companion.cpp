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
#include <stdexcept>

#include "companion.h"

namespace companion {

	Companion::Companion(int nImprint, Sex sex, const std::shared_ptr<const Color> energyColor)
		: energyColor_(energyColor)
	{
		nImprint_ = nImprint;
		sex_ = sex;
	}

	int Companion::getNImprint() const{
		return nImprint_;
	}

	bool Companion::setNImprint(int nImprint) {
		if (nImprint > getMaxImprint() || nImprint < 0)
			return false;
		nImprint_ = nImprint;
		return true;
	}
}

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
#ifndef COMPANION_H
#define COMPANION_H

#include <memory>

#include <QObject>

#include "color.h"

namespace companion {

	enum class Sex {
		MALE,
		FEMALE,
		UNKNOWN,
	};

	class Companion : public QObject
	{
	public:
		Companion(int nImprint, Sex sex, std::shared_ptr<const Color> energyColor);
		int getNImprint() const;
		bool setNImprint(int nImprint);

		virtual int getMaxImprint() const = 0;
		
	private:
		int nImprint_ = -1;
		Sex sex_ = Sex::UNKNOWN;
		std::shared_ptr<const Color> energyColor_;
	};
}

#endif // COMPANION_H
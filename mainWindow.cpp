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
#include <iostream>

#include <QVBoxLayout>
#include <QTabWidget>
#include <QLabel>

#include "mainWindow.h"
#include "kavat.h"
#include "kubrow.h"

namespace ui {
	MainWindow::MainWindow() {
        
        QWidget* firstPageWidget = new QWidget;
        QLabel* firstLabel = new QLabel(firstPageWidget);
        firstLabel->setText("Kubrow");

        QWidget* secondPageWidget = new QWidget;
        QLabel* secondLabel = new QLabel(secondPageWidget);
        secondLabel->setText("Kavat");

        QWidget* thirdPageWidget = new QWidget;
        QLabel* thirdLabel = new QLabel(thirdPageWidget);
        thirdLabel->setText("Infested");

        QTabWidget* tabs = new QTabWidget(this);
        tabs->addTab(firstPageWidget, "Kubrow");
        tabs->addTab(secondPageWidget, "Kavat");
        tabs->addTab(thirdPageWidget, "Infested");

        QWidget* bottom = new QWidget(this);
        /*
        std::cout << bottom->sizePolicy().verticalStretch();
        bottom->sizePolicy().setVerticalStretch(5);
        std::cout << bottom->sizePolicy().verticalStretch();
        */
        mainLayout_ = new QVBoxLayout;
        mainLayout_->addWidget(tabs);
        mainLayout_->addWidget(bottom);
        setLayout(mainLayout_);
        
        resize(500, 400);


        companion::Kavat* cat = new companion::Kavat(
            companion::Sex::FEMALE,
            companion::Kavat::Breed::SMEETA,
            companion::Kavat::Head::TUFT,
            companion::Kavat::Body::HYACINTH,
            companion::Kavat::Tail::PEACOCK,
            companion::Kavat::HYACINTH_BLUE,
            companion::Kavat::HYACINTH_BLUE,
            companion::Kavat::HYACINTH_BLUE,
            companion::Kavat::HYACINTH_BLUE,
            companion::Kavat::AMBER
        );
        
        std::cout << cat->getNImprint() << std::endl;

        companion::Kubrow* kubrow = new companion::Kubrow(
            companion::Sex::MALE,
            companion::Kubrow::Breed::RAKSA,
            companion::Kubrow::Pattern::LOTUS,
            companion::Kubrow::Build::ATHLETIC,
            companion::Kubrow::AMBULAS_BLACK,
            companion::Kubrow::AMBULAS_BLACK,
            companion::Kubrow::AMBULAS_BLACK,
            companion::Kubrow::LIGHT_GOLD
        );

        std::cout << kubrow->getNImprint() << std::endl;
	}
}
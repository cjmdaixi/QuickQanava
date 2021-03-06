/*
    This file is part of QuickContainers library.

    Copyright (C) 2016  Benoit AUTHEMAN

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

//-----------------------------------------------------------------------------
// This file is a part of the QuickContainers library.
//
// \file    QuickContainer.h
// \author	benoit@destrat.io
// \date	2012 02 08
//-----------------------------------------------------------------------------

#ifndef QuickContainers_h
#define QuickContainers_h

// Qt headers
// Nil

// QuickContainers headers
#include "./qcmObjectModel.h"
#include "./qcmContainerModel.h"

struct QuickContainers {
    static void initialize() {
        qmlRegisterType< qcm::AbstractContainerModel >( "QuickContainers", 1, 0, "AbstractContainerModel" );
        qmlRegisterType< qcm::ObjectModel >( "QuickContainers", 1, 0, "ObjectModel");
    }
};

#endif // QuickContainers_h


/*  TemplatePickerItem.h
 *
 *  Copyright (C) 2013  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TemplatePickerItem_h
#define TemplatePickerItem_h

#include <QListWidget>

#include <QLabel>

#include "libglabels/Template.h"


///
/// Template Picker Item Widget
///
class TemplatePickerItem : public QListWidgetItem
{

	/////////////////////////////////
	// Life Cycle
	/////////////////////////////////
public:
	TemplatePickerItem( glabels::Template *tmplate, QListWidget *parent = 0 );


	/////////////////////////////////
	// Properties
	/////////////////////////////////
public:
	const glabels::Template *tmplate() const;


	/////////////////////////////////
	// Private Data
	/////////////////////////////////
private:
	glabels::Template *mTmplate;

};


#endif // TemplatePickerItem_h

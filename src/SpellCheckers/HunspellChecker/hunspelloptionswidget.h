/**************************************************************************
**
** Copyright (c) 2014 Carel Combrink
**
** This file is part of the SpellChecker Plugin, a Qt Creator plugin.
**
** The SpellChecker Plugin is free software: you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public License as
** published by the Free Software Foundation, either version 3 of the
** License, or (at your option) any later version.
**
** The SpellChecker Plugin is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public License
** along with the SpellChecker Plugin.  If not, see <http://www.gnu.org/licenses/>.
****************************************************************************/

#pragma once

#include "IOptionsWidget.h"

#include <QWidget>

namespace SpellChecker {
namespace Checker {
namespace Hunspell {

namespace Ui {
class HunspellOptionsWidget;
} // namespace Ui

class HunspellOptionsWidget
  : public IOptionsWidget
{
  Q_OBJECT

public:
  HunspellOptionsWidget( const QString& dictionary, const QString& userDictionary, QWidget* parent = 0 );
  ~HunspellOptionsWidget() override;

  void apply() override;

signals:
  void dictionaryChanged( const QString& dictionary );
  void userDictionaryChanged( const QString& userDictionary );

public slots:
  void updateDictionary( const QString& dictionary );
  void updateUserDictionary( const QString& userDictionary );

private slots:
  void toolButtonBrowseDictionaryClicked();
  void toolButtonBrowseUserDictionaryClicked();

private:
  Ui::HunspellOptionsWidget* ui;
};


} // namespace Hunspell
} // namespace Checker
} // namespace SpellChecker

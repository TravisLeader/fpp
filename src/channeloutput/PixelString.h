/*
 *   Pixel String Class for Falcon Pi Player (FPP)
 *
 *   Copyright (C) 2013 the Falcon Pi Player Developers
 *      Initial development by:
 *      - David Pitts (dpitts)
 *      - Tony Mace (MyKroFt)
 *      - Mathew Mrosko (Materdaddy)
 *      - Chris Pinkham (CaptainMurdoch)
 *      For additional credits and developers, see credits.php.
 *
 *   The Falcon Pi Player (FPP) is free software; you can redistribute it
 *   and/or modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation; either version 2 of
 *   the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _PIXELSTRING_H
#define _PIXELSTRING_H

#include <string>

using namespace::std;

class PixelString {
  public:
	PixelString();
	~PixelString();

	int  Init(string configStr);
	int  Init(int portNumber, int startChannel, int pixelCount,
		 string colorOrder, int nullNodes, int hybridMode,
		 int reverse, int grouping, int zigZag);
	void DumpConfig(void);

	int    m_portNumber;
	int    m_startChannel;
	int    m_pixelCount;
	string m_colorOrder;
	int    m_nullNodes;
	int    m_hybridMode;
	int    m_reverseDirection;
	int    m_grouping;
	int    m_zigZag;

	int    m_inputChannels;
	int    m_outputChannels;

	vector<int> m_outputMap;

  private:
	void SetupMap(void);

};

#endif /* _PIXELSTRING_H */

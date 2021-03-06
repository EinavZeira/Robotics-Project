/*
 * Config.h
 *
 *  Created on: May 28, 2016
 *      Author: colman
 */

#include <string>
#include <vector>
using namespace std;

/*
   Config
   Parse structured config files
   Config files contains lines with name-value assignements in the form "<name> = <value>".
   Trailing and leading whitespace is stripped. Parsed config entries are stored in
   a symbol map.
 */

class Config {
	public:
		/* Parse config file 'configFile'. If the process environment
		 * is provided, environment variables can be used as expansion symbols.
		 */
		Config(string fileName);

		~Config();

		void parse(string fileName);

		string mapLocation;
		int* startPosition;
		int* goal;
		int* robotSize;
		double mapResolutionCm;
		double gridResolutionCm;
};

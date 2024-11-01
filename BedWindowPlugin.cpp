#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BedWindowPlugin.h"

void BedWindowPlugin::input(std::string file) {
 inputfile = file;
}

void BedWindowPlugin::run() {}

void BedWindowPlugin::output(std::string file) {
 std::string outputfile = file;
 myCommand += "bedtools";
myCommand += " ";
myCommand += " makewindows ";
myCommand += " -w 2000 ";
myCommand += " -s 100 ";
myCommand += " -g "+inputfile + " ";
myCommand += "|awk \'{print $_\"\\tbin_\"i++}\' > "+outputfile;
std::cout << myCommand << std::endl;
 system(myCommand.c_str());
}

PluginProxy<BedWindowPlugin> BedWindowPluginProxy = PluginProxy<BedWindowPlugin>("BedWindow", PluginManager::getInstance());

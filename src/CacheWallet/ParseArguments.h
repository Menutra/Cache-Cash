#include "version.h"
#include "CryptoNoteConfig.h"

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>

struct Config {
    bool exit;

    std::string host;
    int port;
    
    bool walletGiven;
    bool passGiven;
    std::string walletFile;
    std::string walletPass;
};

char* getCmdOption(char ** begin, char ** end, const std::string & option);

bool cmdOptionExists(char** begin, char** end, const std::string& option);

Config parseArguments(int argc, char **argv);

void helpMessage();

void versionMessage();
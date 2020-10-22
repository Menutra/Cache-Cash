#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>

#include <Common/ColouredMsg.h>
#include <Common/ConsoleHandler.h>
#include <Common/StringTools.h>
#include <Common/PasswordContainer.h>

void confirmPassword(std::string walletPass);

bool confirm(std::string msg);

std::string formatAmount(uint64_t amount);
std::string formatDollars(uint64_t amount);
std::string formatCents(uint64_t amount);
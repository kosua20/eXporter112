#pragma once

namespace Log {

void info(const char* format, ...);

void warning(const char* format, ...);

void error(const char* format, ...);

void check(bool value, const char* format, ...);

}


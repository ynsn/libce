/**
 * MIT License
 *
 * Copyright (c) 2018 Yoram and project contributors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "version.h"

// Macro string helpers
#define MC_MACRO_STRING(s) #s
#define MC_STRINGIFY(s) MC_MACRO_STRING(s)

// Macro string
#define MC_VERSION_STRING \
    MC_STRINGIFY(MC_VERSION_MAJOR) "." \
    MC_STRINGIFY(MC_VERSION_MINOR) "." \
    MC_STRINGIFY(MC_VERSION_PATCH) "-"  MC_VERSION_SUFFIX

/**
 * Returns the version string
 * @return Char array containing the version string
 */
const char *mc_version() {
  return MC_VERSION_STRING;
}

/**
 * Returns the full version string
 * @return Char array containing the full version string
 */
const char *mc_full_version() {
  return MC_NAME " " MC_VERSION_STRING;
}
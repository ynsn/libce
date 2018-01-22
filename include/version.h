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

#ifndef LIBMC_VERSION_H
#define LIBMC_VERSION_H

#define MC_NAME "libmc"

/*
 * This library follows the semantic versioning 2.0 specifications.
 * Given a version number MAJOR.MINOR.PATCH, increment the:
 *
 *  - MAJOR version when you make incompatible API changes,
 *  - MINOR version when you add functionality in a backwards-compatible manner, and
 *  - PATCH version when you make backwards-compatible bug fixes.
 * Additional labels for pre-release and build metadata are available as extensions to the MAJOR.MINOR.PATCH format.
 */

#define MC_VERSION_MAJOR 1
#define MC_VERSION_MINOR 0
#define MC_VERSION_PATCH 0

#define MC_VERSION_SUFFIX "dev"

/**
 * Returns the version string
 * @return Char array containing the version string
 */
const char *mc_version(void);

/**
 * Returns the full version string
 * @return Char array containing the full version string
 */
const char *mc_full_version(void);

#endif //LIBMC_VERSION_H

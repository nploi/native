/**
 * Copyright (c) 2016 Food Tiny Project. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * Generic functions inspired from Python Builtin Functions
 *
 * We feel that Python has an awesome builtin functions so we would like to
 * rewrite it in C++ using Native Library
 *
 * Thanks to Python Authors
 * https://docs.python.org/2/library/functions.html
 * © Copyright 1990-2017, Python Software Foundation
 * All right reserve.
 */

#ifndef NATIVE_GENERIC_H
#define NATIVE_GENERIC_H

extern "C" {
#include "builtin.h"
};

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>

// Type casting
template <typename T> int Integer(T target);
template <typename T> long Long(T target);
template <typename T> char* String(T target);
template <typename T> double Double(T target);
template <typename T> float Float(T target);
template <typename T> bool Boolean(T target);
template <typename T> char *sha1Encode(T target);
// Math functions
//template <typename T> double round(double target, int precision);
double round(double target, int precision);


// Util functions
template <typename T> int len(T target);
template <typename T> int size(T target);
template <typename T> char* file(char *file_name);
template <typename T> bool file(char *file_name, char *file_content);

#endif //NATIVE_GENERIC_H
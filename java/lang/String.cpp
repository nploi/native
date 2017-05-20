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

#include "String.hpp"

using namespace Java::Lang;

String::String(const char *original) {
    this->original = (char*) original;
}

String::String(char *target) {
    this->original = target;
}

String::~String() {
}

String* String::parseChar(char target) {
    return new String(string_from_char(target));
}

String* String::parseCString(char *target) {
    return new String(target);
}

String* String::parseString(std::string target) {
    return new String(target.c_str());
}

String* String::parseShort(short target) {
    return new String(string_from_short(target));
}

String* String::parseInt(int target) {
    return new String(string_from_int(target));
}

String* String::parseLong(long target) {
    return new String(string_from_long(target));
}

String* String::parseFloat(float target) {
    return new String(string_from_float(target));
}

String* String::parseDouble(double target) {
    return new String(string_from_double(target));
}

char String::charValue() {
    return string_to_char(this->original);
}

char *String::cstringValue() {
    return this->original;
}

std::string String::stringValue() {
    return std::string(this->original);
}

short String::shortValue() {
    return string_to_short(this->original);
}

int String::intValue() {
    return string_to_int(this->original);
}

long String::longValue() {
    return string_to_long(this->original);
}

float String::floatValue() {
    return string_to_float(this->original);
}

double String::doubleValue() {
    return string_to_double(this->original);
}

int String::length() {
    return length_pointer_char(original);
}

String* String::toString() {
    return new String(this->original);
}
/**
 * Copyright 2017 Tiny Express Project. All rights reserved.
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

#ifndef NATIVE_JAVA_LANG_BOOLEAN_HPP
#define NATIVE_JAVA_LANG_BOOLEAN_HPP

#include "../Object/Object.hpp"
#include "../../Io/Serializable/Serializable.hpp"
#include "../../Lang/Comparable/Comparable.hpp"
#include "../../Lang/String/String.hpp"

using namespace Java::Lang;
using namespace Java::IO;

namespace Java {
		namespace Lang {
				class Boolean :
					public Object,
					public Comparable<Boolean>,
					public Serializable {
				private:
						bool original;
				
				public:
						const static boolean True = true;
						const static boolean False = false;
				
				public:
						Boolean(const boolean &target);
						Boolean(const_string target);
						~Boolean();
				
				public:
						boolean booleanValue() const;
						static int compare(const boolean &target1, const boolean &target2);
						int compareTo(const Boolean &target) const;
						static boolean getBoolean(const_string target);
						virtual int hashCode() const;
						static boolean parseBoolean(const_string target);
						String toString() const;
						static String toString(const boolean &target);
						static Boolean valueOf(boolean target);
						static boolean valueOf(const_string target);
						Boolean operator=(const Boolean &target);
						
						friend std::ostream &operator<<(std::ostream &os, const Boolean &target) {
							os << target.toString();
							return os;
						}
				};
		}
}
#endif // NATIVE_JAVA_LANG_BOOLEAN_HPP
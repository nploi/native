/**
 * Copyright 2017 Food Tiny Project. All rights reserved.
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

#ifndef JAVA_LANG_INTEGER_HPP_
#define JAVA_LANG_INTEGER_HPP_

#include "../Number/Number.hpp"
#include "../Comparable/Comparable.hpp"
#include "iostream"

using namespace Java::Lang;

/**
 * A constant holding the maximum value of type int
 */
static int MAX_VALUE_INTEGER = std::numeric_limits<int>::max(); // 

/**
 * A constant holding the minimum value of type int
 */
static int MIN_VALUE_INTEGER = std::numeric_limits<int>::min(); // 

namespace Java {
	namespace Lang {
		class Integer;
		
		class Integer : public virtual Number,
		                public virtual Comparable<Integer> {
		private:
			int original;
			string string_original;

		public:            
			/**
             * Integer initialization
             *
             * @param original
             */
            Integer();

            /**
             * Integer initialization
             *
             * @param original
             */
			Integer(int original);

            /**
             * Integer initialization
             *
             * @param string_original
             */
            Integer(String stringInput);

            /**
             * Integer initialization
             *
             * @param original
             */
			Integer(const Integer &target);

            /**
             * Integer Destructor
             */
			~Integer();
		
		public:
			char charValue() const;
			string stringValue() const;
			short shortValue() const;
			int intValue() const;
			long longValue() const;
			float floatValue() const;
			double doubleValue() const;
			
			string toString() const;
			static int parseInt(String target);
			int compareTo(const Integer &o) const override {
				if (hashCode() == o.hashCode()) {
					return 0;
				}
				if (instanceof<Integer>(o)) {
					if (original < o.original) {
						return -1;
					} else if (original == o.original) {
						return 0;
					}
				}
				return 1;
			}
		
		public:
			Integer operator=(const Integer &target);
			Integer operator+(const Integer &target);
			Integer operator-(const Integer &target);
			Integer operator/(const Integer &target);;
			Integer operator*(const Integer &target);
			Integer operator%(const Integer &target);
			
			boolean operator==(const Integer &target) const;
			boolean operator!=(const Integer &target) const;
			boolean operator<(const Integer &target) const;
			boolean operator>(const Integer &target) const;
			boolean operator<=(const Integer &target) const;
			boolean operator>=(const Integer &target) const;
			
			void operator+=(const Integer &target);
			void operator-=(const Integer &target);
			void operator/=(const Integer &target);
			void operator*=(const Integer &target);
			void operator%=(const Integer &target);

			friend std::ostream &operator<<(std::ostream &os, const Integer &target) {
				std::cout << target.original;
				return os;
			}

			/**
            * Returns the number of one-bits in the
            * two's complement binary representation
            * of the specified int value.
            *
            * @param int intInput
            * @return int
            */
           static int bitCount(int intInput);
		};
	}
}

#endif  // JAVA_LANG_INTEGER_HPP_

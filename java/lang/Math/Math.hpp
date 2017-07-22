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

// https://docs.oracle.com/javase/8/docs/api/java/lang/Math.html

#ifndef JAVA_LANG_MATH_HPP_
#define JAVA_LANG_MATH_HPP_

#include "../Object/Object.hpp"
#include "../Double/Double.hpp"
#include "../Float/Float.hpp"

namespace Java {
	namespace Lang {
		class Math final : public virtual Object {

        private:
			Math(){}
			static void initRGN();
		public:
            // e number
			static constexpr double E = 2.7182818284590452354;
            // pi number
			static constexpr double PI = 3.14159265358979323846;

            static long negativeZeroFloatBits;

            static long negativeZeroDoubleBits;


		public:
            /**
             * Returns the absolute value of an int value
             *
             * @param a
             * @return a if a is positive, else -a
             */
			static int abs(int a);

            /**
             * Returns the absolute value of an float value
             *
             * @param a
             * @return a if a is positive, else -a
             */
			static float abs(float a);

            /**
             * Returns the absolute value of an long value
             *
             * @param a
             * @return a if a is positive, else -a
             */
			static long abs(long a);

            /**
             * Returns the absolute value of an double value
             *
             * @param a
             * @return a if a is positive, else -a
             */
			static double abs(double a);

            /**
             * Returns the arc cosine of a value
             *
             * @param value
             * @return principal arc cosine of x, in the interval [0,pi] radians.
             * If the argument is NaN or its absolute value is greater than 1, then the result is NaN.
             */
			static double acos(double a);

            /**
             * Returns the arc sine of a value
             *
             * @param value
             * @return principal arc sine of x, in the interval [-pi/2,+pi/2]] radians.
             * If the argument is NaN or its absolute value is greater than 1, then the result is NaN.
             * If the argument is zero, then the result is a zero with the same sign as the argument.
             */
			static double asin(double a);

            /**
             * Returns the arc tangent of a value
             *
             * @param value
             * @return Principal arc tangent of x, in the interval [-pi/2,+pi/2] radians.
             * If the argument is NaN, then the result is NaN.
             * If the argument is zero, then the result is a zero with the same sign as the argument.
             */
			static double atan(double a);

            /**
             * Returns the principal value of the arc tangent of y/x
             *
             * @param corX
             * @param corY
             * @return Principal arc tangent of y/x, in the interval [-pi,+pi] radians.
             * If either argument is NaN, then the result is NaN.
             * If the first argument is positive zero and the second argument is positive, or the first argument is positive and finite and the second argument is positive infinity, then the result is positive zero.
             * If the first argument is negative zero and the second argument is positive, or the first argument is negative and finite and the second argument is positive infinity, then the result is negative zero.
             * If the first argument is positive zero and the second argument is negative, or the first argument is positive and finite and the second argument is negative infinity, then the result is the double value closest to pi.
             * If the first argument is negative zero and the second argument is negative, or the first argument is negative and finite and the second argument is negative infinity, then the result is the double value closest to -pi.
             * If the first argument is positive and the second argument is positive zero or negative zero, or the first argument is positive infinity and the second argument is finite, then the result is the double value closest to pi/2.
             * If the first argument is negative and the second argument is positive zero or negative zero, or the first argument is negative infinity and the second argument is finite, then the result is the double value closest to -pi/2.
             * If both arguments are positive infinity, then the result is the double value closest to pi/4.
             * If the first argument is positive infinity and the second argument is negative infinity, then the result is the double value closest to 3*pi/4.
             * If the first argument is negative infinity and the second argument is positive infinity, then the result is the double value closest to -pi/4.
             * If both arguments are negative infinity, then the result is the double value closest to -3*pi/4.
             */
			static double atan2(double corX, double corY);

            /**
             * Returns the sum of its arguments, throwing an exception if the result overflows a long.
             *
             * @param a
             * @param b
             * @throw ArithmeticException("long overflow")
             * @return long
             */
			static long addExact(long a, long b);

            /**
             * Returns the sum of its arguments, throwing an exception if the result overflows a long.
             *
             * @param a
             * @param b
             * @throw ArithmeticException("integer overflow")
             * @return int
             */
			static int addExact(int a, int b);

            /**
             * Returns the cube root of a double value.
             *
             * @param a
             * @return
             *  If the argument is NaN, then the result is NaN.
             *  If the argument is infinite, then the result is an
             *  infinity with the same sign as the argument.
             *  If the argument is zero, then the result is a zero
             *  with the same sign as the argument.
             */
			static double cbrt(double a);

            /**
             * Returns the smallest (closest to negative infinity) double value
             * that is greater than or equal to the argument and is equal to a mathematical integer.
             *
             * @param a
             * @return double
             * If the argument value is already equal to a mathematical integer,
             * then the result is the same as the argument.
             * If the argument is NaN or an infinity or positive zero or negative zero,
             * then the result is the same as the argument.
             * If the argument value is less than zero but greater than -1.0,
             * then the result is negative zero.
             */
			static double ceil(double a);

            /**
             * Returns the first double argument with the sign of the second double argument.
             *
             * @param magnitude
             * @param sign
             * @return double
             */
			static double copySign(double magnitude, double sign);

            /**
             * Returns the first float argument with the sign of the second float argument.
             *
             * @param magnitude
             * @param sign
             * @return float
             */
			static float copySign(float magnitude, float sign);

            /**
             * Returns the trigonometric cosine of an angle
             *
             * @param a
             * @return the cosine of the argument
             * If the argument is NaN or an infinity, then the result is NaN.
             */
			static double cos(double a);

            /**
             * Returns the hyperbolic cosine of a double value.
             *
             * @param a
             * @return the hyperbolic cosine of a
             *  If the argument is NaN, then the result is NaN.
             *  If the argument is infinite, then the result is positive infinity.
             *  If the argument is zero, then the result is 1.0.
             */
			static double cosh(double a);

            /**
             * Returns the argument decremented by one,
             * throwing an exception if the result overflows an long.
             *
             * @param a
             * @throw ArithmeticException("long overflow")
             * @return long
             */
			static long decrementExact(long a);

            /**
             * Returns the argument decremented by one,
             * throwing an exception if the result overflows an long.
             *
             * @param a
             * @throw ArithmeticException("integer overflow")
             * @return int
             */
			static int decrementExact(int a);

            /**
             * Returns Euler's number e raised to the power of a double value
             *
             * @param a
             * @return the value (e^a),
             * If the argument is NaN, the result is NaN.
             * If the argument is positive infinity, then the result is positive infinity.
             * If the argument is negative infinity, then the result is positive zero.
             */
			static double exp(double a);

            /**
             * Returns Euler's number e raised to the power of a double value then subtract 1.
             *
             * @param a
             * @return the value (e^a)-1
             * If the argument is NaN, the result is NaN.
             * If the argument is positive infinity, then the result is positive infinity.
             * If the argument is negative infinity, then the result is positive zero.
             */
			static double expm1(double a);

            /**
             * Returns the largest (closest to positive infinity) double value
             * that is less than or equal
             * to the argument and is equal to a mathematical integer.
             *
             * @param a
             * @return double
             * If the argument value is already equal to a mathematical integer,
             * then the result is the same as the argument.
             * If the argument is NaN or an infinity or positive zero or negative zero,
             * then the result is the same as the argument.
             */
			static double floor(double a);

            /**
             * Returns the largest (closest to positive infinity)
             * int value that is less than or equal to the algebraic quotient
             *
             * @param a
             * @param b
             * @throw ArithmeticException
             * @return int
             */
			static int floorDiv(int a, int b);

            /**
             * Returns the largest (closest to positive infinity)
             * int value that is less than or equal to the algebraic quotient
             *
             * @param a
             * @param b
             * @throw ArithmeticException
             * @return long
             */
			static long floorDiv(long a, long b);

            /**
             * Returns the floor modulus of the int arguments.
             *
             * @param a
             * @param b
             * @throw ArithmeticException
             * @return int
             * If the signs of the arguments are the same, the results of floorMod
             * and the % operator are the same.
             * If the signs of the arguments are different, the results differ from the % operator.
             */
			static int floorMod(int a, int b);

            /**
             * Returns the floor modulus of the int arguments.
             *
             * @param a
             * @param b
             * @throw ArithmeticException
             * @return long
             * If the signs of the arguments are the same, the results of floorMod
             * and the % operator are the same.
             * If the signs of the arguments are different, the results differ from the % operator.
             */
			static long floorMod(long a, long b);

            /**
             * Returns the unbiased exponent used in the representation of a double
             *
             * @param a
             * @return int
             * If the argument is NaN or infinite, then the result is Double::MAX_EXPONENT + 1.
             * If the argument is zero or subnormal, then the result is Double::MIN_EXPONENT -1.
             */
			static int getExponent(double a);

            /**
             * Returns the unbiased exponent used in the representation of a float
             *
             * @param a
             * @return int
             * If the argument is NaN or infinite, then the result is Float::MAX_EXPONENT + 1.
             * If the argument is zero or subnormal, then the result is Float::MIN_EXPONENT -1.
             */
			static int getExponent(float a);

            /**
             * Returns sqrt(x2 +y2) without intermediate overflow or underflow.
             *
             * @param a
             * @param b
             * @return double
             *
             * If either argument is infinite, then the result is positive infinity.
             * If either argument is NaN and neither argument is infinite, then the result is NaN.
             */
			static double hypot(double a, double b);

            /**
             * Computes the remainder operation on two arguments as prescribed by the IEEE 754 standard.
             *
             * @param dividend
             * @param divisor
             * @return the remainder when dividend is divided by divisor.
             * If either argument is NaN, or the first argument is infinite,
             * or the second argument is positive zero or negative zero, then the result is NaN.
             * If the first argument is finite and the second argument is infinite,
             * then the result is the same as the first argument.
             */
			static double IEEEremainder(double devidend, double devisor);

            /**
             * Returns the argument incremented by one,
             * throwing an exception if the result overflows a long.
             *
             * @param a
             * @throw ArithmeticException("integer overflow")
             * @return int
             */
			static int incrementExact(int a);

            /**
             * Returns the argument incremented by one,
             * throwing an exception if the result overflows a long.
             *
             * @param a
             * @throw ArithmeticException("long overflow")
             * @return long
             */
			static long incrementExact(long a);

            /**
             * Returns the natural logarithm (base e) of a double value
             *
             * @param a
             * @return double
             * If the argument is NaN or less than zero, then the result is NaN.
             * If the argument is positive infinity, then the result is positive infinity.
             * If the argument is positive zero or negative zero, then the result is negative infinity.
             */
			static double log(double a);

            /**
             * Returns the base 10 logarithm of a double value
             *
             * @param a
             * @return double
             * If the argument is NaN or less than zero, then the result is NaN.
             * If the argument is positive infinity, then the result is positive infinity.
             * If the argument is positive zero or negative zero, then the result is negative infinity.
             * If the argument is equal to 10n for integer n, then the result is n.
             */
			static double log10(double a);

            /**
             * Returns the natural logarithm of the sum of the argument and 1
             *
             * @param a
             * @return double
             * If the argument is NaN or less than -1, then the result is NaN.
             * If the argument is positive infinity, then the result is positive infinity.
             * If the argument is negative one, then the result is negative infinity.
             * If the argument is zero, then the result is a zero with the same sign as the argument.
             */
			static double log1p(double a);

            /**
             * Returns the greater of two int values.
             *
             * @param a
             * @param b
             * @return a if a > b; else b
             */
			static int max(int a, int b);

            /**
             * Returns the greater of two float values.
             *
             * @param a
             * @param b
             * @return a if a > b; else b
             */
			static float max(float a, float b);

            /**
             * Returns the greater of two long values.
             *
             * @param a
             * @param b
             * @return a if a > b; else b
             */
			static long max(long a, long b);

            /**
             * Returns the greater of two double values.
             *
             * @param a
             * @param b
             * @return a if a > b; else b
             */
			static double max(double a, double b);

            /**
             * Returns the smaller of two int values.
             *
             * @param a
             * @param b
             * @return a if a<b; else b
             */
			static int min(int a, int b);

            /**
             * Returns the greater of two float values.
             *
             * @param a
             * @param b
             * @return a if a < b; else b
             */
			static float min(float a, float b);

            /**
             * Returns the greater of two long values.
             *
             * @param a
             * @param b
             * @return a if a < b; else b
             */
			static long min(long a, long b);

            /**
             * Returns the greater of two double values.
             *
             * @param a
             * @param b
             * @return a if a < b; else b
             */
			static double min(double a, double b);
            /**
             * Returns the product of the arguments,
             * throwing an exception if the result overflows an int.
             *
             * @param a
             * @param b
             * @throw ArithmeticException("integer overflow")
             * @return
             */
            static int multiplyExact(int a, int b);

            /**
            * Returns the product of the arguments,
            * throwing an exception if the result overflows an int.
            *
            * @param a
            * @param b
            * @throw ArithmeticException("long overflow")
            * @return
            */
            static long multiplyExact(long a, long b);

            /**
             * Returns the negation of the argument,
             * throwing an exception if the result overflows a long.
             *
             * @param a
             * @throw ArithmeticException("integer overflow")
             * @return int
             */
            static int negateExact(int a);

            /**
             * Returns the negation of the argument,
             * throwing an exception if the result overflows a long.
             *
             * @param a
             * @throw ArithmeticException("long overflow")
             * @return long
             */
            static long negateExact(long a);

            /**
             * Returns the floating-point number adjacent to the first argument in the direction
             * of the second argument.If both arguments compare as equal the second argument is returned.
             *
             * @param start
             * @param direction
             * @return double
             * If either argument is a NaN, then NaN is returned.
             * If both arguments are signed zeros, a value equivalent to direction is returned.
             * If start is ±Double.MIN_VALUE and direction has a value such that the result should
             *  have a smaller magnitude, then a zero with the same sign as start is returned.
             * If start is infinite and direction has a value such that the result should have
             *  a smaller magnitude, Double.MAX_VALUE with the same sign as start is returned.
             * If start is equal to ± Double.MAX_VALUE and direction has a value such that the
             *  result should have a larger magnitude, an infinity with same sign as start is returned.
             */
			static double nextAfter(double start, double direction);

            /**
             * Returns the floating-point number adjacent to the first argument in the direction
             * of the second argument.If both arguments compare as equal the second argument is returned.
             *
             * @param start
             * @param direction
             * @return float
             * If either argument is a NaN, then NaN is returned.
             * If both arguments are signed zeros, a value equivalent to direction is returned.
             * If start is ±Float.MIN_VALUE and direction has a value such that the result should
             *  have a smaller magnitude, then a zero with the same sign as start is returned.
             * If start is infinite and direction has a value such that the result should have
             *  a smaller magnitude, Float.MAX_VALUE with the same sign as start is returned.
             * If start is equal to ± Float.MAX_VALUE and direction has a value such that the
             *  result should have a larger magnitude, an infinity with same sign as start is returned.
             */
			static float nextAfter(float start, double direction);

            /**
             * Returns the floating-point value adjacent to f in the direction of negative infinity.
             *
             * @param a
             * @return double
             *  If the argument is NaN, the result is NaN.
             *  If the argument is negative infinity, the result is negative infinity.
             *  If the argument is zero, the result is -Double.MIN_VALUE
             */
            static double nextDown(double a);

            /**
             * Returns the floating-point value adjacent to f in the direction of negative infinity.
             *
             * @param a
             * @return float
             *  If the argument is NaN, the result is NaN.
             *  If the argument is negative infinity, the result is negative infinity.
             *  If the argument is zero, the result is -Double.MIN_VALUE
             */
            static float nextDown(float a);

            /**
             * Returns the floating-point value adjacent to f in the direction of positive infinity.
             *
             * @param a
             * @return float
             * If the argument is NaN, the result is NaN.
             * If the argument is positive infinity, the result is positive infinity.
             * If the argument is zero, the result is Float.MIN_VALUE
             */
			static float nextUp(float a);

            /**
             * Returns the floating-point value adjacent to f in the direction of positive infinity.
             *
             * @param a
             * @return double
             * If the argument is NaN, the result is NaN.
             * If the argument is positive infinity, the result is positive infinity.
             * If the argument is zero, the result is Double.MIN_VALUE
             */
			static double nextUp(double a);

            /**
             * Returns the value of the first argument raised to the power of the second argument
             *
             * @param base
             * @param exponent
             * @return double
             */
			static double pow(double base, double exponent);

            /**
             * Returns a floating-point power of two in the normal range.
             *
             * @param n
             * @throw AssertionError
             * @return double
             */
            static double powerOfTwoD(int n);

            /**
             * Returns a floating-point power of two in the normal range.
             *
             * @param n
             * @throw AssertionError
             * @return float
             */
            static float powerOfTwoF(int n);

            /**
             * Returns a double value with a positive sign, greater than or equal to 0.0
             * and less than 1.0
             *
             * @return double
             */
			static double random();

            /**
             * Returns the double value that is closest in value to the argument
             * and is equal to a mathematical integer
             *
             * @param a
             * @return double
             * If the argument value is already equal to a mathematical integer,
             * then the result is the same as the argument.
             * If the argument is NaN or an infinity or positive zero or negative zero,
             * then the result is the same as the argument.
             */
			static double rint(double a);

            /**
             * Returns the closest int to the argument.
             *
             * @param a
             * @return int
             * If the argument is NaN, the result is 0.
             * If the argument is negative infinity or any value less than or equal
             * to the value of Integer.MIN_VALUE, the result is equal to the value of Integer.MIN_VALUE.
             * If the argument is positive infinity or any value greater than or equal
             * to the value of Integer.MAX_VALUE, the result is equal to the value of Integer.MAX_VALUE.
             */
			static int round(float a);

            /**
             * Returns the closest long to the argument.
             *
             * @param a
             * @return long
             * If the argument is NaN, the result is 0.
             * If the argument is negative infinity or any value less than or equal
             * to the value of Long.MIN_VALUE, the result is equal to the value of Integer.MIN_VALUE.
             * If the argument is positive infinity or any value greater than or equal
             * to the value of Long.MAX_VALUE, the result is equal to the value of Integer.MAX_VALUE.
             */
			static long round(double a);

            /**
             * Return a × 2^scaleFactor rounded
             *
             * @param a
             * @param scaleFactor
             * @return float
             * If the first argument is NaN, NaN is returned.
             * If the first argument is infinite, then an infinity of the same sign is returned.
             * If the first argument is zero, then a zero of the same sign is returned.
             */
			static float scalb(float a, int scaleFactor);

            /**
             * Return a × 2^scaleFactor rounded
             *
             * @param a
             * @param scaleFactor
             * @return double
             * If the first argument is NaN, NaN is returned.
             * If the first argument is infinite, then an infinity of the same sign is returned.
             * If the first argument is zero, then a zero of the same sign is returned.
             */
			static double scalb(double a, int scaleFactor);

            /**
             * Returns the signum function of the argument
             *
             * @param a
             * @return zero if the argument is zero, 1.0 if the argument is greater than zero,
             * -1.0 if the argument is less than zero.
             * If the argument is NaN, then the result is NaN.
             * If the argument is positive zero or negative zero, then the result
             * is the same as the argument.
             */
			static double signum(double a);

            /**
             * Returns the signum function of the argument
             *
             * @param a
             * @return zero if the argument is zero, 1.0 if the argument is greater than zero,
             * -1.0 if the argument is less than zero.
             * If the argument is NaN, then the result is NaN.
             * If the argument is positive zero or negative zero, then the result
             * is the same as the argument.
             */
			static float signum(float a);

            /**
             * Returns the trigonometric sine of an angle
             *
             * @param a
             * @return the sine of the a
             * If the argument is NaN or an infinity, then the result is NaN.
             * If the argument is zero, then the result is a zero with the same sign as the argument.
             */
			static double sin(double a);

            /**
             * Returns the hyperbolic sine of a double value.
             *
             * @param a
             * @return the hyperbolic sine of a
             * If the argument is NaN, then the result is NaN.
             * If the argument is infinite, then the result is an infinity with the same sign as the argument.
             * If the argument is zero, then the result is a zero with the same sign as the argument.
             */
			static double sinh(double a);

            /**
             * Returns the correctly rounded positive square root of a double value
             *
             * @param a
             * @return double
             * If the argument is NaN or less than zero, then the result is NaN.
             * If the argument is positive infinity, then the result is positive infinity.
             * If the argument is positive zero or negative zero, then the result is
             * the same as the argument.
             */
			static double sqrt(double a);

            /**
             * Returns the difference of the arguments,
             * throwing an exception if the result overflows an long.
             *
             * @param a
             * @param b
             * @throw ArithmeticException("long overflow")
             * @return
             */
            static long subtractExact(long a, long b);

            /**
             * Returns the difference of the arguments,
             * throwing an exception if the result overflows an int.
             *
             * @param a
             * @param b
             * @throw ArithmeticException("integer overflow")
             * @return int
             */
            static int subtractExact(int a, int b);

            /**
             * Returns the trigonometric tangent of an angle
             *
             * @param a
             * @return the tangent of the a
             * If the argument is NaN or an infinity, then the result is NaN.
             * If the argument is zero, then the result is a zero with the same sign as the argument.
             */
			static double tan(double a);

            /**
             * Returns the hyperbolic tangent of a double value.
             *
             * @param a
             * @return the hyperbolic tangent of a
             * If the argument is NaN, then the result is NaN.
             * If the argument is zero, then the result is a zero with the same sign as the argument.
             * If the argument is positive infinity, then the result is +1.0.
             * If the argument is negative infinity, then the result is -1.0.
             */
			static double tanh(double a);

            /**
             * Converts an angle measured in radians to an approximately equivalent angle
             * measured in degrees.
             *
             * @param angleRadian
             * @return double
             * If the argument is NaN, the result is NaN.
             * If the argument is positive infinity, then the result is positive infinity.
             * If the argument is negative infinity, then the result is positive zero.
             */
			static double toDegrees(double angleRadian);

            /**
             * Returns the value of the long argument;
             * throwing an exception if the value overflows an int.
             *
             * @param a
             * @throw ArithmeticException("integer overflow")
             * @return
             */
            static int toIntExact(long a);

            /**
             * Converts an angle measured in degrees to an approximately equivalent angle measured in radians.
             * The conversion from radians to degrees is generally inexact;
             * users should not expect cos(toRadians(90.0)) to exactly equal 0.0.
             *
             * @param angleDegree
             * @return
             */
			static double toRadians(double angleDegree);

            /**
             * Returns the size of an ulp of the argument.
             *
             * @param a
             * @throw AssertionError
             * @return
             *  If the argument is NaN, then the result is NaN.
             *  If the argument is positive or negative infinity, then the result is positive infinity.
             *  If the argument is positive or negative zero, then the result is Float::MIN_VALUE.
             *  If the argument is ±Float::MAX_VALUE, then the result is equal to 2^104.
             */
			static float ulp(float a);

            /**
             * Returns the size of an ulp of the argument.
             *
             * @param a
             * @throw AssertionError
             * @return
             *  If the argument is NaN, then the result is NaN.
             *  If the argument is positive or negative infinity, then the result is positive infinity.
             *  If the argument is positive or negative zero, then the result is Double.MIN_VALUE.
             *  If the argument is ±Double.MAX_VALUE, then the result is equal to 2^971.
             */
			static double ulp(double a);
		};

		/**
		 * Class to hold a random number generator for Math::random
		 */
        class RandomNumberGeneratorHolder {
            static RandomNumberGeneratorHolder *instance;

        public:
            RandomNumberGeneratorHolder(){
                //randomNumberGenerator.Random();
            };

            //Random randomNumberGenerator;

            static RandomNumberGeneratorHolder *getInstance()
            {
                if (!instance)
                    instance = new RandomNumberGeneratorHolder();
                return instance;
            }
        };
	}
}

#endif  // JAVA_LANG_MATH_HPP_
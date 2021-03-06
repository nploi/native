/**
 * Copyright (c) 2016 Tiny Express Project. All rights reserved.
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

#include "../../../Test.hpp"
#include "StringIndexOutOfBoundsException.hpp"

using namespace Java::Lang;

TEST (JavaLangStringIndexOutOfBoundsException, Constructor) {
	// Constructs a new StringIndexOutOfBoundsExceptionConstructor with null as its detail message.
	StringIndexOutOfBoundsException stringIndexOutOfBoundsExceptionWithNullMessage;
	assertEquals("", stringIndexOutOfBoundsExceptionWithNullMessage.getMessage());
	
	// Constructs a new StringIndexOutOfBoundsExceptionConstructor with the specified detail message.
	StringIndexOutOfBoundsException stringIndexOutOfBoundsExceptionWithMessage = StringIndexOutOfBoundsException("StringIndexOutOfBoundsException with the specified message");
	assertEquals("StringIndexOutOfBoundsException with the specified message", stringIndexOutOfBoundsExceptionWithMessage.getMessage());
	
	// Constructs a new StringIndexOutOfBoundsExceptionConstructor with the specified detail message and cause.
	StringIndexOutOfBoundsException stringIndexOutOfBoundsExceptionWithMessageAndCause = StringIndexOutOfBoundsException("StringIndexOutOfBoundsException with the specified message and cause", &stringIndexOutOfBoundsExceptionWithMessage);
	assertEquals("StringIndexOutOfBoundsException with the specified message and cause", stringIndexOutOfBoundsExceptionWithMessageAndCause.getMessage());
	assertEquals("StringIndexOutOfBoundsException with the specified message", stringIndexOutOfBoundsExceptionWithMessageAndCause.getCause()->getMessage());
	
	// Constructs a new StringIndexOutOfBoundsExceptionConstructor with the specified cause.
	StringIndexOutOfBoundsException stringIndexOutOfBoundsExceptionWithCause = StringIndexOutOfBoundsException(&stringIndexOutOfBoundsExceptionWithMessageAndCause);
	assertEquals("StringIndexOutOfBoundsException with the specified message and cause", stringIndexOutOfBoundsExceptionWithCause.getCause()->getMessage());
	assertEquals("StringIndexOutOfBoundsException with the specified message", stringIndexOutOfBoundsExceptionWithCause.getCause()->getCause()->getMessage());
	
	// Constructs a new StringIndexOutOfBoundsException class with an argument indicating the illegal index.
	StringIndexOutOfBoundsException stringIndexOutOfBoundsExceptionWithIllegalIndex = StringIndexOutOfBoundsException(999);
	assertEquals("String index out of range: 999", stringIndexOutOfBoundsExceptionWithIllegalIndex.getMessage());
}

TEST (JavaLangStringIndexOutOfBoundsException, TryCatch) {
	try {
		throw StringIndexOutOfBoundsException("Throw StringIndexOutOfBoundsException");
	} catch (Exception e) {
		assertEquals("Throw StringIndexOutOfBoundsException", e.getMessage());
	}
}

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/IllformedLocaleException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilIllformedLocaleException")
#ifdef RESTRICT_JavaUtilIllformedLocaleException
#define INCLUDE_ALL_JavaUtilIllformedLocaleException 0
#else
#define INCLUDE_ALL_JavaUtilIllformedLocaleException 1
#endif
#undef RESTRICT_JavaUtilIllformedLocaleException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilIllformedLocaleException_) && (INCLUDE_ALL_JavaUtilIllformedLocaleException || defined(INCLUDE_JavaUtilIllformedLocaleException))
#define JavaUtilIllformedLocaleException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../java/lang/RuntimeException.h"

/*!
 @brief Thrown when a locale subtag or field is not well formed.
 See <code>Locale</code> and <code>Locale.Builder</code>.
 @since 1.7
 */
@interface JavaUtilIllformedLocaleException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new instance with no detail message and an error index
 of <code>-1</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance with the specified error message.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a new instance with the specified error message and
 error index.
 */
- (instancetype)initWithNSString:(NSString *)message
                         withInt:(jint)errorIndex;

- (jint)getErrorIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllformedLocaleException)

FOUNDATION_EXPORT void JavaUtilIllformedLocaleException_init(JavaUtilIllformedLocaleException *self);

FOUNDATION_EXPORT JavaUtilIllformedLocaleException *new_JavaUtilIllformedLocaleException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilIllformedLocaleException *create_JavaUtilIllformedLocaleException_init();

FOUNDATION_EXPORT void JavaUtilIllformedLocaleException_initWithNSString_(JavaUtilIllformedLocaleException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilIllformedLocaleException *new_JavaUtilIllformedLocaleException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilIllformedLocaleException *create_JavaUtilIllformedLocaleException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaUtilIllformedLocaleException_initWithNSString_withInt_(JavaUtilIllformedLocaleException *self, NSString *message, jint errorIndex);

FOUNDATION_EXPORT JavaUtilIllformedLocaleException *new_JavaUtilIllformedLocaleException_initWithNSString_withInt_(NSString *message, jint errorIndex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilIllformedLocaleException *create_JavaUtilIllformedLocaleException_initWithNSString_withInt_(NSString *message, jint errorIndex);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllformedLocaleException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilIllformedLocaleException")

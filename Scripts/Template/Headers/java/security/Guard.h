//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/Guard.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityGuard")
#ifdef RESTRICT_JavaSecurityGuard
#define INCLUDE_ALL_JavaSecurityGuard 0
#else
#define INCLUDE_ALL_JavaSecurityGuard 1
#endif
#undef RESTRICT_JavaSecurityGuard

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityGuard_) && (INCLUDE_ALL_JavaSecurityGuard || defined(INCLUDE_JavaSecurityGuard))
#define JavaSecurityGuard_

/*!
 @brief <code>Guard</code> implementors protect access to other objects.
 */
@protocol JavaSecurityGuard < NSObject, JavaObject >

/*!
 @brief Checks whether access to the specified <code>Object</code> should be granted.
 This method returns silently if access is granted, otherwise a <code>SecurityException</code>
  is thrown.
 @param object
 the object to be protected by this <code>Guard</code>.
 @throws SecurityException
 if access is not granted.
 */
- (void)checkGuardWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityGuard)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityGuard)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityGuard")

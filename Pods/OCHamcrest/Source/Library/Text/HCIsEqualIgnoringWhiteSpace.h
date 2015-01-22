//  OCHamcrest by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2014 hamcrest.org. See LICENSE.txt

#import <OCHamcrest/HCBaseMatcher.h>


@interface HCIsEqualIgnoringWhiteSpace : HCBaseMatcher

+ (instancetype)isEqualIgnoringWhiteSpace:(NSString *)string;
- (instancetype)initWithString:(NSString *)string;

@end


FOUNDATION_EXPORT id HC_equalToIgnoringWhiteSpace(NSString *aString);

/**
 equalToIgnoringWhiteSpace(aString) -
 Matches if object is a string equal to a given string, ignoring differences in whitespace.

 @param aString  The string to compare against as the expected value. This value must not be @c nil.

 This matcher first checks whether the evaluated object is a string. If so, it compares it with
 @a aString, ignoring differences in runs of whitespace.

 Example:

 @par
 @ref equalToIgnoringWhiteSpace(@"hello world")

 will match @verbatim "hello   world" @endverbatim

 (In the event of a name clash, don't \#define @c HC_SHORTHAND and use the synonym
 @c HC_equalToIgnoringWhiteSpace instead.)

 @ingroup text_matchers
 */
#ifdef HC_SHORTHAND
    #define equalToIgnoringWhiteSpace HC_equalToIgnoringWhiteSpace
#endif

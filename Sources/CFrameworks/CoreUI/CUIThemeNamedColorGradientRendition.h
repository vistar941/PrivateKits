//
//  CUIThemeNamedColorGradientRendition.h
//

#ifndef CUIThemeNamedColorGradientRendition_h
#define CUIThemeNamedColorGradientRendition_h

#include "CUIThemeRendition.h"

NS_ASSUME_NONNULL_BEGIN
@interface _CUIThemeNamedColorGradientRendition : CUIThemeRendition
@property (nonatomic, readonly) CGPoint gradientStartPoint;
@property (nonatomic, readonly) CGPoint gradientEndPoint;
@property (nonatomic, readonly) NSArray *colorStops;
@property (nonatomic, readonly) NSArray *colorNames;
@end
NS_ASSUME_NONNULL_END

#endif /* CUIThemeNamedColorGradientRendition_h */

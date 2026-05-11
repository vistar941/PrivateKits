//
//  CUINamedGradient.h
//

#ifndef CUINamedGradient_h
#define CUINamedGradient_h

#include "CUINamedLookup.h"

NS_ASSUME_NONNULL_BEGIN
@interface CUINamedGradient : CUINamedLookup
@property (nonatomic, readonly) CGPoint gradientStartPoint;
@property (nonatomic, readonly) CGPoint gradientEndPoint;
@property (nonatomic, readonly) NSArray *colorStops;
@property (nonatomic, readonly) NSArray *colors;
@end
NS_ASSUME_NONNULL_END

#endif /* CUINamedGradient_h */

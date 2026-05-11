//
//  CUINamedIconLayerGroup.h
//

#ifndef CUINamedIconLayerGroup_h
#define CUINamedIconLayerGroup_h

#include "CUINamedGradient.h"

NS_ASSUME_NONNULL_BEGIN
@interface CUINamedIconLayerGroup : CUINamedLookup
@property (nonatomic, strong) NSArray *layers;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) double blurStrength;
@property (nonatomic, copy) NSString *gradientOrColorName;
@property (nonatomic, readonly) CGColorRef color;
@property (nonatomic, readonly) CUINamedGradient *gradient;
@end
NS_ASSUME_NONNULL_END

#endif /* CUINamedIconLayerGroup_h */

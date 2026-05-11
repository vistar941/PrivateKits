//
//  CUINamedIconLayerStack.h
//

#ifndef CUINamedIconLayerStack_h
#define CUINamedIconLayerStack_h

#include "CUINamedLookup.h"

NS_ASSUME_NONNULL_BEGIN
@interface CUINamedIconLayerStack : CUINamedLookup
@property (nonatomic, strong) NSArray *layers;
@property (readonly) CGSize size;
@property (nonatomic, readonly) NSDictionary *renderingProperties;
@end
NS_ASSUME_NONNULL_END

#endif /* CUINamedIconLayerStack_h */

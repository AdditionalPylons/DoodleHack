/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFTableCellHelper.h"

@class UIViewController;
@protocol OFBannerProvider;

@interface OFBannerCell : OFTableCellHelper {
	UIViewController<OFBannerProvider>* bannerProvider;
}
@property(assign, nonatomic) UIViewController<OFBannerProvider>* bannerProvider;
-(id)initOFTableCellHelper:(id)helper;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end


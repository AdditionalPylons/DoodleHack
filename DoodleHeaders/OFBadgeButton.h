/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class OFBadgeView;

@interface OFBadgeButton : XXUnknownSuperclass {
	OFBadgeView* badgeView;
	CGPoint badgeOffset;
	bool awaken;
}
-(void)dealloc;
-(void)awakeFromNib;
-(void)didMoveToSuperview;
-(void)_positionBadge;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(void)setCenter:(CGPoint)center;
-(int)badgeNumber;
-(void)setBadgeNumber:(unsigned)number;
@end

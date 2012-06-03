/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class OFTabbedDashboardController, NSString, UIView, UIButton, UILabel;
@protocol OFTickerViewDelegate;

@interface OFTickerView : XXUnknownSuperclass {
	OFTabbedDashboardController* parent;
	UIView* cropView;
	UILabel* label;
	UIButton* xButton;
	id<OFTickerViewDelegate> delegate;
	BOOL scrollInProgress;
}
@property(assign, nonatomic) id<OFTickerViewDelegate> delegate;
@property(assign, nonatomic) BOOL scrollInProgress;
@property(retain, nonatomic) NSString* text;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_commonInit;
-(id)initWithDelegate:(id)delegate andFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
@end

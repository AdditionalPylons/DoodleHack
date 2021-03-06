/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class UIImage, NSMutableArray, UIView;

@interface OFButtonPanel : XXUnknownSuperclass {
	int maxButtonCount;
	CGSize buttonSize;
	CGSize buttonSpacing;
	UIImage* emptyButtonSlotImage;
	NSMutableArray* buttons;
	UIView* headerView;
	BOOL centeredVertically;
	int fixedNumColumns;
	BOOL withNavBar;
}
@property(assign, nonatomic) BOOL centeredVertically;
@property(assign, nonatomic) int fixedNumColumns;
@property(assign, nonatomic) BOOL withNavBar;
+(id)panelWithFrame:(CGRect)frame maxButtonCount:(int)count buttonSize:(CGSize)size buttonSpacing:(CGSize)spacing emptyImage:(id)image;
-(id)initWithFrame:(CGRect)frame maxButtonCount:(int)count buttonSize:(CGSize)size buttonSpacing:(CGSize)spacing emptyImage:(id)image;
-(void)dealloc;
-(void)configureMaxButtonCount:(int)count buttonSize:(CGSize)size buttonSpacing:(CGSize)spacing emptyImage:(id)image;
-(void)setHeaderView:(id)view;
-(void)setMaxButtons:(int)buttons;
-(void)setButton:(id)button atPosition:(int)position;
-(void)disableButton:(id)button withDecorationImage:(id)decorationImage;
-(void)removeAllButtons;
-(void)addPlaceholderButtons;
-(void)setFrame:(CGRect)frame;
-(void)layoutSubviews;
@end


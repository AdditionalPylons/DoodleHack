/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFTableCellHelper.h"

@class OFImageView, UIView, UILabel;

@interface OFAchievementCompareListCell : OFTableCellHelper {
	UILabel* titleLabel;
	UILabel* descriptionLabel;
	UIView* firstIconContainer;
	UIView* secondIconContainer;
	OFImageView* firstUnlockedIcon;
	OFImageView* secondUnlockedIcon;
	UIView* gamerScoreContainer;
	UILabel* gamerScoreLabel;
}
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UILabel* descriptionLabel;
@property(retain, nonatomic) UIView* firstIconContainer;
@property(retain, nonatomic) UIView* secondIconContainer;
@property(retain, nonatomic) OFImageView* firstUnlockedIcon;
@property(retain, nonatomic) OFImageView* secondUnlockedIcon;
@property(retain, nonatomic) UIView* gamerScoreContainer;
@property(retain, nonatomic) UILabel* gamerScoreLabel;
-(void)onResourceChanged:(id)changed;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFTableCellHelper.h"

@class OFImageView, UIImageView, UILabel;

@interface OFChallengeDefinitionStatsCell : OFTableCellHelper {
	UILabel* titleLabel;
	OFImageView* challengeIcon;
	UILabel* winsLabel;
	UILabel* winsHeader;
	UILabel* lossesOrComparisonLabel;
	UILabel* tiesLabel;
	UILabel* lossesOrComparisonHeader;
	UILabel* tiesHeader;
	UIImageView* winnerIcon;
}
-(void)onResourceChanged:(id)changed;
-(void)dealloc;
@end


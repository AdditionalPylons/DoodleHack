/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MKAnnotation.h"
#import "DoodleJump-Structs.h"

@class OFHighScore, OFBadgeView, OFLeaderboard_Sync;

@interface OFHighScoreAnnotation : XXUnknownSuperclass <MKAnnotation> {
	OFHighScore* _highScore;
	int rank;
	OFBadgeView* rankBadge;
	OFLeaderboard_Sync* leaderboardInfo;
	XXStruct_zYrK5D _coordinate;
}
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;
@property(retain, nonatomic) OFHighScore* highScore;
@property(assign, nonatomic) int rank;
@property(retain, nonatomic) OFBadgeView* rankBadge;
@property(retain, nonatomic) OFLeaderboard_Sync* leaderboardInfo;
-(id)initWithHighScore:(id)highScore leaderboardInfo:(id)info;
-(id)title;
-(id)subtitle;
-(void)updateRankBadge;
-(void)setScore:(id)score andLocation:(bool)location;
-(int)compareScores:(id)scores;
-(void)dealloc;
@end


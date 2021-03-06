/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFNotificationData.h"

@class OFAchievement;

@interface OFUnlockedAchievementNotificationData : OFNotificationData {
	OFAchievement* unlockedAchievement;
	double percentComplete;
}
@property(retain, nonatomic) OFAchievement* unlockedAchievement;
@property(assign, nonatomic) double percentComplete;
+(id)dataWithAchievement:(id)achievement andPercentComplete:(double)complete;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFNotificationView.h"

@class UILabel, OFChallengeToUser, OFImageView;

@interface OFChallengeNotificationView : OFNotificationView {
	OFChallengeToUser* challengeToUser;
	OFImageView* challengeIcon;
	OFImageView* challengerProfileImage;
	UILabel* challengerText;
}
@property(retain, nonatomic) OFImageView* challengeIcon;
@property(retain, nonatomic) OFImageView* challengerProfileImage;
@property(retain, nonatomic) UILabel* challengerText;
+(void)showChallengeNotice:(id)notice inView:(id)view;
-(void)_iconFinishedDownloading;
-(void)configureWithNotificationData:(id)notificationData inView:(id)view;
-(void)dealloc;
@end


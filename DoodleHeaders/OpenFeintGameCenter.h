/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString, NSDictionary, NSArray;

@interface OpenFeintGameCenter : XXUnknownSuperclass {
	NSDictionary* mappings;
	NSArray* friends;
	NSDictionary* categories;
	NSMutableDictionary* leaderboardsPerTimeScope;
	NSString* currentCategory;
	NSString* currentLeaderboardId;
	NSMutableDictionary* achievements;
	BOOL friendsValid;
	unsigned submittedCount;
	BOOL useCustomAsyncSubmission;
}
@property(retain, nonatomic) NSArray* friends;
@property(retain, nonatomic) NSMutableDictionary* leaderboardsPerTimeScope;
@property(retain, nonatomic) NSDictionary* mappings;
@property(retain, nonatomic) NSString* currentCategory;
@property(retain, nonatomic) NSString* currentLeaderboardId;
@property(retain, nonatomic) NSMutableDictionary* achievements;
@property(assign, nonatomic) unsigned submittedCount;
@property(assign, nonatomic) BOOL useCustomAsyncSubmission;
@property(assign, nonatomic) BOOL friendsValid;
@property(readonly, assign, nonatomic) BOOL playerValidated;
-(id)init;
-(void)gameCenterLogin;
-(void)finishLoading;
-(void)loadFriends;
-(void)loadAllScoresForOFLeaderboardId:(id)ofleaderboardId;
-(void)loadScores:(id)scores forScope:(int)scope;
-(void)loadAchievements;
-(void)dealloc;
@end

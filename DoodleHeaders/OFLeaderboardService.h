/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFService.h"
#import "DoodleJump-Structs.h"
#import "OFLeaderboardService.h"


@interface OFLeaderboardService : OFService {
}
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(id)getDownloadNotification;
+(void)getIndexOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getLeaderboardsComparisonWithUser:(id)user onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getLeaderboardsForApplication:(id)application onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getLeaderboardsForApplication:(id)application comparedToUserId:(id)userId onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
@end

@interface OFLeaderboardService (Private)
+(void)setupOfflineSupport:(bool)support;
+(void)synchLeaderboardsList:(id)list aggregateLeaderboards:(id)leaderboards forUser:(id)user setSynchTime:(BOOL)time;
+(id)getLastSyncDateForUserId:(id)userId;
+(id)getLastSyncDateUnixForUserId:(id)userId;
+(void)getLeaderboardsLocal:(const OFDelegate*)local onFailure:(const OFDelegate*)failure;
+(id)getLeaderboardsLocal;
+(id)getLeaderboard:(id)leaderboard;
+(id)getLeaderboardDetails:(id)details;
+(bool)hasLeaderboards;
+(id)getAggregateParents:(id)parents;
-(id)init;
-(void)dealloc;
@end

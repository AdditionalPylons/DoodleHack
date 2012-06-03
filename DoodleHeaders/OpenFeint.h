/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OpenFeint.h"
#import "OFCallbackable.h"
#import "CLLocationManagerDelegate.h"
#import "OFSessionObserver.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class OFRootController, OFLocation, OFPoller, OFSession, UIWindow, OFDelegatesContainer, OFProvider, NSDate, UIViewController, NSString, OFUser;
@protocol OpenFeintDelegate;

@interface OpenFeint : XXUnknownSuperclass <UIActionSheetDelegate, CLLocationManagerDelegate, OFCallbackable, OFSessionObserver> {
	OFDelegatesContainer* mDelegatesContainer;
	id<OpenFeintDelegate> mLaunchDelegate;
	bool mIsDashboardDismissing;
	UIWindow* mPresentationWindow;
	UIViewController* mQueuedRootModal;
	bool mIsQueuedModalAnOverlay;
	OFRootController* mOFRootController;
	NSString* mDisplayName;
	NSString* mShortDisplayName;
	OFProvider* mProvider;
	OFSession* mSession;
	OFPoller* mPoller;
	int mPreviousOrientation;
	int mDashboardOrientation;
	int mNotificationPosition;
	bool mPreviousStatusBarHidden;
	double mPollingFrequencyBeforeResigningActive;
	sqlite3* mOfflineDatabaseHandle;
	sqlite3* mBootstrapOfflineDatabaseHandle;
	bool mIsErrorPending;
	bool mPushNotificationsEnabled;
	bool mRequireOnlineStatus;
	bool mPromptUserForLogin;
	vector<OFDelegate,std::allocator<OFDelegate> > mBootstrapSuccessDelegates;
	vector<OFDelegate,std::allocator<OFDelegate> > mBootstrapFailureDelegates;
	bool mSuccessfullyBootstrapped;
	bool mAllowErrorScreens;
	bool mIsShowingOverlayModal;
	void* mReservedMemory;
	OFLocation* mLocation;
	OFUser* mCachedLocalUser;
	NSString* mProductKey;
	NSString* mSessionId;
	NSDate* mSessionStartDate;
	BOOL mIsUsingGameCenter;
	BOOL mDashboardVisible;
	BOOL mForceUserCheckOnBootstrap;
	bool mSnapDashboardRotation;
	BOOL mUseSandboxPushNotificationServer;
	BOOL mDeveloperDisabledUGC;
	BOOL mDeveloperDisabledLocationServices;
	struct {
		unsigned isConfirmAccountFlowActive : 1;
		unsigned hasDeferredLoginDelegate : 1;
		unsigned isOpenFeintDashboardInOnlineMode : 1;
		unsigned isBootstrapInProgress : 1;
	} _openFeintFlags;
	OFReachabilityObserver* reachabilityOb;
	BOOL appNeedsGetLocationOnForeground;
	BOOL mDashboardVisable;
}
@property(retain, nonatomic) NSString* mProductKey;
@property(assign, nonatomic) BOOL dashboardVisible;
@property(assign, nonatomic) BOOL mForceUserCheckOnBootstrap;
@property(assign, nonatomic) BOOL mUseSandboxPushNotificationServer;
+(unsigned)versionNumber;
+(id)releaseVersionString;
+(void)initializeWithProductKey:(id)productKey andSecret:(id)secret andDisplayName:(id)name andSettings:(id)settings andDelegates:(id)delegates;
+(void)shutdown;
+(void)setDashboardOrientation:(int)orientation;
+(void)launchDashboardWithDelegate:(id)delegate;
+(void)launchDashboard;
+(bool)canReceiveCallbacksNow;
+(void)dismissDashboard;
+(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation withSupportedOrientations:(int*)supportedOrientations andCount:(unsigned)count;
+(void)applicationDidRegisterForRemoteNotificationsWithDeviceToken:(id)application;
+(void)applicationDidFailToRegisterForRemoteNotifications;
+(id)getChallengeIdIfExist:(id)exist;
+(BOOL)applicationDidReceiveRemoteNotification:(id)application;
+(BOOL)respondToApplicationLaunchOptions:(id)applicationLaunchOptions;
+(bool)hasUserApprovedFeint;
+(void)userDidApproveFeint:(BOOL)user;
+(void)presentOpenFeintIntroFlowWebNavController:(OFDelegate*)controller deniedDelegate:(OFDelegate*)delegate;
+(void)userDidApproveFeint:(BOOL)user accountSetupCompleteDelegate:(OFDelegate*)delegate;
+(void)presentUserFeintApprovalModal:(OFDelegate*)modal deniedDelegate:(OFDelegate*)delegate;
+(bool)isOnline;
+(void)loginWithUserId:(id)userId onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)gameServerReachabilityChanged:(id)changed;
-(void)dealloc;
-(bool)canReceiveCallbacksNow;
-(void)applicationWillResignActive;
-(void)applicationDidBecomeActive;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(bool)_isOnline;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

@interface OpenFeint (AddOns)
+(void)registerAddOn:(Class)on;
+(void)preInitializeAddOns:(id)ons;
+(void)initializeAddOns:(id)ons;
+(void)shutdownAddOns;
+(void)setDefaultAddOnSettings:(OFSettingsRef)settings;
+(void)loadAddOnSettings:(OFSettingsRef)settings fromReader:(OFXmlReaderRef)reader;
+(BOOL)allowAddOnsToRespondToPushNotification:(id)pushNotification duringApplicationLaunch:(BOOL)launch;
+(void)notifyAddOnsUserLoggedIn;
+(void)notifyAddOnsUserLoggedInPostIntro;
+(void)notifyAddOnsOfflineUserLoggedInPostIntro;
+(void)notifyAddOnsUserLoggedOut;
@end

@interface OpenFeint (Dashboard)
+(void)launchDashboardWithWhosPlayingPage;
+(void)launchDashboardWithAchievementsPage;
+(void)launchDashboardWithListLeaderboardsPage;
+(void)launchDashboardWithHighscorePage:(id)highscorePage;
+(void)launchDashboardWithChallengesPage;
+(void)launchDashboardWithFindFriendsPage;
+(void)launchDashboardWithListGlobalChatRoomsPage;
+(void)launchDashboardWithiPurchasePage:(id)page;
+(void)launchDashboardWithSwitchUserPage;
+(void)launchDashboardWithForumsPage;
+(void)launchDashboardWithInvitePage;
+(void)launchDashboardWithSpecificInvite:(id)specificInvite;
+(void)launchDashboardWithIMToUser:(id)user initialText:(id)text;
+(void)launchDashboardWithSocialNotificationWithPrepopulatedText:(id)prepopulatedText originialMessage:(id)message imageName:(id)name linkedUrl:(id)url;
@end

@interface OpenFeint (GameCenter)
+(BOOL)isUsingGameCenter;
+(BOOL)isLoggedIntoGameCenter;
+(void)initializeGameCenter;
+(void)releaseGameCenter;
+(id)getGameCenterFriends;
+(void)loadGameCenterScores:(id)scores;
+(id)getGameCenterScores:(int)scores;
+(BOOL)isGameCenterScoreLoadedForLeaderboardId:(id)leaderboardId timeScope:(unsigned)scope;
+(id)getGameCenterAchievementId:(id)anId;
+(id)getGameCenterLeaderboardCategory:(id)category;
+(id)_combineGameCenterScope:(unsigned)scope IntoPaginatedSeries:(id)series;
+(id)combinedGameCenterForLeaderboardId:(id)leaderboardId timeScope:(unsigned)scope globals:(id)globals friends:(id)friends;
+(void)submitAchievementToGameCenter:(id)gameCenter withPercentComplete:(double)percentComplete withHandler:(id)handler;
+(id)submitScoreToGameCenter:(long long)gameCenter category:(id)category withHandler:(id)handler;
+(void)loadGameCenterPlayerName:(id)name withHandler:(id)handler;
@end

@interface OpenFeint (NSNotification)
+(void)postUserChangedNotificationFromUser:(id)user toUser:(id)user2;
+(void)postUnviewedChallengeCountChangedTo:(unsigned)to;
+(void)postFriendPresenceChanged:(id)changed withPresence:(id)presence;
+(void)postPendingFriendsCountChangedTo:(unsigned)to;
+(void)postAddFriend:(id)aFriend;
+(void)postRemoveFriend:(id)aFriend;
+(void)postUnreadAnnouncementCountChangedTo:(unsigned)to;
+(void)postUnreadInboxCountChangedTo:(unsigned)to;
+(void)postUnreadIMCountChangedTo:(unsigned)to;
+(void)postUnreadPostCountChangedTo:(unsigned)to;
+(void)postUnreadInviteCountChangedTo:(unsigned)to;
+(void)postDashboardOrientationChangedTo:(int)to from:(int)from;
+(void)postBootstrapBegan:(id)began;
+(void)postBootstrapSucceeded;
+(void)postBootstrapFailed;
@end

@interface OpenFeint (Private)
+(BOOL)hasBootstrapCompleted;
+(void)invalidateBootstrap;
+(void)createSharedInstance;
+(void)destroySharedInstance;
+(void)loginGameCenterCheck;
+(void)loginShowNotifications;
+(void)loginWasAborted:(BOOL)aborted;
+(void)showSSLNotification;
+(void)launchLoginFlowAndShowDashboard:(bool)dashboard withOptionalRequest:(id)optionalRequest;
+(void)launchLoginFlowThenDismiss;
+(void)launchLoginFlowToDashboard;
+(void)launchLoginFlowForRequest:(id)request;
+(void)abortBootstrap;
+(void)doBootstrapAsUserId:(id)anId newUser:(BOOL)user onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)doBootstrapAsNewUserOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)doBootstrapAsUserId:(id)anId onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)addBootstrapDelegates:(const OFDelegate*)delegates onFailure:(const OFDelegate*)failure;
+(BOOL)isSuccessfullyBootstrapped;
+(void)presentConfirmAccountModal:(OFDelegate*)modal useModalInDashboard:(BOOL)dashboard;
+(void)transformView:(id)view toOrientation:(int)orientation;
+(void)transformViewToDashboardOrientation:(id)dashboardOrientation;
+(bool)tryCreateDashboardWithModal:(id)modal;
+(void)presentModalOverlay:(id)overlay;
+(void)presentModalOverlay:(id)overlay opaque:(BOOL)opaque;
+(void)presentRootControllerWithModal:(id)modal;
+(void)presentRootControllerWithTabbedDashboard:(id)tabbedDashboard;
+(void)presentRootControllerWithTabbedDashboard:(id)tabbedDashboard pushControllers:(id)controllers;
+(void)launchDashboardWithDelegate:(id)delegate tabControllerName:(id)name;
+(void)launchDashboardWithDelegate:(id)delegate tabControllerName:(id)name andController:(id)controller;
+(void)launchDashboardWithDelegate:(id)delegate tabControllerName:(id)name andControllers:(id)controllers;
+(void)switchToOnlineDashboard;
+(void)switchToOfflineDashboard;
+(void)animationDidStop:(id)animation finished:(BOOL)finished;
+(void)dismissRootController;
+(void)dismissRootControllerOrItsModal;
+(id)getTopApplicationWindow;
+(id)getDelegate;
+(id)getNotificationDelegate;
+(id)getChallengeDelegate;
+(id)getBragDelegate;
+(int)getDashboardOrientation;
+(BOOL)isInLandscapeMode;
+(BOOL)isInLandscapeModeOniPad;
+(BOOL)isLargeScreen;
+(CGRect)getDashboardBounds;
+(void)destroyDashboard;
+(void)updateApplicationBadge;
+(id)sharedInstance;
+(id)getTopLevelView;
+(id)getRootController;
+(bool)isShowingFullScreen;
+(bool)isDashboardHubOpen;
+(id)getActiveNavigationController;
+(void)reloadInactiveTabBars;
+(void)_delayedPushViewController:(id)controller inNavController:(id)navController;
+(void)displayErrorMessage:(id)message inNavController:(id)navController;
+(void)allowErrorScreens:(BOOL)screens;
+(BOOL)areErrorScreensAllowed;
+(BOOL)isShowingErrorScreenInNavController:(id)navController;
+(void)displayUpgradeRequiredErrorMessage:(id)message;
+(void)displayServerMaintenanceNotice:(id)notice;
+(void)displayErrorMessage:(id)message;
+(void)displayErrorMessageAndOfflineButton:(id)button;
+(id)provider;
+(id)session;
+(bool)isTargetAndSystemVersionThreeOh;
+(bool)isTargetAndSystemVersionFourOh;
+(void)dashboardDidAppear;
+(void)dashboardDidDisappear;
+(void)dashboardWillAppear;
+(void)dashboardWillDisappear;
+(void)reserveMemory;
+(void)releaseReservedMemory;
+(void)setPollingFrequency:(double)frequency;
+(void)setPollingToDefaultFrequency;
+(void)stopPolling;
+(void)forceImmediatePoll;
+(void)clearPollingCacheForClassType:(Class)classType;
+(void)setupOfflineDatabase;
+(void)teardownOfflineDatabase;
+(sqlite3*)getOfflineDatabaseHandle;
+(sqlite3*)getBootstrapOfflineDatabaseHandle;
+(BOOL)allowUserGeneratedContent;
+(BOOL)allowLocationServices;
+(int)notificationPosition;
+(BOOL)invertNotifications;
+(id)getUserLocation;
+(void)setUserLocation:(id)location;
+(void)startLocationManagerIfAllowed;
+(id)sessionId;
+(id)sessionStartDate;
+(id)getImageFromUrl:(id)url cachedImage:(id*)image httpService:(OFPointer<OFHttpService>*)service httpObserver:(OFPointer<OFImageViewHttpServiceObserver>*)observer target:(id)target onDownloadSuccess:(SEL)success onDownloadFailure:(SEL)failure;
+(id)downloadImageFromUrl:(id)url httpService:(OFPointer<OFHttpService>*)service httpObserver:(OFPointer<OFImageViewHttpServiceObserver>*)observer onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)destroyHttpService:(OFPointer<OFHttpService>*)service;
+(id)getResourceBundle;
-(void)invokeAndClearBootstrapDelegates:(vector<OFDelegate,std::allocator<OFDelegate> >*)delegates;
-(void)_invokeLoggedInDelegate;
-(void)session:(id)session didLoginUser:(id)user previousUser:(id)user3;
-(void)session:(id)session didLogoutUser:(id)user;
-(void)session:(id)session failureWithException:(id)exception;
-(void)_presentRootControllerWithTabbedDashboard;
-(void)_rotateDashboardFromOrientation:(int)orientation toOrientation:(int)orientation2;
@end

@interface OpenFeint (OFSettings)
+(void)initializeSettings;
+(id)applicationDisplayName;
+(id)applicationShortDisplayName;
+(unsigned)getPollingFrequencyDefault;
+(void)storePollingFrequencyDefault:(unsigned)aDefault;
+(unsigned)getPollingFrequencyInChat;
+(void)storePollingFrequencyInChat:(unsigned)chat;
@end

@interface OpenFeint (UserOptions)
+(void)initializeUserOptions;
+(void)setDontAutomaticallyPromptLogin;
+(bool)shouldAutomaticallyPromptLogin;
+(void)setUserApprovedFeint;
+(void)setUserDeniedFeint;
+(bool)hasUserSetFeintAccess;
+(bool)_hasUserApprovedFeint;
+(void)_resetHasUserSetFeintAccess;
+(void)setShouldWarnOnIncompleteDelegates:(BOOL)warnOnIncompleteDelegates;
+(BOOL)shouldWarnOnIncompleteDelegates;
+(id)lastLoggedInUserId;
+(id)lastLoggedInUserProfilePictureUrl;
+(BOOL)lastLoggedInUserUsesFacebookProfilePicture;
+(id)lastLoggedInUserName;
+(void)setLoggedInUserHasSetName:(BOOL)userHasSetName;
+(BOOL)lastLoggedInUserHasSetName;
+(void)setLoggedInUserHadFriendsOnBootup:(BOOL)userHadFriendsOnBootup;
+(BOOL)lastLoggedInUserHadFriendsOnBootup;
+(void)setLoggedInUserSharesOnlineStatus:(BOOL)userSharesOnlineStatus;
+(BOOL)loggedInUserSharesOnlineStatus;
+(void)setLoggedInUserHasNonDeviceCredential:(BOOL)userHasNonDeviceCredential;
+(BOOL)loggedInUserHasNonDeviceCredential;
+(void)setLoggedInUserHasHttpBasicCredential:(BOOL)userHasHttpBasicCredential;
+(BOOL)loggedInUserHasHttpBasicCredential;
+(void)setLoggedInUserHasFbconnectCredential:(BOOL)userHasFbconnectCredential;
+(BOOL)loggedInUserHasFbconnectCredential;
+(void)setLoggedInUserHasTwitterCredential:(BOOL)userHasTwitterCredential;
+(BOOL)loggedInUserHasTwitterCredential;
+(void)setLoggedInUserIsNewUser:(BOOL)userIsNewUser;
+(BOOL)loggedInUserIsNewUser;
+(void)setClientApplicationId:(id)anId;
+(id)clientApplicationId;
+(void)setInitialDashboardScreen:(id)screen;
+(id)initialDashboardScreen;
+(void)setInitialDashboardModalContentURL:(id)url;
+(id)initialDashboardModalContentURL;
+(void)setClientApplicationIconUrl:(id)url;
+(id)clientApplicationIconUrl;
+(void)setUnviewedChallengesCount:(int)count;
+(int)unviewedChallengesCount;
+(void)setPendingFriendsCount:(int)count;
+(int)pendingFriendsCount;
+(void)setUnreadIMCount:(int)count;
+(int)unreadIMCount;
+(void)setUnreadPostCount:(int)count;
+(int)unreadPostCount;
+(void)setUnreadInviteCount:(int)count;
+(int)unreadInviteCount;
+(void)setUnreadIMCount:(int)count andUnreadPostCount:(int)count2 andUnreadInviteCount:(int)count3;
+(int)unreadInboxTotal;
+(void)setUserHasRememberedChoiceForNotifications:(BOOL)notifications;
+(BOOL)userHasRememberedChoiceForNotifications;
+(void)setUserAllowsNotifications:(BOOL)notifications;
+(BOOL)userAllowsNotifications;
+(BOOL)appHasAchievements;
+(BOOL)appHasChallenges;
+(BOOL)appHasLeaderboards;
+(BOOL)appHasFeaturedApplication;
+(void)setLocalGameProfileInfo:(id)info;
+(id)localGameProfileInfo;
+(void)setLocalUser:(id)user;
+(id)localUser;
+(void)loggedInUserChangedNameTo:(id)to;
+(void)setUserDistanceUnit:(int)unit;
+(int)userDistanceUnit;
+(id)lastAnnouncementDateForLocalUser;
+(void)setLastAnnouncementDateForLocalUser:(id)localUser;
+(id)suggestionsForumId;
+(void)setSuggestionsForumId:(id)anId;
+(void)setDoneWithGetTheMost:(BOOL)getTheMost;
+(BOOL)doneWithGetTheMost;
+(void)setDisabled:(BOOL)disabled;
+(BOOL)isDisabled;
+(void)setSynchWithGameCenterAchievements:(BOOL)gameCenterAchievements;
+(BOOL)isSynchedWithGameCenterAchievements;
+(void)setSynchWithGameCenterLeaderboards:(BOOL)gameCenterLeaderboards;
+(BOOL)isSynchedWithGameCenterLeaderboards;
+(id)nowPlayingBadge;
+(id)myFeintBadge;
@end

@interface OpenFeint (UserStats)
+(void)intiailizeUserStats;
+(void)shutdownUserStats;
+(void)setNumberOfGameSessions:(int)gameSessions;
+(void)incrementNumberOfGameSessions;
+(int)numberOfGameSessions;
+(void)setNumberOfOnlineGameSessions:(int)onlineGameSessions;
+(void)incrementNumberOfOnlineGameSessions;
+(int)numberOfOnlineGameSessions;
+(void)setTotalGameSessionsDuration:(int)duration;
+(void)incrementTotalGameSessionsDurationBy:(int)by;
+(int)totalGameSessionsDuration;
+(void)setNumberOfDashboardLaunches:(int)dashboardLaunches;
+(void)incrementNumberOfDashboardLaunches;
+(int)numberOfDashboardLaunches;
+(void)setTotalDashboardDuration:(int)duration;
+(void)incrementTotalDashboardDurationBy:(int)by;
+(int)totalDashboardDuration;
+(void)dashboardLaunched;
+(void)dashboardClosed;
+(void)sessionNotActive;
+(void)sessionActive;
+(void)saveSessionDuration;
+(void)resetUserStats;
+(void)getUserStatsParams:(OFHttpNestedQueryStringWriter*)params;
+(id)statUserKeyName:(id)name;
+(void)setUserStatValue:(id)value value:(int)value2;
+(int)getUserStatValue:(id)value;
@end

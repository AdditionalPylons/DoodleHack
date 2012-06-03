/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, CrittercismViewController, NSArray, NSMutableData;
@protocol CrittercismDelegate;

@interface Crittercism : XXUnknownSuperclass {
	NSMutableData* responseData;
	NSObject* voteDisplayer;
	CrittercismViewController* crittercismViewController;
	NSArray* feedbackArray;
	CFDictionaryRef* connectionToInfoMapping;
	id<CrittercismDelegate> delegate;
	BOOL didCrashOnLastLoad;
}
@property(retain, nonatomic) NSObject* voteDisplayer;
@property(retain, nonatomic) CrittercismViewController* crittercismViewController;
@property(retain) NSArray* feedbackArray;
@property(assign) BOOL didCrashOnLastLoad;
@property(retain) id<CrittercismDelegate> delegate;
+(void)detachAllSignals;
+(void)detachSignal:(int)signal;
+(id)sharedInstance;
+(void)configurePushNotification:(id)notification;
+(void)critterApplicationWillEnterForeground:(id)critterApplication;
+(void)critterApplicationWillEnterBackground:(id)critterApplication;
+(id)allocWithZone:(NSZone*)zone;
+(void)initWithAppID:(id)appID andKey:(id)key andSecret:(id)secret;
+(void)initWithAppID:(id)appID andKey:(id)key andSecret:(id)secret andMainViewController:(id)controller;
+(void)logEvent:(id)event andEventDict:(id)dict;
+(void)writeToBreadcrumbFile:(id)breadcrumbFile;
+(id)readFromBreadcrumbFile;
+(void)writeToOfflineCrashFile:(id)offlineCrashFile;
+(void)removeFromOfflineCrashFile;
+(id)readFromOfflineCrashFile;
+(void)startSession;
+(void)saveOfflineCrash:(id)crash;
+(void)leaveBreadcrumb:(id)breadcrumb;
+(void)handleMemoryWarning:(id)warning;
+(id)getAppID;
+(id)getKey;
+(id)getSecret;
+(id)getVersion;
+(int)getCurrentOrientation;
+(void)setCurrentOrientation:(int)orientation;
+(void)setOptOutStatus:(BOOL)status;
+(id)getBuildUUID;
+(id)getGMTDateStringWithFormat:(id)format;
+(uuid_command*)getBuildUUIDCommand:(const void*)command;
+(void)showCrittercism:(id)crittercism;
+(void)showCrittercism;
+(void)setValue:(id)value forKey:(id)key;
+(void)setAge:(int)age;
+(void)setGender:(id)gender;
+(void)setUsername:(id)username;
+(void)setEmail:(id)email;
+(void)appendDiagnosticData:(id*)data isSimple:(BOOL)simple;
+(void)appendBreadcrumbData:(id*)data;
+(void)sendUserMetadata;
+(id)getUdidStr;
+(id)sha256:(id)a256;
-(id)applicationDocumentsDirectory;
-(void)dealloc;
-(void)logCritterError:(id)error;
-(void)reachabilityChanged:(id)changed;
-(void)updateReachability:(id)reachability;
-(id)init;
-(void)updateUsername:(id)username;
-(void)resetFeedback;
-(id)getFeedback;
-(id)getFeedbackItem:(id)item;
-(void)replaceFeedbackItem:(id)item withDict:(id)dict;
-(void)addFeedbackItem:(id)item;
-(void)hideCrittercism;
-(id)getCrittercism;
-(void)setTintRed:(float)red green:(float)green blue:(float)blue;
-(void)setNavTitle:(id)title;
-(id)getNavTitle;
-(id)getMainViewController;
-(id)copyWithZone:(NSZone*)zone;
-(id)retain;
-(unsigned)retainCount;
-(void)release;
-(id)autorelease;
-(id)getPlatform;
-(id)getSimpleState;
-(id)getAllDiagnostics;
-(void)setDisplayer:(id)displayer;
-(void)updateVotes;
-(void)addVote;
-(void)addVote:(id)vote;
-(void)setVotes:(int)votes;
-(int)getVotes;
-(void)useVote:(id)vote andThumbsUp:(int)up;
-(void)updateData:(BOOL)data;
-(void)sendOfflineData;
-(void)sendRequest:(id)request;
-(void)addComment:(id)comment andFeedbackID:(id)anId andParentID:(id)anId3;
-(void)updateDeviceToken:(id)token;
-(void)makeCrittercismRequest:(id)request kwargs:(id)kwargs appendDiagnostics:(BOOL)diagnostics isSimple:(BOOL)simple appendUserMetadata:(BOOL)metadata;
-(void)makeCrittercismRequest:(id)request kwargs:(id)kwargs appendDiagnostics:(BOOL)diagnostics isSimple:(BOOL)simple appendUserMetadata:(BOOL)metadata withExtraData:(id)extraData withExtraDict:(id)extraDict;
-(void)appLoadedWithLaunch:(BOOL)launch;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(BOOL)isPreferenceExist:(id)exist;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)openAppStore;
-(void)addGradient:(id)gradient;
-(void)storeValueInPreferences:(id)preferences forKey:(id)key forDictionary:(id)dictionary;
-(id)getDictFromPreferences:(id)preferences;
-(id)getValueFromPreferencesWithKey:(id)key andDictionaryName:(id)name;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFBannerProvider.h"
#import "OFTableSequenceControllerHelper.h"
#import "UIAccelerometerDelegate.h"

@class NSString, OFResource, NSObject;

@interface OFPlayedGameController : OFTableSequenceControllerHelper <OFBannerProvider, UIAccelerometerDelegate> {
	int scope;
	NSString* targetDiscoveryPageName;
	OFResource* headerBannerResource;
	bool inFavoriteTab;
	bool reloadWhenShownNext;
	double defaultUpdateInterval;
	NSObject<UIAccelerometerDelegate>* defaultDelegate;
	bool enableShake;
	float previousX[10];
	float previousY[10];
	float previousZ[10];
}
@property(assign, nonatomic) int scope;
@property(retain, nonatomic) NSObject<UIAccelerometerDelegate>* defaultDelegate;
@property(retain, nonatomic) NSString* targetDiscoveryPageName;
-(BOOL)localUsersPage;
-(void)showEditButton;
-(void)showDoneButton;
-(void)hideEditButton;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)dealloc;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(id)getService;
-(bool)usePlainTableSectionHeaders;
-(void)_updateEditButtonState;
-(void)_toggleEditing;
-(bool)allowEditing;
-(bool)shouldConfirmResourceDeletion;
-(id)getResourceDeletePromptText:(id)text;
-(id)getResourceDeleteCancelText;
-(id)getResourceDeleteConfirmText;
-(void)onResourceWasDeleted:(id)deleted;
-(id)getNoDataFoundMessage;
-(id)getTableHeaderControllerName;
-(void)onTableHeaderCreated:(id)created;
-(void)onAllGamesSelected;
-(void)onFavoriteGamesSelected;
-(void)doIndexActionOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(void)doIndexActionWithPage:(unsigned)page onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(void)onCellWasClicked:(id)clicked indexPathInTable:(id)table;
-(void)profileUsersChanged:(id)changed comparedToUser:(id)user;
-(void)onLeadingCellWasLoaded:(id)loaded forSection:(id)section;
-(id)getLeadingCellControllerNameForSection:(id)section;
-(void)feintFiveShuffle;
-(bool)isBannerAvailableNow;
-(id)bannerCellControllerName;
-(id)getBannerResource;
-(void)onBeforeResourcesProcessed:(id)processed;
-(void)onBannerClicked;
-(void)hideLoadingScreen;
-(void)enableShakeAgain;
-(BOOL)checkShakeOnAxis:(float*)axis;
-(void)accelerometer:(id)accelerometer didAccelerate:(id)accelerate;
@end


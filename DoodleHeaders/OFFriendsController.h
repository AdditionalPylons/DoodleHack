/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFProfileFrame.h"
#import "OFTableSequenceControllerHelper.h"

@class UIButton;

@interface OFFriendsController : OFTableSequenceControllerHelper <OFProfileFrame> {
	int mCurTabType;
	BOOL alwaysRefresh;
	BOOL refreshOnNextDidAppear;
	int friendCount;
	UIButton* editButton;
}
-(bool)localUsersFriends;
-(void)viewWillAppear:(BOOL)view;
-(void)friendPresenceDidChange:(id)friendPresence;
-(void)viewDidDisappear:(BOOL)view;
-(void)_sharedInit;
-(id)initWithCoder:(id)coder;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)init;
-(void)dealloc;
-(void)_notificationCallback:(id)callback;
-(void)viewDidAppear:(BOOL)view;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(bool)allowPagination;
-(id)getService;
-(void)doIndexActionWithPage:(unsigned)page onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(void)doIndexActionOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(id)getNoDataFoundViewController;
-(id)getNoDataFoundMessage;
-(bool)shouldAlwaysRefreshWhenShown;
-(void)profileUsersChanged:(id)changed comparedToUser:(id)user;
-(void)onCellWasClicked:(id)clicked indexPathInTable:(id)table;
-(id)getTableHeaderControllerName;
-(void)_updateEditButtonState;
-(void)onFollowingSelected;
-(void)onFollowersSelected;
-(void)onResourcesDownloaded:(id)downloaded;
-(bool)usePlainTableSectionHeaders;
-(void)onTableHeaderCreated:(id)created;
-(void)findFriendsPressed;
-(void)_addObservers;
-(void)_removeObservers;
-(void)_toggleEditing;
-(id)createPlainTableSectionHeader:(unsigned)header;
-(bool)allowEditing;
-(bool)shouldConfirmResourceDeletion;
-(void)_removedFriend:(id)aFriend user:(id)user;
-(void)_removedPendingFriend;
-(void)_failedRemoving;
-(void)onResourceWasDeleted:(id)deleted;
@end


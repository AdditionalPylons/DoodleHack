/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFTableSequenceControllerHelper.h"

@class NSArray, OFInviteDefinition, NSInvocation;

@interface OFInviteFriendsController : OFTableSequenceControllerHelper {
	NSArray* selectedUsers;
	OFInviteDefinition* definition;
	NSInvocation* closeInvocation;
}
@property(retain, nonatomic) NSArray* selectedUsers;
@property(retain, nonatomic) OFInviteDefinition* definition;
@property(retain, nonatomic) NSInvocation* closeInvocation;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(id)getService;
-(void)doIndexActionOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(id)getNoDataFoundViewController;
-(id)getNoDataFoundMessage;
-(bool)usePlainTableSectionHeaders;
-(id)getTableHeaderControllerName;
-(void)onTableHeaderCreated:(id)created;
-(void)showNoFriendsSelectedMessage;
-(void)showNoConnectionMessage;
-(void)showSubmitFailedMessage;
-(id)getUserMessage:(id)message;
-(void)inviteFriends;
-(void)cancel;
-(void)inviteSuccess;
-(void)inviteFailure;
-(bool)canReceiveCallbacksNow;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)viewDidLoad;
-(void)dealloc;
@end


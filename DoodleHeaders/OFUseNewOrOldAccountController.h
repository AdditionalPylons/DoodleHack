/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFTableSequenceControllerHelper.h"

@class UIButton;

@interface OFUseNewOrOldAccountController : OFTableSequenceControllerHelper {
	UIButton* footerButton;
}
-(id)init;
-(void)dealloc;
-(bool)canReceiveCallbacksNow;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(id)getService;
-(void)doIndexActionOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(bool)usePlainTableSectionHeaders;
-(void)onCellWasClicked:(id)clicked indexPathInTable:(id)table;
-(void)_createAndDisplayTableHeader;
-(void)_bootstrapSuccess;
-(void)_popBackToRoot;
-(void)clickedUseOld;
@end

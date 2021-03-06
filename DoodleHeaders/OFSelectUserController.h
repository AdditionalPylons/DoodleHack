/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFTableSequenceControllerHelper.h"

@class UIView, OFSelectUserWidget;

@interface OFSelectUserController : OFTableSequenceControllerHelper {
	UIView* loadingView;
	OFSelectUserWidget* owner;
}
@property(assign) OFSelectUserWidget* owner;
-(void)showLoadingScreen;
-(void)hideLoadingScreen;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(id)getService;
-(bool)canReceiveCallbacksNow;
-(void)doIndexActionOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(bool)allowEditing;
-(bool)shouldConfirmResourceDeletion;
-(id)getResourceDeletePromptText:(id)text;
-(id)getResourceDeleteCancelText;
-(id)getResourceDeleteConfirmText;
-(bool)allowPagination;
-(bool)usePlainTableSectionHeaders;
-(void)_onDataLoaded:(id)loaded isIncremental:(BOOL)incremental;
-(void)replaceUsers:(id)users;
-(id)createPlainTableSectionHeader:(unsigned)header;
-(void)onCellWasClicked:(id)clicked indexPathInTable:(id)table;
-(void)onResourceWasDeleted:(id)deleted;
-(void)dealloc;
@end


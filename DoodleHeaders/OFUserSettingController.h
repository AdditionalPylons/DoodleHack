/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "UIActionSheetDelegate.h"
#import "OFProfileFrame.h"
#import "OFTableSequenceControllerHelper.h"

@class UIActionSheet;

@interface OFUserSettingController : OFTableSequenceControllerHelper <OFProfileFrame, UIActionSheetDelegate> {
	UIActionSheet* logoutSheet;
}
-(bool)usePlainTableSectionHeaders;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(id)getService;
-(bool)shouldAlwaysRefreshWhenShown;
-(id)getNoDataFoundMessage;
-(void)onCellWasClicked:(id)clicked indexPathInTable:(id)table;
-(void)_logoutNow;
-(void)removeSettingNamed:(id)named fromTableSectionDescription:(id)tableSectionDescription;
-(void)_onDataLoaded:(id)loaded isIncremental:(BOOL)incremental;
-(void)logout;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)orientationDidChange:(id)orientation;
@end


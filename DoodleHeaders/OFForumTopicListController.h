/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFTableSequenceControllerHelper.h"


@interface OFForumTopicListController : OFTableSequenceControllerHelper {
}
+(id)topicBrowser;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)view;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(id)getService;
-(bool)usePlainTableSectionHeaders;
-(void)onCellWasClicked:(id)clicked indexPathInTable:(id)table;
-(id)getNoDataFoundMessage;
-(id)getTableHeaderControllerName;
-(void)onTableHeaderCreated:(id)created;
-(void)doIndexActionOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
@end


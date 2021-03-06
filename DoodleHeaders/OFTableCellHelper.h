/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"
#import "OFTableCellHelper.h"

@class OFResource, OFTableControllerHelper;

@interface OFTableCellHelper : XXUnknownSuperclass {
	OFTableControllerHelper* owningTable;
	OFResource* mResource;
}
@property(assign) OFTableControllerHelper* owningTable;
@property(readonly, assign, nonatomic) OFResource* resource;
-(void)setEdgeStyle:(int)style;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)dealloc;
-(BOOL)hasConstantHeight;
-(void)changeResource:(id)resource withCellIndex:(unsigned)cellIndex;
-(void)changeResource:(id)resource;
-(id)initOFTableCellHelper:(id)helper;
@end

@interface OFTableCellHelper (Overridables)
-(void)populateViewDataMap:(OFViewDataMap*)map;
-(void)onResourceChanged:(id)changed;
-(void)onResourceChanged:(id)changed withCellIndex:(unsigned)cellIndex;
-(BOOL)wantsToConfigureSelf;
-(void)configureSelfAsLeading:(BOOL)leading asTrailing:(BOOL)trailing asOdd:(BOOL)odd;
-(void)viewDidAppear;
-(void)viewDidDisappear;
@end


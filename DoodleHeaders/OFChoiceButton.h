/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OFChoiceListController;

@interface OFChoiceButton : XXUnknownSuperclass {
	int returnValue;
	OFChoiceListController* controller;
}
@property(assign, nonatomic) int returnValue;
@property(retain, nonatomic) OFChoiceListController* controller;
-(id)initWithList:(id)list text:(id)text value:(int)value;
-(void)processButton;
@end


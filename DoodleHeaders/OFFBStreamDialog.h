/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFTFBDialog.h"

@class NSString;

@interface OFFBStreamDialog : OFTFBDialog {
	NSString* _attachment;
	NSString* _actionLinks;
	NSString* _targetId;
	NSString* _userMessagePrompt;
}
@property(copy, nonatomic) NSString* attachment;
@property(copy, nonatomic) NSString* actionLinks;
@property(copy, nonatomic) NSString* targetId;
@property(copy, nonatomic) NSString* userMessagePrompt;
-(id)initWithSession:(id)session;
-(void)dealloc;
-(void)load;
@end

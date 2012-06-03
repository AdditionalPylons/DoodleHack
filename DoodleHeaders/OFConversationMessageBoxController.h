/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFFormControllerHelper.h"

@class OFExpandableSinglelineTextField, UIButton, NSString, UIImageView;

@interface OFConversationMessageBoxController : OFFormControllerHelper {
	OFExpandableSinglelineTextField* messageField;
	UIButton* sendButton;
	UIImageView* backgroundView;
	UIImageView* backgroundBoarderView;
	NSString* conversationId;
	NSString* initialText;
}
@property(retain) OFExpandableSinglelineTextField* messageField;
@property(retain) NSString* conversationId;
@property(retain, nonatomic) NSString* initialText;
-(void)dealloc;
-(void)awakeFromNib;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(bool)shouldShowLoadingScreenWhileSubmitting;
-(id)getLoadingScreenText;
-(void)registerActionsNow;
-(void)addHiddenParameters:(OFISerializer*)parameters;
-(void)populateViewDataMap:(OFViewDataMap*)map;
-(id)getFormSubmissionUrl;
-(void)onSubmitForm:(id)form;
-(void)onBeforeFormSubmitted;
-(void)onFormSubmitted:(id)submitted;
-(id)singularResourceName;
-(bool)canReceiveCallbacksNow;
-(bool)shouldDismissKeyboardWhenSubmitting;
@end

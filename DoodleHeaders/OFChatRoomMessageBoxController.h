/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFFormControllerHelper.h"

@class UIButton, UITextField, UIImageView;

@interface OFChatRoomMessageBoxController : OFFormControllerHelper {
	UITextField* textEntryField;
	UIButton* hideKeyboardButton;
	UIImageView* backgroundView;
}
@property(retain, nonatomic) UITextField* textEntryField;
@property(retain, nonatomic) UIButton* hideKeyboardButton;
@property(retain, nonatomic) UIImageView* backgroundView;
-(void)viewDidLoad;
-(void)_KeyboardWillShow:(id)_Keyboard;
-(void)_KeyboardWillHide:(id)_Keyboard;
-(void)toggleKeyboardNow;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(bool)shouldShowLoadingScreenWhileSubmitting;
-(void)registerActionsNow;
-(void)populateViewDataMap:(OFViewDataMap*)map;
-(id)getFormSubmissionUrl;
-(id)getLoadingScreenText;
-(void)onBeforeFormSubmitted;
-(void)onFormSubmitted:(id)submitted;
-(id)singularResourceName;
-(void)dealloc;
-(bool)canReceiveCallbacksNow;
-(bool)shouldDismissKeyboardWhenSubmitting;
@end


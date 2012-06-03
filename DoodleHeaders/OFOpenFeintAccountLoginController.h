/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFAccountSetupBaseController.h"
#import "DoodleJump-Structs.h"

@class UIScrollView, UIView;

@interface OFOpenFeintAccountLoginController : OFAccountSetupBaseController {
	UIView* contentView;
	UIScrollView* scrollView;
	UIView* introFlowSpacer;
}
@property(retain, nonatomic) UIView* contentView;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) UIView* introFlowSpacer;
-(void)usedOtherAccountType;
-(void)createNewAccount;
-(void)_bootstrapSucceeded;
-(void)_bootstrapFailed;
-(void)cancelSetup;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(bool)shouldUseOAuth;
-(void)populateViewDataMap:(OFViewDataMap*)map;
-(void)addHiddenParameters:(OFISerializer*)parameters;
-(void)registerActionsNow;
-(id)singularResourceName;
-(id)getFormSubmissionUrl;
-(id)controllerToPushOnCompletion;
-(void)dealloc;
-(void)setHideIntroFlowSpacer:(BOOL)spacer;
@end

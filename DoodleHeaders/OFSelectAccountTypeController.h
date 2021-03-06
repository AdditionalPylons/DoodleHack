/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFAccountSetupBaseController.h"

@class OFTextButton, UILabel;

@interface OFSelectAccountTypeController : OFAccountSetupBaseController {
	UILabel* socialNetworkNotice;
	UILabel* openFeintNotice;
	OFTextButton* twitterButton;
	OFTextButton* facebookButton;
}
@property(retain, nonatomic) UILabel* socialNetworkNotice;
@property(retain, nonatomic) UILabel* openFeintNotice;
@property(retain, nonatomic) OFTextButton* twitterButton;
@property(retain, nonatomic) OFTextButton* facebookButton;
-(void)_pushAccountSetupControllerFor:(id)aFor;
-(void)_onPressedTwitter;
-(void)_onPressedFacebook;
-(void)registerActionsNow;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)dealloc;
@end


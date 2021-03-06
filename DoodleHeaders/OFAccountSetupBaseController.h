/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFFormControllerHelper.h"

@class UILabel;

@interface OFAccountSetupBaseController : OFFormControllerHelper {
	UILabel* privacyDisclosure;
	BOOL mAddingAdditionalCredential;
	OFDelegate mCancelDelegate;
	OFDelegate mCompletionDelegate;
}
@property(retain, nonatomic) UILabel* privacyDisclosure;
@property(assign) BOOL addingAdditionalCredential;
+(id)getStandardLoggedInController;
-(void)viewDidLoad;
-(BOOL)isInModalController;
-(void)cancelSetup;
-(void)addHiddenParameters:(OFISerializer*)parameters;
-(id)getStandardLoggedInController;
-(id)controllerToPushOnCompletion;
-(id)getControllerToPopTo;
-(void)popOutOfAccountFlow;
-(void)pushCompletionControllerOrPopOut;
-(BOOL)isComplete;
-(id)overrideUserIdToBootstrapWith;
-(void)onFormSubmitted:(id)submitted;
-(void)onBootstrapDone;
-(void)dealloc;
-(void)setCancelDelegate:(const OFDelegate*)delegate;
-(void)setCompletionDelegate:(const OFDelegate*)delegate;
-(id).cxx_construct;
-(void).cxx_destruct;
@end


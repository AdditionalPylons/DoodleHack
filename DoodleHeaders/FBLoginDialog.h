/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "FBDialog.h"

@protocol FBLoginDialogDelegate;

@interface FBLoginDialog : FBDialog {
	id<FBLoginDialogDelegate> _loginDelegate;
}
-(id)initWithURL:(id)url loginParams:(id)params delegate:(id)delegate;
-(void)dialogDidSucceed:(id)dialog;
-(void)dialogDidCancel:(id)dialog;
-(void)webView:(id)view didFailLoadWithError:(id)error;
@end

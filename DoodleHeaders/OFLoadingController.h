/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFCallbackable.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface OFLoadingController : XXUnknownSuperclass <OFCallbackable> {
	BOOL isHiding;
}
+(id)loadingControllerWithText:(id)text;
-(bool)canReceiveCallbacksNow;
-(void)setLoadingText:(id)text;
-(void)showLoadingScreen:(BOOL)screen;
-(void)showLoadingScreen;
-(void)hide;
-(void)_noop;
-(void)viewDidLoad;
@end

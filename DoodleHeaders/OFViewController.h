/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OFTabBarItem, UIViewController;

@interface OFViewController : XXUnknownSuperclass {
	UIViewController* mLoadingScreen;
	OFTabBarItem* owningTabBarItem;
}
@property(assign, nonatomic) OFTabBarItem* owningTabBarItem;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)view;
-(void)showLoadingScreenWithMessage:(id)message;
-(void)hideLoadingScreen;
-(void)showLoadingScreen;
-(id)getLoadingScreenText;
-(void)setBadgeValue:(id)value;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)getPageContextUser;
-(BOOL)isCurrentlyInIntroFlow;
@end

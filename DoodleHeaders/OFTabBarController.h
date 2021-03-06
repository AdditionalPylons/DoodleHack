/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"
#import "OFTabBarDelegate.h"

@class OFTabBar, OFTabBarContainer, NSArray;
@protocol OFTabBarControllerDelegate;

@interface OFTabBarController : XXUnknownSuperclass <OFTabBarDelegate> {
	OFTabBar* mTabBar;
	OFTabBarContainer* mContainerView;
	id<OFTabBarControllerDelegate> mDelegate;
}
@property(assign, nonatomic) id<OFTabBarControllerDelegate> delegate;
@property(readonly, assign, nonatomic) OFTabBar* tabBar;
@property(readonly, assign, nonatomic) NSArray* tabBarItems;
+(float)tabBarHeight;
-(id)createTabBar;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(id)init;
-(void)viewDidLoad;
-(void)dealloc;
-(void)addViewController:(id)controller named:(id)named activeImage:(id)image inactiveImage:(id)image4 disabledImage:(id)image5;
-(void)addViewController:(id)controller named:(id)named activeImage:(id)image inactiveImage:(id)image4 disabledImage:(id)image5 andBadgeValue:(id)value;
-(void)addViewController:(id)controller ofDisabledControllerName:(id)disabledControllerName named:(id)named activeImage:(id)image inactiveImage:(id)image5 disabledImage:(id)image6;
-(void)addViewController:(id)controller ofDisabledControllerName:(id)disabledControllerName named:(id)named activeImage:(id)image inactiveImage:(id)image5 disabledImage:(id)image6 andBadgeValue:(id)value;
-(void)addViewController:(id)controller ofDisabledControllerName:(id)disabledControllerName named:(id)named activeImage:(id)image inactiveImage:(id)image5 disabledImage:(id)image6 andBadgeSelector:(id)selector;
-(void)showTabViewControllerNamed:(id)named;
-(void)showTabViewControllerNamed:(id)named showAtRoot:(BOOL)root;
-(void)showTabNamed:(id)named;
-(void)showTabNamed:(id)named showAtRoot:(BOOL)root;
-(void)showTabAtIndex:(int)index;
-(void)showTabAtIndex:(int)index showAtRoot:(BOOL)root;
-(void)enableAllTabs;
-(void)disableInactiveTabs;
-(void)disableTabAtIndex:(int)index;
-(void)disableTabNamed:(id)named;
-(void)disableTabViewControllerNamed:(id)named;
-(void)unloadAllInactiveTabs;
-(void)forceUnloadAllTabs;
-(void)unloadTabBarItemNamed:(id)named;
-(void)tabBar:(id)bar willUnloadViewController:(id)controller fromTab:(id)tab;
-(void)tabBar:(id)bar didSelectViewController:(id)controller;
-(void)tabBar:(id)bar didLoadViewController:(id)controller fromTab:(id)tab;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol OFTabBarControllerDelegate <NSObject>
@optional
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(void)tabBarController:(id)controller didLoadViewController:(id)controller2 fromTab:(id)tab;
-(void)tabBarController:(id)controller willUnloadViewController:(id)controller2 fromTab:(id)tab;
@end


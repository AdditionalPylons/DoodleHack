/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "OFTableControllerHeader.h"

@class UIPopoverController, OFSelectContactsToInviteController, UIImageView, UIButton, UILabel;

@interface OFSelectContactsToInviteHeaderController : XXUnknownSuperclass <OFTableControllerHeader, ABPeoplePickerNavigationControllerDelegate> {
	UIImageView* addContactIcon;
	UILabel* addContactLabel;
	UIButton* addContactButton;
	UIPopoverController* peoplePickerPopover;
	OFSelectContactsToInviteController* contactInviteController;
}
@property(retain, nonatomic) UIImageView* addContactIcon;
@property(retain, nonatomic) UILabel* addContactLabel;
@property(retain, nonatomic) UIButton* addContactButton;
@property(retain, nonatomic) OFSelectContactsToInviteController* contactInviteController;
@property(retain, nonatomic) UIPopoverController* peoplePickerPopover;
-(void)resizeView:(id)view;
-(void)addContact;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)_dismissPeoplePicker;
@end


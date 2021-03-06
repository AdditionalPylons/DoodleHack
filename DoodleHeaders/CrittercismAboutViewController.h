/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITextField, UIImageView, UILabel, UIButton;

@interface CrittercismAboutViewController : XXUnknownSuperclass <UIWebViewDelegate> {
	UITextField* emailField;
	UIButton* submitButton;
	UILabel* questionLabel;
	UIImageView* hamster;
	UILabel* crittercismLabel;
	UILabel* crittercismDescriptionLabel;
	UIButton* optCheckbox;
}
@property(retain, nonatomic) UILabel* questionLabel;
@property(retain, nonatomic) UIImageView* hamster;
@property(retain, nonatomic) UITextField* emailField;
@property(retain, nonatomic) UIButton* submitButton;
@property(retain, nonatomic) UILabel* crittercismLabel;
@property(retain, nonatomic) UILabel* crittercismDescriptionLabel;
@property(retain, nonatomic) UIButton* optCheckbox;
-(void)viewDidLoad;
-(void)optHit:(id)hit;
-(void)submitEmail;
-(void)sendEmail;
-(void)submitHit:(id)hit;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)showThanks;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)saveSettings;
-(void)didReceiveMemoryWarning;
-(void)viewDidUnload;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFViewController.h"

@class UIWebView, UIImageView;

@interface OFWebNavContentController : OFViewController {
	UIWebView* webView;
	UIImageView* imageView;
	BOOL isInset;
}
@property(retain, nonatomic) UIWebView* webView;
@property(retain, nonatomic) UIImageView* imageView;
+(id)controllerWithWebView:(id)webView imageView:(id)view isInset:(BOOL)inset;
-(id)initWithWebView:(id)webView imageView:(id)view isInset:(BOOL)inset;
-(void)viewDidLoad;
-(void)freeze;
-(void)thaw;
-(void)dealloc;
@end


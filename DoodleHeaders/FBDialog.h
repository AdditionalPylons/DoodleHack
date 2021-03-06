/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "UIWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIButton, UIWebView, NSURL, NSString, NSMutableDictionary, UIImageView, UIActivityIndicatorView, UILabel;
@protocol FBDialogDelegate;

@interface FBDialog : XXUnknownSuperclass <UIWebViewDelegate> {
	id<FBDialogDelegate> _delegate;
	NSMutableDictionary* _params;
	NSString* _serverURL;
	NSURL* _loadingURL;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UIButton* _closeButton;
	int _orientation;
	BOOL _showingKeyboard;
	UIView* _modalBackgroundView;
}
@property(assign, nonatomic) id<FBDialogDelegate> delegate;
@property(retain, nonatomic) NSMutableDictionary* params;
@property(copy, nonatomic) NSString* title;
-(void)addRoundedRectToPath:(CGContextRef)path rect:(CGRect)rect radius:(float)radius;
-(void)drawRect:(CGRect)rect fill:(const float*)fill radius:(float)radius;
-(void)strokeLines:(CGRect)lines stroke:(const float*)stroke;
-(BOOL)shouldRotateToOrientation:(int)orientation;
-(CGAffineTransform)transformForOrientation;
-(void)sizeToFitOrientation:(BOOL)fitOrientation;
-(void)updateWebOrientation;
-(void)bounce1AnimationStopped;
-(void)bounce2AnimationStopped;
-(id)generateURL:(id)url params:(id)params;
-(void)addObservers;
-(void)removeObservers;
-(void)postDismissCleanup;
-(void)dismiss:(BOOL)dismiss;
-(void)cancel;
-(id)init;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)deviceOrientationDidChange:(void*)deviceOrientation;
-(void)keyboardWillShow:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(id)getStringFromUrl:(id)url needle:(id)needle;
-(id)initWithURL:(id)url params:(id)params delegate:(id)delegate;
-(void)load;
-(void)loadURL:(id)url get:(id)get;
-(void)show;
-(void)dismissWithSuccess:(BOOL)success animated:(BOOL)animated;
-(void)dismissWithError:(id)error animated:(BOOL)animated;
-(void)dialogWillAppear;
-(void)dialogWillDisappear;
-(void)dialogDidSucceed:(id)dialog;
-(void)dialogDidCancel:(id)dialog;
@end


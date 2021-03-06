/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "OFCallbackable.h"

@class NSString, UIImageView, UIActivityIndicatorView, UIImage, NSTimer;

@interface OFImageView : XXUnknownSuperclass <OFCallbackable> {
	UIImage* mDefaultImage;
	NSString* mImageUrl;
	UIImage* mImage;
	BOOL mShouldScaleImageToFillRect;
	BOOL mShouldShowLoadingIndicator;
	float mCrossFadeDuration;
	UIImage* mImageFadingIn;
	float mFadingImageAlpha;
	NSTimer* mFadingTimer;
	UIActivityIndicatorView* mLoadingView;
	OFPointer<OFHttpService> mHttpService;
	OFPointer<OFImageViewHttpServiceObserver> mHttpServiceObserver;
	CGPathRef mBorderPath;
	BOOL mUseSharpCorners;
	BOOL mUsingCustomBorderPath;
	OFDelegate mDelegate;
	BOOL mUseFacebookOverlay;
	UIImageView* mFacebookOverlay;
	NSString* mImageFrameFileName;
	BOOL mUnframed;
	UIImageView* mImageFrame;
}
@property(assign, nonatomic) BOOL shouldScaleImageToFillRect;
@property(retain, nonatomic) NSString* imageUrl;
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic) BOOL useFacebookOverlay;
@property(assign, nonatomic) BOOL useSharpCorners;
@property(assign, nonatomic) BOOL unframed;
@property(assign, nonatomic) float crossFadeDuration;
@property(assign, nonatomic) BOOL shouldShowLoadingIndicator;
-(void)_addImageFrame;
-(void)_removeImageFrame;
-(void)_updateImageFrame;
-(void)_destroyHttpService;
-(void)removeFacebookOverlay;
-(void)addFacebookOverlay;
-(id)awakeAfterUsingCoder:(id)coder;
-(void)_resetView:(id)view;
-(void)setImageUrl:(id)url crossFading:(BOOL)fading;
-(void)dealloc;
-(bool)canReceiveCallbacksNow;
-(void)_recreateBorderPath;
-(void)setFrame:(CGRect)frame;
-(void)_tickFading:(id)fading;
-(void)_fadeToNewImage:(id)newImage;
-(void)_imageDownloaded:(id)downloaded;
-(void)_imageDownloadFailed;
-(void)_drawImage:(id)image withAlpha:(float)alpha withRect:(CGRect)rect;
-(void)drawRect:(CGRect)rect;
-(void)showLoadingIndicator;
-(void)setDefaultImage:(id)image;
-(void)setImageDownloadFinishedDelegate:(const OFDelegate*)delegate;
-(void)setCustomClippingPath:(CGPathRef)path;
-(void)useLocalPlayerProfilePictureDefault;
-(void)useOtherPlayerProfilePictureDefault;
-(void)useGameCenterProfilePicture;
-(void)useProfilePictureFromUser:(id)user;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)setHidden:(BOOL)hidden;
-(id).cxx_construct;
-(void).cxx_destruct;
@end


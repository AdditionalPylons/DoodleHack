/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OFXPResponseText.h"

@class OFWebUIController, NSString;

@interface OFXPGenericRequestHandler : XXUnknownSuperclass <OFXPResponseText> {
	OFWebUIController* mWebView;
	NSString* mRequestId;
}
@property(retain, nonatomic) OFWebUIController* webView;
@property(retain, nonatomic) NSString* requestId;
+(id)handlerWithWebView:(id)webView andRequestId:(id)anId;
-(void)onResponseText:(id)text withResponseCode:(unsigned)responseCode;
-(void)dealloc;
@end


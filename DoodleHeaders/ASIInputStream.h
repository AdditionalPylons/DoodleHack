/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ASIHTTPRequest, NSInputStream;

@interface ASIInputStream : XXUnknownSuperclass {
	NSInputStream* stream;
	ASIHTTPRequest* request;
}
@property(retain, nonatomic) NSInputStream* stream;
@property(assign, nonatomic) ASIHTTPRequest* request;
+(void)initialize;
+(id)inputStreamWithFileAtPath:(id)path request:(id)request;
+(id)inputStreamWithData:(id)data request:(id)request;
-(void)dealloc;
-(int)read:(char*)read maxLength:(unsigned)length;
-(void)open;
-(void)close;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(id)propertyForKey:(id)key;
-(BOOL)setProperty:(id)property forKey:(id)key;
-(unsigned)streamStatus;
-(id)streamError;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)forwardInvocation:(id)invocation;
@end


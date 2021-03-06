/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFJsonCoding.h"
#import "OFServerException.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface OFServerException : XXUnknownSuperclass <OFJsonCoding> {
	NSString* className;
	NSString* message;
}
@property(retain, nonatomic) NSString* className;
@property(retain, nonatomic) NSString* message;
+(id)serverExceptionWithClass:(id)aClass message:(id)message;
+(void)load;
+(id)classNameForJsonCoding;
+(void)registerJsonValueTypesForDecoding:(id)decoding;
-(BOOL)isStaleObjectException;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)encodeWithJsonCoder:(id)jsonCoder;
@end

@interface OFServerException (Session)
+(id)sslFailureException;
-(BOOL)isSslFailureException;
@end


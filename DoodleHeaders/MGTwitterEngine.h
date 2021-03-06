/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MGTwitterEngine.h"

@class NSMutableDictionary, NSObject, NSString, OAToken;
@protocol MGTwitterEngineDelegate;

@interface MGTwitterEngine : XXUnknownSuperclass {
	NSObject<MGTwitterEngineDelegate>* _delegate;
	NSMutableDictionary* _connections;
	NSString* _APIDomain;
	BOOL _secureConnection;
	NSString* _consumerKey;
	NSString* _consumerSecret;
	OAToken* _accessToken;
}
-(id)initWithDelegate:(id)delegate;
-(void)dealloc;
-(BOOL)usesSecureConnection;
-(void)setUsesSecureConnection:(BOOL)connection;
-(unsigned)numberOfConnections;
-(id)connectionIdentifiers;
-(void)closeConnection:(id)connection;
-(void)closeAllConnections;
-(id)_queryStringWithBase:(id)base parameters:(id)parameters prefixed:(BOOL)prefixed;
-(id)_encodeString:(id)string;
-(id)_sendRequestWithMethod:(id)method path:(id)path queryParameters:(id)parameters body:(id)body requestType:(int)type responseType:(int)type6;
-(id)_sendRequest:(id)request withRequestType:(int)requestType responseType:(int)type;
-(id)_baseRequestWithMethod:(id)method path:(id)path requestType:(int)type queryParameters:(id)parameters;
-(void)_parseDataForConnection:(id)connection;
-(BOOL)_isValidDelegateForSelector:(SEL)selector;
-(void)parsingSucceededForRequest:(id)request ofResponseType:(int)responseType withParsedObjects:(id)parsedObjects;
-(void)parsingFailedForRequest:(id)request ofResponseType:(int)responseType withError:(id)error;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(id)sendUpdate:(id)update;
@end

@interface MGTwitterEngine (OAuth)
-(void)setConsumerKey:(id)key secret:(id)secret;
-(id)consumerKey;
-(id)consumerSecret;
-(void)setAccessToken:(id)token;
-(id)accessToken;
-(id)getXAuthAccessTokenForUsername:(id)username password:(id)password;
@end


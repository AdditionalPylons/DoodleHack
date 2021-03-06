/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OFFBSession, NSMutableDictionary, NSObject, NSDictionary, NSString, NSMutableData, NSURLConnection, NSDate;
@protocol OFFBRequestDelegate;

@interface OFFBRequest : XXUnknownSuperclass {
	OFFBSession* _session;
	id<OFFBRequestDelegate> _delegate;
	NSString* _url;
	NSString* _method;
	id _userInfo;
	NSMutableDictionary* _params;
	NSObject* _dataParam;
	NSDate* _timestamp;
	NSURLConnection* _connection;
	NSMutableData* _responseText;
}
@property(assign, nonatomic) id<OFFBRequestDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* url;
@property(readonly, assign, nonatomic) NSString* method;
@property(readonly, assign, nonatomic) NSDictionary* params;
@property(readonly, assign, nonatomic) NSObject* dataParam;
@property(retain, nonatomic) id userInfo;
@property(readonly, assign, nonatomic) NSDate* timestamp;
@property(readonly, assign, nonatomic) BOOL loading;
+(id)request;
+(id)requestWithDelegate:(id)delegate;
+(id)requestWithSession:(id)session;
+(id)requestWithSession:(id)session delegate:(id)delegate;
-(id)md5HexDigest:(id)digest;
-(BOOL)isSpecialMethod;
-(id)urlForMethod:(id)method;
-(id)generateGetURL;
-(id)generateCallId;
-(id)generateSig;
-(void)utfAppendBody:(id)body data:(id)data;
-(id)generatePostBody;
-(id)parseXMLResponse:(id)response error:(id*)error;
-(void)failWithError:(id)error;
-(void)handleResponseData:(id)data;
-(void)connect;
-(id)initWithSession:(id)session;
-(void)dealloc;
-(id)description;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)call:(id)call params:(id)params;
-(void)call:(id)call params:(id)params dataParam:(id)param;
-(void)post:(id)post params:(id)params;
-(void)cancel;
@end


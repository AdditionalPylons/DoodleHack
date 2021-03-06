/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFFBRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface OFFBTranslationsLoader : XXUnknownSuperclass <OFFBRequestDelegate> {
}
+(id)sharedInstance;
+(void)initialize;
+(id)getFbtLocaleFor:(id)aFor;
+(BOOL)supportsLocale:(id)locale;
+(void)loadTranslationsForLocale:(id)locale delegate:(id)delegate;
+(void)loadTranslations:(id)translations;
-(id)init;
-(void)release;
-(void)executeRequest:(id)request;
-(void)loadTranslationsForLocale:(id)locale delegate:(id)delegate;
-(id)detectLocale;
-(void)loadTranslations:(id)translations;
-(id)getKeyForNativeString:(id)nativeString description:(id)description;
-(void)request:(id)request didLoad:(id)load;
-(id)getTranslationFor:(id)aFor description:(id)description;
-(id)stringWithString:(id)string comment:(id)comment;
-(void)request:(id)request didFailWithError:(id)error;
@end


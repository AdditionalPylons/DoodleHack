/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface OFDeferredThreadedCallback : XXUnknownSuperclass {
	OFRetainedPtr<NSObject> mTarget;
	OFRetainedPtr<NSObject> mParamOne;
	OFRetainedPtr<NSObject> mParamTwo;
	SEL mSelector;
	float mTimeDelay;
}
+(id)deferredThreadedCallbackWith:(id)with selector:(SEL)selector paramOne:(id)one paramTwo:(id)two onThread:(id)thread withDelay:(double)delay;
-(id)initThreadedCallbackWith:(id)with selector:(SEL)selector paramOne:(id)one paramTwo:(id)two onThread:(id)thread withDelay:(double)delay;
-(void)_invokeCallbackWithDelay;
-(void)_invokeCallback;
-(id).cxx_construct;
-(void).cxx_destruct;
@end


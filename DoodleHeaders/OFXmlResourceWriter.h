/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OFXmlResourceNode;

@interface OFXmlResourceWriter : XXUnknownSuperclass {
	OFXmlResourceNode* mRootNode;
}
+(id)xmlStringFromResources:(id)resources;
+(id)xmlWriterWithResources:(id)resources;
-(id)initWithResources:(id)resources;
-(id)buildNodeFromResource:(id)resource withKey:(id)key;
-(id)buildNodesFromResources:(id)resources;
-(id)createXmlAsString;
@end

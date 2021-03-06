/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface IciclePlatform : XXUnknownSuperclass {
	CGPoint objPosition;
	CGSize objSize;
	CGRect objFrame;
	int objType;
	int objTexture;
	IciclePlatformDesc_tag platformDesc;
}
@property(assign, nonatomic) CGPoint objPosition;
@property(assign, nonatomic) CGSize objSize;
@property(assign, nonatomic) int objType;
@property(assign, nonatomic) int objTexture;
-(id)initWithObjType:(int)objType;
-(void)dealloc;
-(float)objTopY;
-(BOOL)collidesWithPlatform:(CGRect)platform;
-(BOOL)collidesWithIcicles:(CGRect)icicles;
-(BOOL)collidesWithPolygons:(CGRect)polygons numPolygons:(int)polygons2 polygons:(const float**)polygons3;
-(void)moveWithOffsetY:(float)offsetY;
-(void)tick;
@end


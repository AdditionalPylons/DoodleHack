/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "DoodleJump-Structs.h" // Unknown library


@interface PlatformObject : NSObject {
	CGPoint objPosition;
	CGSize objSize;
	float objSpeedH;
	float objSpeedV;
	int isMovingH;
	int isExplodingOrMovingV;
	int maxDistanceV;
	int objType;
	int objTexture;
	int hasBonusObject;
	int isFalling;
	float objAlpha;
	int fadingType;
	int startFadingTime;
	int isActivated;
	int distanceV;
	unsigned char shouldExplode;
	int sharedCounter;
	int frameCounter;
	int isTouchAnimating;
	int objId;
	int shuffleFinalX;
	int wiggleSpeed;
}
@property(assign, nonatomic) CGPoint objPosition;
@property(assign, nonatomic) CGSize objSize;
@property(assign, nonatomic) int objType;
@property(assign, nonatomic) int objTexture;
@property(assign, nonatomic) int isMovingH;
@property(assign, nonatomic) int isExplodingOrMovingV;
@property(assign, nonatomic) int maxDistanceV;
@property(assign, nonatomic) float objSpeedH;
@property(assign, nonatomic) float objSpeedV;
@property(assign, nonatomic) int hasBonusObject;
@property(assign, nonatomic) int isFalling;
@property(assign, nonatomic) float objAlpha;
@property(assign, nonatomic) int fadingType;
@property(assign, nonatomic) unsigned char shouldExplode;
@property(assign, nonatomic) int isTouchAnimating;
@property(assign, nonatomic) int objId;
+(void)setTotalObjectsCreated:(int)created;
+(int)totalObjectsCreated;
+(void)setHorzMoveBoundary:(float)boundary right:(float)right;
-(id)init;
-(void)setType:(int)type;
-(void)tick;
-(void)moveWithOffsetY:(float)offsetY;
-(void)shufflePlatform;
-(void)dealloc;
@end

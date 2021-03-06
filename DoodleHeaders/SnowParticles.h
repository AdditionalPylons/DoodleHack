/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class Texture2D;

@interface SnowParticles : XXUnknownSuperclass {
	unsigned verticesBufferId;
	SnowParticle* snowParticles;
	PointSprite* vertices;
	unsigned maxParticles;
	Texture2D* particleTexture;
	int particleIndex;
	int sizeRangeStart;
	int sizeRangeEnd;
	CGBoundary_tag viewBoundary_;
	float spawnBoundary_;
}
-(id)initWithMaxParticles:(int)maxParticles;
-(void)resetParticles;
-(void)initParticle:(SnowParticle*)particle;
-(void)updateParticlesWithOffset:(float)offset;
-(void)dealloc;
@end


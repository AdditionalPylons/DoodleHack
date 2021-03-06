/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class Texture2D;

__attribute__((visibility("hidden")))
@interface BlizzardParticles : XXUnknownSuperclass {
	unsigned verticesBufferId;
	BlizzardParticle* blizzardParticles;
	void* blizzardParticlesMem;
	PointSprite* vertices;
	void* verticesMem;
	Texture2D* particleTexture;
	BlizzardParticle* activeBlizzardParticles;
	BlizzardParticle* freeBlizzardParticles;
	SEL setVolumeSEL;
	/*function-pointer*/ void* setVolumeCALL;
	unsigned maxParticles;
	/*function-pointer*/ void* activeParametricFunc;
	/*function-pointer*/ void* inactiveParametricFunc;
	CGBoundary_tag viewBoundary;
	int mode;
	int sizeRangeStart;
	int sizeRangeEnd;
	int numActiveParticles;
	int intensitySequenceIndex;
	float* intensitySequenceVector;
	float startIntensity;
	float endIntensity;
	float timeCounter;
	float nextModeChangeAtTime;
	float windDirection;
	float minParticles;
	float windVolume;
	float spawnOffsetEnabled;
	int volumeAdjustCounter;
}
@property(assign, nonatomic) float windVolume;
+(void)registerWindSound:(id)sound;
-(id)initWithMaxParticles:(int)maxParticles useHDParticle:(BOOL)particle;
-(void)reset;
-(void)setSpawnOffsetEnabled:(BOOL)enabled;
-(void)updateParticlesWithOffset:(float)offset height:(float)height;
-(void)dealloc;
@end


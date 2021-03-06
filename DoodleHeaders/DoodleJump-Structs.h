/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct _NSZone NSZone;

typedef struct OFDelegate {
	id _field1;
	id _field2;
	id _field3;
	SEL _field4;
} OFDelegate;

typedef struct {
	unsigned long _field1;
	id* _field2;
	unsigned long* _field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct {
	double latitude;
	double longitude;
} XXStruct_zYrK5D;

typedef struct CGContext* CGContextRef;

typedef struct ALCcontext_struct* ALCcontext_structRef;

typedef struct ALCdevice_struct* ALCdevice_structRef;

typedef struct _VertexTexCoord {
	float vX;
	float vY;
	float tX;
	float tY;
} VertexTexCoord;

typedef struct _FishSprite {
	CGPoint _field1;
	int _field2;
	float _field3;
} FishSprite;

typedef struct _BlinkingEyesSprite {
	CGPoint _field1;
} BlinkingEyesSprite;

typedef struct _EventPacketPlayer {
	unsigned char _field1;
	int _field2;
	unsigned char _field3;
	unsigned char _field4;
	float _field5;
} EventPacketPlayer;

typedef struct _SnowParticle {
	float _field1;
	float _field2;
	float _field3;
} SnowParticle;

typedef struct _PointSprite {
	float pX;
	float pY;
	float pSize;
} PointSprite;

typedef struct CGBoundary_tag {
	CGPoint origin;
	CGPoint center;
	CGSize size;
	float left;
	float top;
	float right;
	float bottom;
} CGBoundary_tag;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct in_addr {
	unsigned _field1;
} in_addr;

typedef struct sockaddr_in {
	unsigned char _field1;
	unsigned char _field2;
	unsigned short _field3;
	in_addr _field4;
	BOOL _field5[8];
} sockaddr_in;

typedef struct _UnderwaterLine {
	float lX;
	float lY;
	float lSpeed;
	float lHalfHeight;
} UnderwaterLine;

typedef struct _BubbleParticle {
	float _field1;
	float _field2;
	float _field3;
	unsigned char _field4;
	float _field5;
	float _field6;
	float _field7;
} BubbleParticle;

typedef struct _Color4ub {
	unsigned char _field1;
	unsigned char _field2;
	unsigned char _field3;
	unsigned char _field4;
} Color4ub;

typedef struct _TexParams {
	unsigned _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
} TexParams;

typedef struct _RainParticle {
	float _field1;
	int _field2;
} RainParticle;

typedef struct CGAffineTransform {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
} CGAffineTransform;

typedef struct sqlite3 sqlite3;

typedef struct _BlizzardParticle {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	struct BlizzardParticle* _field5;
	PointSprite _field6;
} BlizzardParticle;

typedef struct _FrameData {
	int ticks;
	int objTexture;
} FrameData;

typedef struct IciclePlatformDesc_tag {
	int textureIndex;
	int numIciclePolygons;
	int numPlatformPolygons;
	float** iciclePolygons;
	float** platformPolygons;
} IciclePlatformDesc_tag;

typedef struct ResourceDescription ResourceDescription;

typedef struct _Vector_impl {
	ResourceDescription* _M_start;
	ResourceDescription* _M_finish;
	ResourceDescription* _M_end_of_storage;
} Vector_impl;

template<>
struct vector<OFResourceNameMap::ResourceDescription,std::allocator<OFResourceNameMap::ResourceDescription> > {
	Vector_impl _M_impl;
};

typedef struct OFResourceNameMap {
	/*function-pointer*/ void** _vptr$OFSmartObject;
	int m_iRefCount;
	vector<OFResourceNameMap::ResourceDescription,std::allocator<OFResourceNameMap::ResourceDescription> > mResources;
} OFResourceNameMap;

typedef struct FieldDescription FieldDescription;

typedef struct _Vector_impl {
	FieldDescription* _field1;
	FieldDescription* _field2;
	FieldDescription* _field3;
} Vector_impl;

template<>
struct vector<OFResourceDataMap::FieldDescription,std::allocator<OFResourceDataMap::FieldDescription> > {
	Vector_impl _field1;
};

typedef struct OFResourceDataMap {
	/*function-pointer*/ void** _field1;
	int _field2;
	vector<OFResourceDataMap::FieldDescription,std::allocator<OFResourceDataMap::FieldDescription> > _field3;
} OFResourceDataMap;

typedef struct OFHttpServiceRequestContainer* OFHttpServiceRequestContainerRef;
typedef struct _Vector_impl {
	OFHttpServiceRequestContainerRef _field1;
	OFHttpServiceRequestContainerRef _field2;
	OFHttpServiceRequestContainerRef _field3;
} Vector_impl;

template<>
struct vector<OFHttpServiceRequestContainer,std::allocator<OFHttpServiceRequestContainer> > {
	Vector_impl _field1;
};

@class NSString;
template<>
struct OFRetainedPtr<NSString> {
	NSString* m_pObject;
};

typedef struct OFHttpService {
	/*function-pointer*/ void** _field1;
	int _field2;
	/*function-pointer*/ void** _field3;
	OFRetainedPtr<NSString> _field4;
	bool _field5;
	vector<OFHttpServiceRequestContainer,std::allocator<OFHttpServiceRequestContainer> > _field6;
} OFHttpService;

template<>
struct OFPointer<OFHttpService> {
	OFHttpService* m_pObject;
};

struct OFHttpServiceRequestContainer;

template<>
struct OFPointer<OFHttpQueryParameter>;
typedef struct _Vector_impl {
	OFPointer<OFHttpQueryParameter>* _field1;
	OFPointer<OFHttpQueryParameter>* _field2;
	OFPointer<OFHttpQueryParameter>* _field3;
} Vector_impl;

template<>
struct vector<OFPointer<OFHttpQueryParameter>,std::allocator<OFPointer<OFHttpQueryParameter> > > {
	Vector_impl _field1;
};

typedef struct ScopeDescriptor ScopeDescriptor;
typedef struct _Vector_impl {
	ScopeDescriptor* _M_start;
	ScopeDescriptor* _M_finish;
	ScopeDescriptor* _M_end_of_storage;
} Vector_impl;

template<>
struct vector<OFISerializer::ScopeDescriptor,std::allocator<OFISerializer::ScopeDescriptor> > {
	Vector_impl _M_impl;
};

typedef struct OFHttpNestedQueryStringWriter {
	/*function-pointer*/ void** _field1;
	int _field2;
	vector<OFISerializer::ScopeDescriptor,std::allocator<OFISerializer::ScopeDescriptor> > _field3;
	bool _field4;
	vector<OFPointer<OFHttpQueryParameter>,std::allocator<OFPointer<OFHttpQueryParameter> > > _field5;
	bool _field6;
} OFHttpNestedQueryStringWriter;

template<>
struct OFPointer<OFHttpNestedQueryStringWriter> {
	OFHttpNestedQueryStringWriter* _field1;
};

template<>
struct OFPointer<OFHighScoreBatchEntry>;

typedef struct _Vector_impl {
	OFPointer<OFHighScoreBatchEntry>* _M_start;
	OFPointer<OFHighScoreBatchEntry>* _M_finish;
	OFPointer<OFHighScoreBatchEntry>* _M_end_of_storage;
} Vector_impl;

template<>
struct vector<OFPointer<OFHighScoreBatchEntry>,std::allocator<OFPointer<OFHighScoreBatchEntry> > > {
	Vector_impl _M_impl;
};

typedef struct _Vector_impl {
	OFDelegate* _M_start;
	OFDelegate* _M_finish;
	OFDelegate* _M_end_of_storage;
} Vector_impl;

template<>
struct vector<OFDelegate,std::allocator<OFDelegate> > {
	Vector_impl _M_impl;
};

@class NSObject, NSThread;
@protocol OFCallbackable;
typedef struct OFDelegate {
	NSObject<OFCallbackable>* mTarget;
	NSObject* mUserParam;
	NSThread* mTargetThread;
	SEL mSelector;
} OFDelegate;

typedef struct OFReachabilityObserver {
	/*function-pointer*/ void** _field1;
	/*function-pointer*/ void** _field2;
	int _field3;
	OFDelegate _field4;
} OFReachabilityObserver;

typedef struct __CFSocket* CFSocketRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFData* CFDataRef;

template<>
struct OFPointer<OFResourceNameMap> {
	OFResourceNameMap* m_pObject;
};

typedef struct sqlite3_stmt sqlite3_stmt;

typedef struct OFSdbmHashedString* OFSdbmHashedStringRef;

typedef struct _Vector_impl {
	OFSdbmHashedStringRef _field1;
	OFSdbmHashedStringRef _field2;
	OFSdbmHashedStringRef _field3;
} Vector_impl;

template<>
struct vector<OFSdbmHashedString,std::allocator<OFSdbmHashedString> > {
	Vector_impl _field1;
};

typedef struct OFSqlQuery {
	int _field1;
	sqlite3* _field2;
	sqlite3_stmt* _field3;
	char* _field4;
	vector<OFSdbmHashedString,std::allocator<OFSdbmHashedString> > _field5;
} OFSqlQuery;

struct ScopeDescriptor;

template<>
struct OFPointer<OFHttpQueryParameter>;

typedef struct OFXmlElement OFXmlElement;
template<>
struct OFPointer<OFXmlElement> {
	OFXmlElement* m_pObject;
};

typedef struct _Vector_impl {
	OFPointer<OFXmlElement>* _M_start;
	OFPointer<OFXmlElement>* _M_finish;
	OFPointer<OFXmlElement>* _M_end_of_storage;
} Vector_impl;

template<>
struct vector<OFPointer<OFXmlElement>,std::allocator<OFPointer<OFXmlElement> > > {
	Vector_impl _M_impl;
};

template<>
struct OFRetainedPtr<NSDictionary> {
	id _field1;
};

struct OFXmlElement {
	/*function-pointer*/ void** _field1;
	int _field2;
	struct OFRetainedPtr<NSString> _field3;
	struct OFRetainedPtr<NSString> _field4;
	struct vector<OFPointer<OFXmlElement>,std::allocator<OFPointer<OFXmlElement> > > _field5;
	struct OFRetainedPtr<NSDictionary> _field6;
	bool _field7;
};

template<>
struct OFRetainedPtr<NSObject> {
	NSObject* m_pObject;
};

typedef struct OFISerializer {
	/*function-pointer*/ void** _field1;
	int _field2;
	vector<OFISerializer::ScopeDescriptor,std::allocator<OFISerializer::ScopeDescriptor> > _field3;
	bool _field4;
} OFISerializer;

typedef struct OFHttpRequestObserver {
	/*function-pointer*/ void** _field1;
} OFHttpRequestObserver;

template<>
struct less<int>;

typedef struct _Rb_tree_node_base {
	int _M_color;
	struct Rb_tree_node_base* _M_parent;
	struct Rb_tree_node_base* _M_left;
	struct Rb_tree_node_base* _M_right;
} Rb_tree_node_base;

template<>
struct _Rb_tree_impl<std::less<int>,false> {
	less<int> _M_key_compare;
	Rb_tree_node_base _M_header;
	unsigned _M_node_count;
};

template<>
struct _Rb_tree<int,std::pair<const int, OFDelegate>,std::_Select1st<std::pair<const int, OFDelegate> >,std::less<int>,std::allocator<std::pair<const int, OFDelegate> > > {
	_Rb_tree_impl<std::less<int>,false> _M_impl;
};

template<>
struct map<int,OFDelegate,std::less<int>,std::allocator<std::pair<const int, OFDelegate> > > {
	_Rb_tree<int,std::pair<const int, OFDelegate>,std::_Select1st<std::pair<const int, OFDelegate> >,std::less<int>,std::allocator<std::pair<const int, OFDelegate> > > _M_t;
};

typedef struct FieldReference FieldReference;
typedef struct _Vector_impl {
	FieldReference* _field1;
	FieldReference* _field2;
	FieldReference* _field3;
} Vector_impl;

template<>
struct vector<OFViewDataMap::FieldReference,std::allocator<OFViewDataMap::FieldReference> > {
	Vector_impl _field1;
};

typedef struct OFViewDataMap {
	/*function-pointer*/ void** _field1;
	int _field2;
	vector<OFViewDataMap::FieldReference,std::allocator<OFViewDataMap::FieldReference> > _field3;
} OFViewDataMap;

template<>
struct OFPointer<OFViewDataMap> {
	OFViewDataMap* m_pObject;
};

template<>
struct vector<OFResourceControllerMap::ResourceDescription,std::allocator<OFResourceControllerMap::ResourceDescription> > {
	Vector_impl _field1;
};

typedef struct OFResourceControllerMap {
	/*function-pointer*/ void** _field1;
	int _field2;
	vector<OFResourceControllerMap::ResourceDescription,std::allocator<OFResourceControllerMap::ResourceDescription> > _field3;
} OFResourceControllerMap;

template<>
struct OFPointer<OFResourceControllerMap> {
	OFResourceControllerMap* m_pObject;
};

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct OFImageViewHttpServiceObserver* OFImageViewHttpServiceObserverRef;

template<>
struct OFPointer<OFImageViewHttpServiceObserver> {
	OFImageViewHttpServiceObserverRef m_pObject;
};

typedef struct CGPath* CGPathRef;

typedef struct CGGradient* CGGradientRef;

typedef struct yajl_gen_t yajl_gen_t;

typedef struct yajl_handle_t yajl_handle_t;

typedef struct {
	/*function-pointer*/ void* _field1;
	/*function-pointer*/ void* _field2;
	/*function-pointer*/ void* _field3;
	/*function-pointer*/ void* _field4;
	/*function-pointer*/ void* _field5;
	/*function-pointer*/ void* _field6;
	/*function-pointer*/ void* _field7;
	/*function-pointer*/ void* _field8;
	/*function-pointer*/ void* _field9;
	/*function-pointer*/ void* _field10;
	/*function-pointer*/ void* _field11;
} XXStruct_ZMV16B;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct _CFHTTPAuthentication* CFHTTPAuthenticationRef;

typedef struct __sbuf {
	char* _field1;
	int _field2;
} sbuf;

typedef struct __sFILEX sFILEX;

typedef struct __sFILE {
	char* _field1;
	int _field2;
	int _field3;
	short _field4;
	short _field5;
	sbuf _field6;
	int _field7;
	void* _field8;
	/*function-pointer*/ void* _field9;
	/*function-pointer*/ void* _field10;
	/*function-pointer*/ void* _field11;
	/*function-pointer*/ void* _field12;
	sbuf _field13;
	sFILEX* _field14;
	int _field15;
	unsigned char _field16[3];
	unsigned char _field17[1];
	sbuf _field18;
	int _field19;
	long long _field20;
} FILE;

struct FieldReference;

typedef struct OFKnownCredential {
	OFRetainedPtr<NSString> _field1;
	OFRetainedPtr<NSString> _field2;
	OFRetainedPtr<NSString> _field3;
	OFRetainedPtr<NSString> _field4;
} OFKnownCredential;

typedef struct OFFramedNavigationControllerVisibilityFlags {
	unsigned showBanner : 1;
	unsigned showBottomView : 1;
	unsigned showNavBar : 1;
} OFFramedNavigationControllerVisibilityFlags;

template<>
struct OFPointer<OFReachabilityObserver> {
	OFReachabilityObserver* m_pObject;
};

@class OFFriendImporter;
template<>
struct OFRetainedPtr<OFFriendImporter> {
	OFFriendImporter* m_pObject;
};

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct uuid_command {
	unsigned _field1;
	unsigned _field2;
	unsigned char _field3[16];
} uuid_command;

typedef struct CrittercismJKPtrRange {
	char* ptr;
	unsigned length;
} CrittercismJKPtrRange;

typedef struct CrittercismJKManagedBuffer {
	CrittercismJKPtrRange bytes;
	unsigned flags;
	unsigned roundSizeUpToMultipleOf;
} CrittercismJKManagedBuffer;

typedef struct CrittercismJKFastClassLookup {
	void* stringClass;
	void* numberClass;
	void* arrayClass;
	void* dictionaryClass;
	void* nullClass;
} CrittercismJKFastClassLookup;

typedef struct CrittercismJKEncodeCache {
	id object;
	unsigned offset;
	unsigned length;
} CrittercismJKEncodeCache;

@class NSError;
typedef struct CrittercismJKEncodeState {
	CrittercismJKManagedBuffer _field1;
	CrittercismJKManagedBuffer _field2;
	unsigned _field3;
	CrittercismJKFastClassLookup _field4;
	CrittercismJKEncodeCache _field5[1024];
	unsigned _field6;
	unsigned _field7;
	unsigned _field8;
	NSError* _field9;
	id _field10;
	SEL _field11;
	/*function-pointer*/ void* _field12;
	id _field13;
	/*function-pointer*/ void _field14;
} CrittercismJKEncodeState;

typedef struct CrittercismJKConstPtrRange {
	char* ptr;
	unsigned length;
} CrittercismJKConstPtrRange;

typedef struct CrittercismJKConstBuffer {
	CrittercismJKConstPtrRange bytes;
} CrittercismJKConstBuffer;

typedef struct CrittercismJKTokenCacheItem CrittercismJKTokenCacheItem;

typedef struct CrittercismJKTokenValue {
	CrittercismJKConstPtrRange ptrRange;
	unsigned type;
	unsigned hash;
	union {
		long long longLongValue;
		unsigned long long unsignedLongLongValue;
		double doubleValue;
	} number;
	CrittercismJKTokenCacheItem* cacheItem;
} CrittercismJKTokenValue;

typedef struct CrittercismJKParseToken {
	CrittercismJKConstPtrRange tokenPtrRange;
	unsigned type;
	CrittercismJKTokenValue value;
	CrittercismJKManagedBuffer tokenBuffer;
} CrittercismJKParseToken;

typedef struct CrittercismJKObjectStack {
	void** objects;
	void** keys;
	unsigned* cfHashes;
	unsigned count;
	unsigned index;
	unsigned roundSizeUpToMultipleOf;
	unsigned flags;
} CrittercismJKObjectStack;

typedef struct CrittercismJKTokenCache {
	CrittercismJKTokenCacheItem* items;
	unsigned count;
	unsigned prng_lfsr;
	unsigned char age[1024];
} CrittercismJKTokenCache;

typedef struct CrittercismJKObjCImpCache {
	Class NSNumberClass;
	/*function-pointer*/ void* NSNumberAlloc;
	/*function-pointer*/ void* NSNumberInitWithUnsignedLongLong;
} CrittercismJKObjCImpCache;

typedef struct CrittercismJKParseState {
	unsigned _field1;
	CrittercismJKConstBuffer _field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7;
	unsigned _field8;
	CrittercismJKParseToken _field9;
	CrittercismJKObjectStack _field10;
	CrittercismJKTokenCache _field11;
	CrittercismJKObjCImpCache _field12;
	NSError* _field13;
	int _field14;
	BOOL _field15;
} CrittercismJKParseState;

typedef struct CrittercismJKHashTableEntry {
	unsigned _field1;
	id _field2;
	id _field3;
} CrittercismJKHashTableEntry;

typedef struct _RGBColorParams {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
} RGBColorParams;

typedef struct CGImage* CGImageRef;

typedef struct OFSettings* OFSettingsRef;

typedef struct OFXmlReader* OFXmlReaderRef;

typedef struct objc_property objc_property;



/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "DoodleJump-Structs.h"

@class UIScrollView;

@interface OFPageSelectionView : XXUnknownSuperclass <UIScrollViewDelegate> {
	UIScrollView* pageScroller;
	int iDontGetItYet;
	int currentPage;
	int maxPages;
}
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame maxPages:(int)pages;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
@end

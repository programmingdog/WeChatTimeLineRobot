/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"


@interface MMGridViewLayoutStrategyBase : MMObject {
	int _type;
	CGSize _itemSize;
	int _itemSpacingH;
	int _itemSpacingV;
	UIEdgeInsets _minEdgeInsets;
	BOOL _centeredGridH;
	int _itemCount;
	UIEdgeInsets _edgeInsets;
	CGRect _gridBounds;
	CGSize _contentSize;
	BOOL m_shouldAutoAdaptColumn;
	BOOL m_hasSetColumn;
	BOOL m_shouldAutoAdaptRow;
	BOOL m_hasSetRow;
}
@property(readonly, assign, nonatomic) CGSize contentSize;
@property(readonly, assign, nonatomic) CGRect gridBounds;
@property(readonly, assign, nonatomic) UIEdgeInsets edgeInsets;
@property(readonly, assign, nonatomic) int itemCount;
@property(readonly, assign, nonatomic) BOOL centeredGridH;
@property(readonly, assign, nonatomic) UIEdgeInsets minEdgeInsets;
@property(readonly, assign, nonatomic) int itemSpacingV;
@property(readonly, assign, nonatomic) int itemSpacingH;
@property(readonly, assign, nonatomic) CGSize itemSize;
@property(readonly, assign, nonatomic) int type;
@property(assign, nonatomic) BOOL m_shouldAutoAdaptRow;
@property(assign, nonatomic) BOOL m_shouldAutoAdaptColumn;
-(void)setEdgeAndContentSizeFromAbsoluteContentSize:(CGSize)absoluteContentSize;
-(void)setupItemSize:(CGSize)size andItemSpacingH:(int)h andItemSpacingV:(int)v withMinEdgeInsets:(UIEdgeInsets)minEdgeInsets andCenteredGrid:(BOOL)grid;
-(id)init;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSMutableArray, NSString;
@protocol MMShareActionSheetDelegate;

@interface MMShareActionSheet : XXUnknownSuperclass {
	NSString* m_title;
	NSString* m_cancelButtonTitle;
	NSMutableArray* m_sections;
	UIView* m_transparentView;
	UIView* m_contentView;
	int m_lastOri;
	BOOL m_dismissAfterSelected;
	id<MMShareActionSheetDelegate> m_delegate;
}
@property(assign, nonatomic) BOOL m_dismissAfterSelected;
@property(assign, nonatomic) __weak id<MMShareActionSheetDelegate> m_delegate;
+(int)getIconActionSheetWidth;
-(void).cxx_destruct;
-(void)didRotate:(id)rotate;
-(void)onMMShareActionSheetSection:(id)section didSelectItem:(id)item atPosition:(int)position;
-(void)OnCancel:(id)cancel;
-(void)handleTap:(id)tap;
-(void)dismissAnimate:(BOOL)animate;
-(void)reloadInnerView;
-(void)removeFromView;
-(void)cancel;
-(void)dealloc;
-(void)show;
-(id)initWithSectionItems:(id)sectionItems cancelButtonTitle:(id)title delegate:(id)delegate title:(id)title4;
-(id)initWithSectionItems:(id)sectionItems cancelButtonTitle:(id)title delegate:(id)delegate;
-(id)initWithSectionItems:(id)sectionItems cancelButtonTitle:(id)title delegate:(id)delegate headerView:(id)view;
@end


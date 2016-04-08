/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "MMTableViewCell.h"

@class UIImageView, UIColor, UIGestureRecognizer, NSMutableArray, NSIndexPath, UIView, NSString;

@interface WCCardMultiMenuTableViewCell : MMTableViewCell <UIGestureRecognizerDelegate> {
	UIView* _menuContentView;
	UIView* _actualContentView;
	UIGestureRecognizer* _panGestureRecognizer;
	float _initialTouchPositionX;
	BOOL _shouldDisplayContextMenuView;
	BOOL _contextMenuHidden;
	BOOL _shouldDisplayRightSwipeTips;
	UIImageView* _copyedBackgroundView;
	BOOL _bIsNeedUpdateMenu;
	BOOL _contextMenuEnabled;
	NSIndexPath* _indexPath;
	NSMutableArray* _arrMenuItems;
	UIColor* _menuBackgroundColor;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIColor* menuBackgroundColor;
@property(assign, nonatomic) BOOL contextMenuEnabled;
@property(retain, nonatomic) NSMutableArray* arrMenuItems;
@property(retain, nonatomic) NSIndexPath* indexPath;
-(void).cxx_destruct;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(float)getCurrentWidth;
-(void)showRightSwipeTips;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(id)animation;
-(void)resetActionContentView;
-(void)setMenuOptionsViewHidden:(BOOL)hidden animated:(BOOL)animated completionHandler:(id)handler;
-(void)onClearBackgroundView;
-(id)contentView;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setSelected:(BOOL)selected;
-(void)prepareForReuse;
-(void)onButtonClicked:(id)clicked;
-(id)FindTableView:(id)view;
-(void)updateMenuView;
-(void)handlePan:(id)pan;
-(BOOL)isMenuHidden;
-(BOOL)isPointInMenu:(CGPoint)menu;
-(void)hideMenuOptionsAnimated:(BOOL)animated;
-(void)forceHideMenuOptionsAnimated:(BOOL)animated;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

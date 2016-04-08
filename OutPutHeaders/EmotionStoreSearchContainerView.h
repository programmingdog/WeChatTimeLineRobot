/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIScrollViewDelegate.h"
#import "MMUIView.h"

@class UIColor, UIImageView, NSMutableArray, UIScreenEdgePanGestureRecognizer, UIView, NSString, UIWebView, MMUIButton, StoreEmotionSearchJSLogic, MMUISearchBar;

@interface EmotionStoreSearchContainerView : MMUIView <UIScrollViewDelegate> {
	NSMutableArray* m_logicStack;
	MMUISearchBar* m_originSearchBar;
	UIImageView* m_searchBarWrap;
	MMUIButton* m_backButton;
	MMUISearchBar* m_fakeSearchBar;
	UIScreenEdgePanGestureRecognizer* m_panGesture;
	BOOL m_hasMoving;
	float m_moveStartOffset;
	float m_moveCurOffset;
	UIWebView* m_frontestView;
	UIWebView* m_bottomView;
	UIView* m_bottomViewShadow;
	UIColor* _webViewBGColor;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIColor* webViewBGColor;
@property(readonly, assign, nonatomic) StoreEmotionSearchJSLogic* lastSearchJSLogic;
-(void).cxx_destruct;
-(void)updateFrontestViewPosition;
-(void)moveFrontestViewToRight;
-(void)cancelMoveFrontestView;
-(void)handlePanGesture:(id)gesture;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)onBackBtnClick;
-(void)showFakeSearchBarAnimate;
-(void)showFakeSearchBarWithBackButton;
-(void)configFakeSearchBarWithBackButton;
-(void)keyboardDidHide:(id)keyboard;
-(void)hideKeyboard;
-(void)enableButton:(id)button;
-(void)removeLastSearchJSLogic;
-(void)cancelSearch;
-(void)addSearchJSLogic:(id)logic;
-(id)initWithUISearchBar:(id)uisearchBar;
-(void)dealloc;
@end

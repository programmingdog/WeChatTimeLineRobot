/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIWebViewDelegate.h"

@class UIWebView, NSString;

@interface MMWCWebviewCacheCleaner : XXUnknownSuperclass <UIWebViewDelegate> {
	BOOL _bHaveReload;
	UIWebView* _unvisiableWebView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIWebView* unvisiableWebView;
-(void).cxx_destruct;
-(void)webViewDidFinishLoad:(id)webView;
-(void)cleanCacheForMainUrl:(id)mainUrl;
@end

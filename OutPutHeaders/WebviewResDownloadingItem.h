/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class WebviewLocalResItem, NSString;

@interface WebviewResDownloadingItem : MMObject {
	WebviewLocalResItem* _resItem;
	long long _offset;
	long long _fileSize;
	NSString* _fileName;
}
@property(retain, nonatomic) NSString* fileName;
@property(assign, nonatomic) long long fileSize;
@property(assign, nonatomic) long long offset;
@property(retain, nonatomic) WebviewLocalResItem* resItem;
-(void).cxx_destruct;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface SendQRCodeByEmailReq : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* content;
@property(retain, nonatomic) NSString* tittle;
@property(retain, nonatomic) NSMutableArray* toList;
@property(assign, nonatomic) unsigned toCount;
@property(retain, nonatomic) NSString* qrcodeUserName;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSData, BaseRequest;

@interface FestivalHongBaoReq : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned subscribe;
@property(assign, nonatomic) unsigned long long reqTime;
@property(retain, nonatomic) NSData* sendKey;
@property(retain, nonatomic) SKBuiltinBuffer_t* reqText;
@property(assign, nonatomic) unsigned outPutType;
@property(assign, nonatomic) unsigned cgiCmd;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end


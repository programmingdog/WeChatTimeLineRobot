/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "PBCoding.h"

@class NSString;

@interface DeviceRankRecordItem : MMObject <PBCoding> {
	NSString* _nsTitle;
	unsigned long _uiRankScore;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long uiRankScore;
@property(retain, nonatomic) NSString* nsTitle;
-(void).cxx_destruct;
@end


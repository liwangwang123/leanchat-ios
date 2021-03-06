//
//  CDIMClient.h
//  LeanChat
//
//  Created by lzw on 15/1/21.
//  Copyright (c) 2015年 AVOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"

@interface CDIM : NSObject

@property AVIMClient* imClient;

+ (instancetype)sharedInstance;

-(void)open;

-(BOOL)isOpened;

- (void)close;

-(void)fecthConvWithId:(NSString*)convid callback:(AVIMConversationResultBlock)callback;

- (void)fetchConvWithUserId:(NSString *)userId callback:(AVIMConversationResultBlock)callback ;

-(void)fetchConvsWithIds:(NSSet*)convids callback:(AVIMArrayResultBlock)callback;

-(void)createConvWithUserIds:(NSArray*)userIds callback:(AVIMConversationResultBlock)callback;

- (void)updateConv:(AVIMConversation *)conv name:(NSString *)name attrs:(NSDictionary *)attrs callback:(AVIMBooleanResultBlock)callback ;

-(void)findGroupedConvsWithBlock:(AVIMArrayResultBlock)block;

-(NSArray*)queryMsgsWithConv:(AVIMConversation*)conv msgId:(NSString*)msgId maxTime:(int64_t)time limit:(int)limit error:(NSError**)theError;

#pragma mark - msg utils
+(NSString*)getMsgTitle:(AVIMTypedMessage*)msg;

@end

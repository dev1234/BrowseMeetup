//
//  GroupBuilder.h
//  BrowseMeetup
//
//  Created by 白 云鹏 on 15/8/12.
//  Copyright (c) 2015年 baiyunpeng.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GroupBuilder : NSObject

+ (NSArray *)groupsFromJSON:(NSData *)objectNotation error:(NSError **)error;

@end

//
//  Group.h
//  BrowseMeetup
//
//  Created by 白 云鹏 on 15/8/11.
//  Copyright (c) 2015年 baiyunpeng.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Group : NSObject
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *description;
@property (strong, nonatomic) NSString *who;
@property (strong, nonatomic) NSString *country;
@property (strong, nonatomic) NSString *city;
@end

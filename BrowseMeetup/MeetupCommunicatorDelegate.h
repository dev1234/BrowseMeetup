//
//  MeetupCommunicatorDelegate.h
//  BrowseMeetup
//
//  Created by 白 云鹏 on 15/8/11.
//  Copyright (c) 2015年 baiyunpeng.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MeetupCommunicatorDelegate
- (void)receivedGroupsJSON:(NSData *)objectNotation;
- (void)fetchingGroupsFailedWithError:(NSError *)error;
@end

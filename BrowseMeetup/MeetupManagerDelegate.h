//
//  MeetupManagerDelegate.h
//  BrowseMeetup
//
//  Created by 白 云鹏 on 15/8/12.
//  Copyright (c) 2015年 baiyunpeng.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MeetupManagerDelegate
- (void)didReceiveGroups:(NSArray *)groups;
- (void)fetchingGroupsFailedWithError:(NSError *)error;
@end

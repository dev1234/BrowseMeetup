//
//  MeetupCommunicator.m
//  BrowseMeetup
//
//  Created by 白 云鹏 on 15/8/11.
//  Copyright (c) 2015年 baiyunpeng.com. All rights reserved.
//

#import "MeetupCommunicator.h"
#import "MeetupCommunicatorDelegate.h"

#define API_KEY @"1f5718c16a7fb3a5452f45193232"
#define PAGE_COUNT 20

@implementation MeetupCommunicator

- (void)searchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate
{
    NSString *urlAsString = [NSString stringWithFormat:@"https://api.meetup.com/2/groups?lat=%f&lon=%f&page=%d&key=%@", coordinate.latitude, coordinate.longitude, PAGE_COUNT, API_KEY];
    NSURL *url = [[NSURL alloc] initWithString:urlAsString];
    NSLog(@"%@", urlAsString);
    
    [NSURLConnection sendAsynchronousRequest:[[NSURLRequest alloc] initWithURL:url] queue:[[NSOperationQueue alloc] init] completionHandler:^(NSURLResponse *response, NSData *data, NSError *error) {
        
        if (error) {
            [self.delegate fetchingGroupsFailedWithError:error];
        } else {
            [self.delegate receivedGroupsJSON:data];
        }
    }];
}

@end
